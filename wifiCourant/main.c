/*!
 * \file
 * \brief WiFiESP + HallCurrent5 Example
 *
 * # Description
 * This example connects to a WiFi network and serves a web page displaying the current value measured by HallCurrent5 click.
 * The current value is also available in JSON format.
 *
 * The demo application is composed of two sections :
 *
 * ## Application Init
 * Initializes WiFi communication, connects to the desired WiFi network,
 * initializes the HallCurrent5 sensor and creates a web server.
 *
 * ## Application Task  
 * Waits for the client request (paste IP address in your web browser).
 * When a request is received, sends an HTML page with the latest current measurement.
 * The current value is also available in JSON format for React applications.
 *
 * \author MikroE Team
 */

 #include "board.h"
 #include "log.h"
 #include "wifiesp.h"
 #include "hallcurrent5.h"
 #include "string.h"
 #include <stdio.h>
 #include "conversions.h"
 
 
 // WiFi credentials
 #define APP_SSID        "Orange-25D3"
 #define APP_PASSWORD    "B2Y7Y4DT0R6"
 
 // Buffer size
 #define PROCESS_BUFFER_SIZE 610
 
 static hallcurrent5_t hallcurrent5;
 static log_t logger;
 
 // Modified: HTML page with JSON data embedded
 uint8_t page_template[] = "<h1>Current= %f</h1><script>const currentData = %s;</script>";
 uint8_t json_data[50];  // Buffer for JSON data
 uint8_t page[150];      // Buffer for the formatted HTML page
 uint8_t page_len[10] = { 0 };
 uint8_t send_buf[10] = { 0 };
 static uint8_t link_id[2] = { 0 };
 
 static wifiesp_t wifiesp;
 
 static char app_buf[PROCESS_BUFFER_SIZE] = { 0 };
 static int32_t app_buf_len = 0;
 
 static err_t app_error_flag;
 
 // ------------------------------------------------------- ADDITIONAL FUNCTIONS
 
 static void wifiesp_clear_app_buf(void)
 {
     memset(app_buf, 0, app_buf_len);
     app_buf_len = 0;
 }
 
 static void wifiesp_log_app_buf(void)
 {
     if (app_buf_len > 0 && app_buf_len < PROCESS_BUFFER_SIZE)
     {
         app_buf[app_buf_len] = '\0'; // Terminer la chaîne proprement
         log_printf(&logger, "%s", app_buf);
     }
 }
 
 static err_t wifiesp_process(void)
 {
     uint8_t rx_buf[PROCESS_BUFFER_SIZE] = { 0 };
     int32_t rx_size = 0;
     rx_size = wifiesp_generic_read(&wifiesp, rx_buf, PROCESS_BUFFER_SIZE);
     if (rx_size > 0)
     {
         int32_t buf_cnt = app_buf_len;
         if (((app_buf_len + rx_size) > PROCESS_BUFFER_SIZE) && (app_buf_len > 0))
         {
             buf_cnt = PROCESS_BUFFER_SIZE - ((app_buf_len + rx_size) - PROCESS_BUFFER_SIZE);
             memmove(app_buf, &app_buf[PROCESS_BUFFER_SIZE - buf_cnt], buf_cnt);
         }
         for (int32_t rx_cnt = 0; rx_cnt < rx_size; rx_cnt++)
         {
             if (rx_buf[rx_cnt])
             {
                 app_buf[buf_cnt++] = rx_buf[rx_cnt];
                 if (app_buf_len < PROCESS_BUFFER_SIZE)
                 {
                     app_buf_len++;
                 }
             }
         }
         return WIFIESP_OK;
     }
     return WIFIESP_ERROR;
 }
 
 static err_t wifiesp_rsp_check(char * response)
 {
     //uint32_t timeout_cnt = 0;
     //uint32_t timeout = 200000;
     wifiesp_clear_app_buf();
     wifiesp_process();
     while ((0 == strstr(app_buf, response)) &&
             (0 == strstr(app_buf, WIFIESP_RSP_ERROR)))
     {
         wifiesp_process();
         //if (timeout_cnt++ > timeout)
         //{
            // wifiesp_clear_app_buf();
            // return WIFIESP_ERROR_TIMEOUT;
         //}
         Delay_ms(1);
     }
     Delay_ms(5);
     wifiesp_process();
     if (strstr(app_buf, response))
     {
         return WIFIESP_OK;
     }
     else if (strstr(app_buf, WIFIESP_RSP_ERROR))
     {
         return WIFIESP_ERROR_CMD;
     }
     return WIFIESP_ERROR_UNKNOWN;
 }
 
 static void wifiesp_error_check(err_t error_flag)
 {
     switch (error_flag)
     {
         case WIFIESP_OK:
         {
             wifiesp_log_app_buf();
             break;
         }
         case WIFIESP_ERROR:
         {
             log_error(&logger, " Overflow!");
             break;
         }
         case WIFIESP_ERROR_TIMEOUT:
         {
             log_error(&logger, " Timeout!");
             break;
         }
         case WIFIESP_ERROR_CMD:
         {
             log_error(&logger, " CMD!");
             break;
         }
         case WIFIESP_ERROR_UNKNOWN:
         default:
         {
             log_error(&logger, " Unknown!");
             break;
         }
     }
     log_printf(&logger, "\r\n-----------------------------------\r\n");
     Delay_ms(500);
 }
 
 void wifi_communication_init(void)
 {
     wifiesp_process(); // dummy read
     wifiesp_clear_app_buf();
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_CHECK, NULL);
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_RESTORE, NULL);
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
     uart_clear(&wifiesp.uart);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_CHECK_FIRMWARE, NULL);
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_SET_MODE, "1");
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_clear_app_buf();
     strcpy(app_buf, "\"");
     strcat(app_buf, APP_SSID);
     strcat(app_buf, "\",\"");
     strcat(app_buf, APP_PASSWORD);
     strcat(app_buf, "\"");
     app_buf_len = strlen(app_buf);
     wifiesp_send_cmd(&wifiesp, WIFIESP_CONNECT, app_buf);
     wifiesp_clear_app_buf();
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_SET_MULTIPLE_CONNECTION, "1");
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_SET_AS_SERVER, "1,80");
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
   
     wifiesp_send_cmd(&wifiesp, WIFIESP_GET_IP, NULL);
     app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
     wifiesp_error_check(app_error_flag);
 }
 
 static void wifiesp_str_cut_chr(uint8_t *str, uint8_t chr)
 {
     uint16_t cnt_0 = 0;
     uint16_t cnt_1 = 0;
     for (cnt_0 = 0; cnt_0 < strlen(str); cnt_0++)
     {
         if (str[cnt_0] == chr)
         {
             for (cnt_1 = cnt_0; cnt_1 < strlen(str); cnt_1++)
             {
                 str[cnt_1] = str[cnt_1 + 1];
             }
         }
     }
 }
 
 // ------------------------------------------------------ APPLICATION FUNCTIONS
 
 void application_init(void)
 {
     log_cfg_t log_cfg;
     wifiesp_cfg_t wifiesp_cfg;
     hallcurrent5_cfg_t hallcurrent5_cfg;
   
     /**
      * Logger initialization.
      * Default baud rate: 115200
      * Default log level: LOG_LEVEL_DEBUG
      * @note If USB_UART_RX and USB_UART_TX
      * are defined as HAL_PIN_NC, you will
      * need to define them manually for log to work.
      * See @b LOG_MAP_USB_UART macro definition for detailed explanation.
      */
     LOG_MAP_USB_UART(log_cfg);
     log_init(&logger, &log_cfg);
     log_info(&logger, "---- Application Init ----");
 
     // Click initialization.
     wifiesp_cfg_setup(&wifiesp_cfg);
     WIFIESP_MAP_MIKROBUS(wifiesp_cfg, MIKROBUS_3);
     wifiesp_init(&wifiesp, &wifiesp_cfg);
     wifiesp_default_cfg(&wifiesp);
     Delay_ms(1000);
   
     // Communication initialization
     wifi_communication_init();
   
     // We'll update page_len during application_task when we have the actual current value
   
     log_info(&logger, "Please connect to the IP address listed above.\r\n");
 
     //  Click initialization.
     hallcurrent5_cfg_setup(&hallcurrent5_cfg);
     HALLCURRENT5_MAP_MIKROBUS(hallcurrent5_cfg, MIKROBUS_2);
     hallcurrent5_init(&hallcurrent5, &hallcurrent5_cfg);
 
     // CLICK INIT
     hallcurrent5_set_init_voltage(&hallcurrent5, 450);
     Delay_100ms();
 }
 
void application_task(void)
{
    if (WIFIESP_OK == wifiesp_rsp_check(WIFIESP_RECEIVE))
    {
        // First, get the current value from the sensor
        float current = hallcurrent5_get_current(&hallcurrent5);
        log_printf(&logger, " Current : %f \r\n", current);
        if (current > 2000.0f) {
            log_printf(&logger, "ALERT: Current exceeds threshold! Value: %f\r\n", current);
        }

        // Format the current value as string
        char current_str[20];
        float_to_str(current, current_str);

        // Create JSON data manually
        strcpy(json_data, "{\"current\": ");
        strcat(json_data, current_str);
        strcat(json_data, "}");

        // Check if the request is asking for JSON endpoint
        if (strstr(app_buf, "GET /json") != NULL)
        {
            // Create HTTP header for JSON response with CORS headers
            strcpy(page, "HTTP/1.1 200 OK\r\n");
            strcat(page, "Content-Type: application/json\r\n");
            strcat(page, "Access-Control-Allow-Origin: *\r\n"); // Autoriser toutes les origines
            strcat(page, "Connection: close\r\n");
            strcat(page, "\r\n"); // Fin des en-têtes
            strcat(page, json_data);
        }
        else
        {
            // Create HTTP header for HTML response
            strcpy(page, "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n");

            // Create HTML page with HTML display and embedded JSON data
            strcat(page, "<h1>Current= ");
            strcat(page, current_str);
            strcat(page, "</h1>");
            strcat(page, "<script>const currentData = ");
            strcat(page, json_data);
            strcat(page, ";</script>");
        }

        // Update the page length
        uint16_to_str(strlen(page), page_len);
        wifiesp_str_cut_chr(page_len, ' ');

        link_id[0] = *(strstr(app_buf, WIFIESP_RECEIVE) + 5);
        strcpy(send_buf, link_id);
        strcat(send_buf, ",");
        strcat(send_buf, page_len);
        wifiesp_str_cut_chr(send_buf, ' ');
        wifiesp_log_app_buf();
        wifiesp_clear_app_buf();
        Delay_ms(100);
        wifiesp_process();
        wifiesp_log_app_buf();
        wifiesp_send_cmd(&wifiesp, WIFIESP_SEND, send_buf);
        app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_READY_FOR_SEND);
        wifiesp_log_app_buf();
        Delay_ms(100);
        wifiesp_generic_write(&wifiesp, page, strlen(page));
        app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_SEND_OK);
        wifiesp_error_check(app_error_flag);
        wifiesp_send_cmd(&wifiesp, WIFIESP_CLOSE, link_id);
        app_error_flag = wifiesp_rsp_check(WIFIESP_RSP_OK);
        wifiesp_error_check(app_error_flag);
        wifiesp_clear_app_buf();

        wifiesp_process();
        wifiesp_log_app_buf();
        wifiesp_clear_app_buf();
        uart_clear(&wifiesp.uart);
        Delay_ms(100);

        Delay_ms(1000);
        Delay_ms(500);
    }
}
 
 void main(void)
 {
     application_init();
   
     for (;;)
     {
         application_task();
     }
 }