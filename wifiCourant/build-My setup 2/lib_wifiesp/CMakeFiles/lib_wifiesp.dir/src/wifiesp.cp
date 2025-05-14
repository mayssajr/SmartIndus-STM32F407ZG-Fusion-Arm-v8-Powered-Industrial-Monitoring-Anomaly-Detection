#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/src/wifiesp.c"
#line 29 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/src/wifiesp.c"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 43 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/preinit.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/preinit.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;


typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/preinit.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdbool.h"



typedef char _Bool;
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/preinit.h"
#line 66 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/preinit.h"
void preinit(void);
#line 44 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 48 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
#line 45 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 46 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
#line 58 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_Cyc( uint32_t cycles_div_by_10 );
#line 65 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_us( uint32_t time_us );
#line 72 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_ms( uint32_t time_ms );
#line 82 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_Advanced_ms( uint32_t time_ms,
                        uint32_t current_fosc_khz );
#line 89 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_1us();
#line 95 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_5us();
#line 101 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_6us();
#line 107 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_9us();
#line 113 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_10us();
#line 119 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_22us();
#line 125 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_50us();
#line 131 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_55us();
#line 137 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_60us();
#line 143 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_64us();
#line 149 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_70us();
#line 155 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_80us();
#line 161 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_410us();
#line 167 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_480us();
#line 173 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_500us();
#line 179 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_5500us();
#line 185 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_1ms( void );
#line 191 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_5ms( void );
#line 197 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_8ms( void );
#line 203 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_10ms( void );
#line 209 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_100ms( void );
#line 215 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
void Delay_1sec( void );
#line 49 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_definitions.h"
#line 47 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_definitions.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_reg_addresses.h"
#line 48 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_definitions.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/dma_definitions.h"
#line 49 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_definitions.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/can_definitions.h"
#line 50 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/stm32f407zgtx/mcu_definitions.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdbool.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stddef.h"



typedef long ptrdiff_t;


typedef unsigned long size_t;

typedef unsigned long wchar_t;
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
#line 32 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 33 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
#line 60 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
const void * memchr( const void * ptr, char ch, unsigned int num );
#line 74 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
int memcmp( const void * str1, const void * str2, int num );
#line 88 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void * memcpy( void * dest_ptr, const void * src_ptr, int num );
#line 102 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void * memmove( void * dest_ptr, const void * src_ptr, int num );
#line 115 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void * memset( void * ptr, char chr, int num );
#line 130 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strcat( char * dest_ptr, const char * src_ptr );
#line 143 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
const char * strchr( const char * ptr, char chr );
#line 155 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
int strcmp( const char * str1, const char * str2 );
#line 167 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strcpy( char * dest_ptr, const char * src_ptr );
#line 177 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
int strlen( const char * str );
#line 191 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strncat( char * dest_ptr, const char * src_ptr, int size );
#line 204 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strncpy( char * dest_ptr, const char * src_ptr, int size );
#line 216 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
int strspn( const char * str1, const char * str2 );
#line 229 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char strcspn( const char * str1, const char * str2 );
#line 242 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
int strncmp( const char * str1, const char * str2, char len );
#line 255 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strpbrk( const char * str1, const char * str2 );
#line 269 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
const char * strrchr( const char * ptr, char chr );
#line 282 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strstr( const char * str1, const char * str2 );
#line 293 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
char * strtok( char * str1, char * str2 );
#line 302 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_cut_chr( char * str, char num );
#line 312 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_replace_chr( char * str, char chr_old, char chr_new );
#line 320 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_cut_left( char * str, int num );
#line 328 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_cut_right( char * str, int num );
#line 338 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_split( char * str1, char * str2, int num );
#line 347 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
void str_insert_chr( char * str, char chr, int num );
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 55 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
#line 33 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 34 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
#line 45 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
typedef struct divstruct
{
    int quot;
    int rem;
} div_t;

typedef struct ldivstruct
{
    long quot;
    long rem;
} ldiv_t;

typedef struct uldivstruct
{
    unsigned long quot;
    unsigned long rem;
} uldiv_t;
#line 81 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
int abs( int num );
#line 94 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
float atof( char * str );
#line 107 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
int atoi( char * str );
#line 120 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
long atol( char * str );
#line 141 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
div_t div( int number, int denom );
#line 159 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
ldiv_t ldiv( long number, long denom );
#line 177 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
uldiv_t uldiv( unsigned long number, unsigned long denom );
#line 190 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
long labs( long num );
#line 201 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
long max( long num1, long num2 );
#line 212 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
long min( long num1, long num2 );
#line 224 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
int rand();
#line 241 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
void srand( unsigned seed );
#line 251 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdlib.h"
int xtoi( char * str );
#line 56 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"

typedef uintptr_t handle_t;
typedef uint16_t hal_ll_gpio_mask_t;
typedef uint16_t hal_ll_pin_name_t;
typedef uint8_t hal_ll_port_name_t;
typedef uint16_t hal_ll_port_size_t;
typedef uint32_t hal_ll_base_addr_t;
typedef uint8_t hal_ll_channel_t;

typedef int32_t hal_ll_err_t;
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_pin_names.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdbool.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_bit_control.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/assembly.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_macros.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_macros.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/flatten_me.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_macros.h"
#line 55 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_types.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_types.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target_names.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_types.h"
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/common_types.h"
typedef struct
{
    hal_ll_pin_name_t pin_name;
    uint32_t pin_af;
} hal_ll_pin_af_t;
#line 56 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 68 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
typedef hal_ll_base_addr_t hal_base_addr_t;
typedef hal_ll_channel_t hal_channel_t;
typedef hal_ll_pin_name_t hal_pin_name_t;
typedef hal_ll_port_name_t hal_port_name_t;
typedef hal_ll_port_size_t hal_port_size_t;

typedef int32_t err_t;
#line 79 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
typedef enum
{
    ACQUIRE_SUCCESS = 0,
    ACQUIRE_INIT,

    ACQUIRE_FAIL = (-1)
} acquire_t;
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 68 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
typedef enum
{
    GPIO_DIGITAL_INPUT = 0,
    GPIO_DIGITAL_OUTPUT = 1
} gpio_direction_t;

typedef hal_pin_name_t pin_name_t;

typedef hal_port_name_t port_name_t;

typedef hal_port_size_t port_size_t;
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 47 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_constants.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
#line 66 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct
{
  uint32_t pins[13];
  uint32_t configs[13];
  uint32_t gpio_remap;
} module_struct;
#line 78 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct
{
    uint32_t moder;
    uint32_t otyper;
    uint32_t ospeedr;
    uint32_t pupdr;
    uint32_t idr;
    uint32_t odr;
    uint32_t bsrr;
    uint32_t lckr;
    uint32_t afrl;
    uint32_t afrh;
} hal_ll_gpio_base_handle_t;
#line 111 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef handle_t hal_ll_gpio_base_t;
#line 116 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef enum
{
    HAL_LL_GPIO_DIGITAL_INPUT = 0,
    HAL_LL_GPIO_DIGITAL_OUTPUT = 1
} hal_ll_gpio_direction_t;
#line 125 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct hal_ll_gpio_t
{
    hal_ll_gpio_base_t base;
    hal_ll_gpio_mask_t mask;
};
#line 134 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
typedef struct hal_ll_gpio_t hal_ll_gpio_pin_t;
typedef struct hal_ll_gpio_t hal_ll_gpio_port_t;
#line 142 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint8_t hal_ll_gpio_port_index( hal_ll_pin_name_t name );
#line 149 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint32_t hal_ll_gpio_pin_mask( hal_ll_pin_name_t name );
#line 156 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
uint32_t hal_ll_gpio_port_base( hal_ll_port_name_t name );
#line 164 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_analog_input( uint32_t *port, uint16_t pin_mask );
#line 172 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_digital_input( uint32_t *port, uint16_t pin_mask );
#line 180 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_digital_output( uint32_t *port, uint16_t pin_mask );
#line 187 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio_port.h"
void hal_ll_gpio_module_struct_init( module_struct const *module,  _Bool  state );
#line 48 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
#line 69 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_configure_pin(hal_ll_gpio_pin_t *pin, hal_ll_pin_name_t name, hal_ll_gpio_direction_t direction);
#line 210 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_gpio.h"
void hal_ll_gpio_configure_port(hal_ll_gpio_port_t *port, hal_ll_port_name_t name, hal_ll_gpio_mask_t mask, hal_ll_gpio_direction_t direction);
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
typedef enum
{
    HAL_GPIO_DIGITAL_INPUT = 0,
    HAL_GPIO_DIGITAL_OUTPUT = 1
} hal_gpio_direction_t;

typedef handle_t hal_gpio_base_t;
typedef hal_ll_gpio_mask_t hal_gpio_mask_t;
#line 75 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
typedef struct hal_gpio
{
    hal_gpio_base_t base;
    hal_gpio_mask_t mask;
} hal_gpio_t;

typedef hal_gpio_t hal_gpio_pin_t;
typedef hal_gpio_t hal_gpio_port_t;
#line 131 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_configure_pin( hal_gpio_pin_t *pin, hal_pin_name_t name, hal_gpio_direction_t direction );
#line 307 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
void hal_gpio_configure_port( hal_gpio_port_t *port, hal_port_name_t name, hal_gpio_mask_t mask, hal_gpio_direction_t direction );
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
typedef enum
{
    DIGITAL_OUT_SUCCESS = 0,
    DIGITAL_OUT_UNSUPPORTED_PIN = (-1)
} digital_out_err_t;
#line 72 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
typedef struct
{
    hal_gpio_pin_t pin;
} digital_out_t;
#line 123 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_out.h"
err_t digital_out_init( digital_out_t *out, pin_name_t name );
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_gpio.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
typedef enum
{
    DIGITAL_IN_SUCCESS = 0,
    DIGITAL_IN_UNSUPPORTED_PIN = (-1)
} digital_in_err_t;
#line 72 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
typedef struct
{
    hal_gpio_pin_t pin;
} digital_in_t;
#line 123 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
err_t digital_in_init( digital_in_t *in, pin_name_t name );
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdbool.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stddef.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 68 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
typedef struct
{
    uint8_t *buffer;
    size_t capacity;
    volatile size_t size;
    volatile size_t head;
    volatile size_t tail;
} ring_buf8_t;
#line 85 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
void ring_buf8_init(ring_buf8_t *ring, uint8_t *buf, size_t capacity);
#line 96 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_push(ring_buf8_t *buf, uint8_t data_);
#line 106 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
uint8_t ring_buf8_pop(ring_buf8_t *buf);
#line 111 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_is_empty(ring_buf8_t *buf);
#line 116 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
_Bool  ring_buf8_is_full(ring_buf8_t *buf);
#line 122 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
size_t ring_buf8_size(ring_buf8_t *buf);
#line 127 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
void ring_buf8_clear(ring_buf8_t *buf);
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 55 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
#line 47 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 48 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
#line 56 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef enum
{
    HAL_LL_UART_IRQ_RX,
    HAL_LL_UART_IRQ_TX
} hal_ll_uart_irq_t;
#line 65 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef void ( *hal_ll_uart_isr_t )( handle_t handle, hal_ll_uart_irq_t event );
#line 70 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef enum
{
    HAL_LL_UART_PARITY_NONE = 0,
    HAL_LL_UART_PARITY_EVEN,
    HAL_LL_UART_PARITY_ODD,

    HAL_LL_UART_PARITY_DEFAULT = HAL_LL_UART_PARITY_NONE
} hal_ll_uart_parity_t;
#line 82 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef enum
{
    HAL_LL_UART_STOP_BITS_HALF = 0,
    HAL_LL_UART_STOP_BITS_ONE,
    HAL_LL_UART_STOP_BITS_ONE_AND_A_HALF,
    HAL_LL_UART_STOP_BITS_TWO,

    HAL_LL_UART_STOP_BITS_DEFAULT = HAL_LL_UART_STOP_BITS_ONE
} hal_ll_uart_stop_bits_t;
#line 95 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef enum
{
    HAL_LL_UART_DATA_BITS_7 = 0,
    HAL_LL_UART_DATA_BITS_8,
    HAL_LL_UART_DATA_BITS_9,

    HAL_LL_UART_DATA_BITS_DEFAULT = HAL_LL_UART_DATA_BITS_8
} hal_ll_uart_data_bits_t;
#line 111 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef struct
{
    hal_ll_pin_af_t tx_pin;
    hal_ll_pin_af_t rx_pin;
} hal_ll_uart_pins_t;
#line 124 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
typedef struct
{
    handle_t *hal_ll_uart_handle;
    handle_t *hal_drv_uart_handle;
    _Bool  init_ll_state;
} hal_ll_uart_handle_register_t;
#line 147 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_uart_register_handle( hal_ll_pin_name_t tx_pin, hal_ll_pin_name_t rx_pin, hal_ll_uart_handle_register_t *handle_map, uint8_t *hal_module_id );
#line 163 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_module_configure_uart( handle_t *handle );
#line 177 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
void hal_ll_uart_register_irq_handler( handle_t *handle, hal_ll_uart_isr_t handler, handle_t obj );
#line 196 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_uart_set_baud( handle_t *handle, uint32_t baud );
#line 208 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_uart_set_parity( handle_t *handle, hal_ll_uart_parity_t parity );
#line 220 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_uart_set_stop_bits( handle_t *handle, hal_ll_uart_stop_bits_t stop_bit );
#line 232 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
hal_ll_err_t hal_ll_uart_set_data_bits( handle_t *handle, hal_ll_uart_data_bits_t data_bit );
#line 245 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
void hal_ll_uart_irq_enable( handle_t *handle, hal_ll_uart_irq_t irq );
#line 257 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
void hal_ll_uart_irq_disable( handle_t *handle, hal_ll_uart_irq_t irq );
#line 268 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
uint8_t hal_ll_uart_read( handle_t *handle );
#line 281 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
void hal_ll_uart_write( handle_t *handle, uint8_t wr_data);
#line 293 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_uart.h"
void hal_ll_uart_close( handle_t *handle );
#line 56 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
#line 62 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
void hal_ll_core_enable_interrupts( void );
#line 71 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
void hal_ll_core_disable_interrupts( void );
#line 82 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
void hal_ll_core_enable_irq( uint8_t IRQn );
#line 93 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
void hal_ll_core_disable_irq( uint8_t IRQn );
#line 108 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_core.h"
void hal_ll_core_set_priority_irq( uint8_t IRQn, uint8_t IRQn_priority );
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/core/delays.h"
#line 58 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
#line 67 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    handle_t *hal_uart_handle;
    handle_t *drv_uart_handle;
    _Bool  init_state;
} hal_uart_handle_register_t;
#line 77 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_SUCCESS = 0,
    HAL_UART_WRONG_PINS,
    HAL_UART_MODULE_ERROR,

    HAL_UART_ERROR = (-1)
} hal_uart_err_t;
#line 89 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_IRQ_RX,
    HAL_UART_IRQ_TX
} hal_uart_irq_t;
#line 98 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_DATA_BITS_7 = 0,
    HAL_UART_DATA_BITS_8,
    HAL_UART_DATA_BITS_9,

    HAL_UART_DATA_BITS_DEFAULT = HAL_UART_DATA_BITS_8
} hal_uart_data_bits_t;
#line 110 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_PARITY_NONE = 0,
    HAL_UART_PARITY_EVEN,
    HAL_UART_PARITY_ODD,

    HAL_UART_PARITY_DEFAULT = HAL_UART_PARITY_NONE
} hal_uart_parity_t;
#line 122 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef enum
{
    HAL_UART_STOP_BITS_HALF = 0,
    HAL_UART_STOP_BITS_ONE,
    HAL_UART_STOP_BITS_ONE_AND_A_HALF,
    HAL_UART_STOP_BITS_TWO,

    HAL_UART_STOP_BITS_DEFAULT = HAL_UART_STOP_BITS_ONE
} hal_uart_stop_bits_t;
#line 164 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    hal_pin_name_t tx_pin;
    hal_pin_name_t rx_pin;

    uint32_t baud;
    hal_uart_data_bits_t data_bits;
    hal_uart_parity_t parity;
    hal_uart_stop_bits_t stop_bits;

    ring_buf8_t tx_buf;
    ring_buf8_t rx_buf;

    size_t tx_ring_size;
    size_t rx_ring_size;
} hal_uart_config_t;
#line 191 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
typedef struct
{
    handle_t handle;

    hal_uart_config_t config;

    uint8_t *tx_ring_buffer;
    uint8_t *rx_ring_buffer;

    _Bool  is_tx_irq_enabled;
    _Bool  is_rx_irq_enabled;

    _Bool  is_blocking;
} hal_uart_t;
#line 256 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_configure_default( hal_uart_config_t *config );
#line 306 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_open( handle_t *handle,  _Bool  hal_obj_open_state );
#line 331 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_baud( handle_t *handle, hal_uart_config_t *config );
#line 350 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_parity( handle_t *handle, hal_uart_config_t *config );
#line 369 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_stop_bits( handle_t *handle, hal_uart_config_t *config );
#line 388 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_set_data_bits( handle_t *handle, hal_uart_config_t *config );
#line 404 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_set_blocking( handle_t *handle,  _Bool  blocking );
#line 426 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_write( handle_t *handle, uint8_t *buffer, size_t size );
#line 447 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_print( handle_t *handle, char *text );
#line 468 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_println( handle_t *handle, char *text );
#line 490 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_read( handle_t *handle, uint8_t *buffer, size_t size );
#line 507 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
size_t hal_uart_bytes_available( hal_uart_t *hal_obj );
#line 522 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
void hal_uart_clear( hal_uart_t *hal_obj );
#line 540 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_uart.h"
err_t hal_uart_close( handle_t *handle );
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/ring.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
#line 58 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_SUCCESS = 0,
    UART_ERROR = (-1)
} uart_err_t;
#line 67 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_DATA_BITS_7 = 0,
    UART_DATA_BITS_8,
    UART_DATA_BITS_9,

    UART_DATA_BITS_DEFAULT = UART_DATA_BITS_8
} uart_data_bits_t;
#line 79 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_PARITY_NONE = 0,
    UART_PARITY_EVEN,
    UART_PARITY_ODD,

    UART_PARITY_DEFAULT = UART_PARITY_NONE
} uart_parity_t;
#line 91 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef enum
{
    UART_STOP_BITS_HALF = 0,
    UART_STOP_BITS_ONE,
    UART_STOP_BITS_ONE_AND_A_HALF,
    UART_STOP_BITS_TWO,

    UART_STOP_BITS_DEFAULT = UART_STOP_BITS_ONE
} uart_stop_bits_t;
#line 137 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef struct
{
    pin_name_t tx_pin;
    pin_name_t rx_pin;

    uint32_t baud;
    uart_data_bits_t data_bits;
    uart_parity_t parity;
    uart_stop_bits_t stop_bits;

    ring_buf8_t tx_buf;
    ring_buf8_t rx_buf;

    size_t tx_ring_size;
    size_t rx_ring_size;
} uart_config_t;
#line 164 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
typedef struct
{
    handle_t handle;

    uart_config_t config;

    uint8_t *tx_ring_buffer;
    uint8_t *rx_ring_buffer;

    _Bool  is_tx_irq_enabled;
    _Bool  is_rx_irq_enabled;

    _Bool  is_blocking;
} uart_t;
#line 232 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_configure_default( uart_config_t *config );
#line 286 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_open( uart_t *obj, uart_config_t *config );
#line 312 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_baud( uart_t *obj, uint32_t baud );
#line 339 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_parity( uart_t *obj, uart_parity_t parity );
#line 366 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_stop_bits( uart_t *obj, uart_stop_bits_t stop );
#line 393 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_set_data_bits( uart_t *obj, uart_data_bits_t bits );
#line 412 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_set_blocking( uart_t *obj,  _Bool  blocking );
#line 446 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_write( uart_t *obj, uint8_t *buffer, size_t size );
#line 476 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_print( uart_t *obj, char *text );
#line 506 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_println( uart_t *obj, char *text );
#line 540 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_read( uart_t *obj, uint8_t *buffer, size_t size );
#line 560 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
size_t uart_bytes_available( uart_t *obj );
#line 578 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
void uart_clear( uart_t *obj );
#line 604 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_uart.h"
err_t uart_close( uart_t *obj );
#line 55 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
#line 50 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
#line 33 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 34 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdarg.h"


typedef void *va_list[1];
#line 35 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
#line 42 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
static inline void stdBuffFullBreak() {



    asm nop

}
#line 57 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
void debugStdOut( char ch );
#line 72 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
int printf_me( const char *format, ... );
#line 88 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
int fprintf_me( void (*stream)(char ch), const char *format, ... );
#line 106 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/cstdio.h"
int vfprintf_me( void (*stream)(char ch), const char *format, register va_list arg );
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/board/generic_pointer.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
#line 102 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/platform/plot.h"
static inline int plot( const char *   name, double value ) {
    if ( (( 13U + strlen(name)) > 48U ) ? (printf_me("Chart name too long. Reduce by %u characters.\n", ( 13U + strlen(name)) - 48U )) : (0)  == 0) {
        return printf_me( "CH:|%s|%.3f|\n", name, value );
    }
}
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
#line 63 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
typedef enum
{
    LOG_SUCCESS = 0,
    LOG_ERROR = (-1)
} log_err_t;
#line 72 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
typedef enum
{
    LOG_LEVEL_DEBUG   = 0x00,
    LOG_LEVEL_INFO    = 0x01,
    LOG_LEVEL_WARNING = 0x02,
    LOG_LEVEL_ERROR   = 0x03,
    LOG_LEVEL_FATAL   = 0x04
} log_level_t;
#line 84 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
typedef struct
{
    log_level_t log_level;
} log_t;
#line 92 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
typedef struct
{
    log_level_t level;
} log_cfg_t;
#line 128 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
log_err_t log_init ( log_t *log, log_cfg_t *cfg );
#line 139 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_printf ( log_t *log, const   char *   f,... );
#line 147 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_clear ( log_t *log );
#line 155 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
int8_t log_read ( log_t *log, uint8_t *rx_data_buf, uint8_t max_len );
#line 167 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_info ( log_t *log, const   char *   f,... );
#line 179 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_error ( log_t *log, const   char *   f,... );
#line 191 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_fatal ( log_t *log, const   char *   f,... );
#line 203 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_debug ( log_t *log, const   char *   f,... );
#line 215 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_warning ( log_t *log, const   char *   f,... );
#line 228 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/api/log/std_out/log.h"
void log_log ( log_t *log, char * prefix, const   char *   f, ... );
#line 56 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
#line 130 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
typedef struct
{

    digital_out_t rst;
    digital_out_t cs;


    uart_t uart;

    char uart_rx_buffer[  610  ];
    char uart_tx_buffer[  150  ];

} wifiesp_t;
#line 147 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
typedef struct
{

    pin_name_t rx_pin;
    pin_name_t tx_pin;


    pin_name_t rst;
    pin_name_t cs;


    uint32_t          baud_rate;
    _Bool               uart_blocking;
    uart_data_bits_t  data_bit;
    uart_parity_t     parity_bit;
    uart_stop_bits_t  stop_bit;

} wifiesp_cfg_t;
#line 170 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
typedef enum
{
    WIFIESP_OK = 0,
    WIFIESP_ERROR = -1,
    WIFIESP_ERROR_TIMEOUT = -2,
    WIFIESP_ERROR_CMD = -3,
    WIFIESP_ERROR_UNKNOWN = -4

} wifiesp_return_value_t;
#line 200 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
void wifiesp_cfg_setup ( wifiesp_cfg_t *cfg );
#line 209 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
err_t wifiesp_init ( wifiesp_t *ctx, wifiesp_cfg_t *cfg );
#line 218 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
void wifiesp_default_cfg ( wifiesp_t *ctx );
#line 226 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
void wifiesp_generic_write ( wifiesp_t *ctx, char *data_buf, uint16_t len );
#line 235 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
int32_t wifiesp_generic_read ( wifiesp_t *ctx, char *data_buf, int32_t max_len );
#line 245 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/include/wifiesp.h"
void wifiesp_send_cmd( wifiesp_t* ctx, uint8_t* cmd, uint8_t* args );
#line 30 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/src/wifiesp.c"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/string.h"
#line 31 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_wifiesp/src/wifiesp.c"



void wifiesp_cfg_setup ( wifiesp_cfg_t *cfg )
{

    cfg->rx_pin =  (hal_pin_name_t)(0xFFFFFFFF) ;
    cfg->tx_pin =  (hal_pin_name_t)(0xFFFFFFFF) ;


    cfg->rst =  (hal_pin_name_t)(0xFFFFFFFF) ;
    cfg->cs  =  (hal_pin_name_t)(0xFFFFFFFF) ;

    cfg->baud_rate      = 115200;
    cfg->data_bit       = UART_DATA_BITS_DEFAULT;
    cfg->parity_bit     = UART_PARITY_DEFAULT;
    cfg->stop_bit       = UART_STOP_BITS_DEFAULT;
    cfg->uart_blocking  =  0 ;
}

err_t wifiesp_init ( wifiesp_t *ctx, wifiesp_cfg_t *cfg )
{
    uart_config_t uart_cfg;


    uart_configure_default( &uart_cfg );


    ctx->uart.tx_ring_buffer = ctx->uart_tx_buffer;
    ctx->uart.rx_ring_buffer = ctx->uart_rx_buffer;


    uart_cfg.rx_pin = cfg->rx_pin;
    uart_cfg.tx_pin = cfg->tx_pin;
    uart_cfg.tx_ring_size = sizeof( ctx->uart_tx_buffer );
    uart_cfg.rx_ring_size = sizeof( ctx->uart_rx_buffer );

    uart_open( &ctx->uart, &uart_cfg );
    uart_set_baud( &ctx->uart, cfg->baud_rate );
    uart_set_parity( &ctx->uart, cfg->parity_bit );
    uart_set_stop_bits( &ctx->uart, cfg->stop_bit );
    uart_set_data_bits( &ctx->uart, cfg->data_bit );

    uart_set_blocking( &ctx->uart, cfg->uart_blocking );


    digital_out_init( &ctx->rst, cfg->rst );
    digital_out_init( &ctx->cs, cfg->cs );

    return WIFIESP_OK;
}

void wifiesp_default_cfg ( wifiesp_t *ctx )
{
    Delay_100ms( );
    ((((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->rst)->base) != ((void *)0) ) ? (((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->rst)->base)->bsrr = ((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->rst)->mask) : (0)) ;
    ((((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->cs)->base) != ((void *)0) ) ? (((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->cs)->base)->bsrr = ((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->cs)->mask) : (0)) ;
}

void wifiesp_generic_write ( wifiesp_t *ctx, char *data_buf, uint16_t len )
{
    uart_write( &ctx->uart, data_buf, len );
}

int32_t wifiesp_generic_read ( wifiesp_t *ctx, char *data_buf, int32_t max_len )
{
    return uart_read( &ctx->uart, data_buf, max_len );
}

void wifiesp_send_cmd( wifiesp_t* ctx, uint8_t* cmd, uint8_t* args )
{
    uint8_t tmp_buf[ 50 ] = { 0 };
    uint16_t len = 0;

    len = strlen( cmd );
    memcpy( tmp_buf, cmd, len );

    if (  ((void *)0)  != args )
    {
        strcat( tmp_buf, "=" );
        strcat( tmp_buf, args );
        len += ( strlen( args ) + 1 );
    }
    strcat( tmp_buf, "\r\n" );
    len += 2;
    wifiesp_generic_write( ctx, tmp_buf, len );
}
