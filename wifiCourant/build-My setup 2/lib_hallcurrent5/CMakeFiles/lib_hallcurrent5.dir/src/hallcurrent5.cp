#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/src/hallcurrent5.c"
#line 30 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/src/hallcurrent5.c"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 42 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
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
#line 43 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 47 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
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
#line 48 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
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
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_digital_in.h"
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
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_name.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 54 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_target.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
#line 1 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_rcc.h"
#line 51 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_rcc.h"
#line 1 "C:/Users/lenovo/AppData/Local/MIKROE/NECTOStudio7/packages/compilers/mikroc/arm/mikroc/include/stdint.h"
#line 52 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_rcc.h"
#line 161 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_rcc.h"
typedef struct
{
  uint32_t sysclk;
  uint32_t hclk;
  uint32_t pclk1;
  uint32_t pclk2;
  uint32_t adcclk;
} rcc_clocks_t;
#line 202 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_rcc.h"
void RCC_GetClocksFrequency(rcc_clocks_t *RCC_Clocks);
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
#line 68 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
typedef struct
{
    handle_t *hal_ll_adc_handle;
    handle_t *hal_drv_adc_handle;
    _Bool  init_ll_state;
} hal_ll_adc_handle_register_t;
#line 78 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
typedef enum
{
    HAL_LL_ADC_VREF_EXTERNAL = 0,
    HAL_LL_ADC_VREF_DEFAULT = HAL_LL_ADC_VREF_EXTERNAL
} hal_ll_adc_voltage_reference_t;
#line 87 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
typedef enum
{
    HAL_LL_ADC_RESOLUTION_NOT_SET = 0,
    HAL_LL_ADC_RESOLUTION_6_BIT,
    HAL_LL_ADC_RESOLUTION_8_BIT,
    HAL_LL_ADC_RESOLUTION_10_BIT,
    HAL_LL_ADC_RESOLUTION_12_BIT,
    HAL_LL_ADC_RESOLUTION_14_BIT,
    HAL_LL_ADC_RESOLUTION_16_BIT,


    HAL_LL_ADC_RESOLUTION_DEFAULT =  HAL_LL_ADC_RESOLUTION_12_BIT
} hal_ll_adc_resolution_t;
#line 107 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
typedef struct
{
    hal_ll_base_addr_t base;
    uint8_t module_index;
    hal_ll_pin_name_t pin;
    hal_ll_adc_voltage_reference_t vref_input;
    float vref_value;
    uint32_t resolution;
    uint8_t channel;
} hal_ll_adc_hw_specifics_map_t;
#line 131 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
hal_ll_err_t hal_ll_module_configure_adc( handle_t *handle );
#line 151 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
hal_ll_err_t hal_ll_adc_register_handle(hal_ll_pin_name_t pin, hal_ll_adc_voltage_reference_t vref_input, hal_ll_adc_resolution_t resolution, hal_ll_adc_handle_register_t *handle_map, uint8_t *hal_module_id);
#line 165 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
hal_ll_err_t hal_ll_adc_set_resolution(handle_t *handle, hal_ll_adc_resolution_t resolution);
#line 179 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
hal_ll_err_t hal_ll_adc_set_vref_input(handle_t *handle, hal_ll_adc_voltage_reference_t vref_input);
#line 192 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
void hal_ll_adc_set_vref_value(handle_t *handle, float vref_value);
#line 208 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
hal_ll_err_t hal_ll_adc_read(handle_t *handle, uint16_t *readDatabuf );
#line 220 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal_ll_port/hal_ll_adc.h"
void hal_ll_adc_close( handle_t *handle );
#line 55 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
#line 65 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    handle_t *hal_adc_handle;
    handle_t *drv_adc_handle;
    _Bool  init_state;
} hal_adc_handle_register_t;
#line 75 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_SUCCESS = 0,
    HAL_ADC_WRONG_PIN,
    HAL_ADC_MODULE_ERROR,

    HAL_ADC_UNSUPPORTED_RESOLUTION = 1100,
    HAL_ADC_UNSUPPORTED_VREF,
    HAL_ADC_WRONG_CHANNEL,
    HAL_ADC_ERROR = (-1)
} hal_adc_err_t;
#line 90 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_RESOLUTION_NOT_SET = 0,
    HAL_ADC_RESOLUTION_6_BIT,
    HAL_ADC_RESOLUTION_8_BIT,
    HAL_ADC_RESOLUTION_10_BIT,
    HAL_ADC_RESOLUTION_12_BIT,
    HAL_ADC_RESOLUTION_14_BIT,
    HAL_ADC_RESOLUTION_16_BIT,


    HAL_ADC_RESOLUTION_DEFAULT =  HAL_ADC_RESOLUTION_12_BIT
} hal_adc_resolution_t;
#line 107 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef enum
{
    HAL_ADC_VREF_EXTERNAL = 0,
    HAL_ADC_VREF_INTERNAL,
    HAL_ADC_VREF_DEFAULT = HAL_ADC_VREF_EXTERNAL
} hal_adc_vref_t;
#line 137 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    hal_pin_name_t              pin;
    hal_adc_resolution_t        resolution;
    hal_adc_vref_t              vref_input;
    float                       vref_value;
} hal_adc_config_t;
#line 155 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
typedef struct
{
    handle_t handle;
    hal_adc_config_t config;
} hal_adc_t;
#line 216 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
void hal_adc_configure_default( hal_adc_config_t *config );
#line 245 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_open( handle_t *handle,  _Bool  hal_obj_open_state );
#line 267 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_set_resolution( handle_t *handle, hal_adc_config_t *config );
#line 289 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_set_vref_input( handle_t *handle, hal_adc_config_t *config );
#line 310 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
void hal_adc_set_vref_value( handle_t *handle, hal_adc_config_t *config );
#line 326 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_read( handle_t *handle, uint16_t *readDatabuf );
#line 342 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_read_voltage( handle_t *handle, float *readDatabuf );
#line 357 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/hal/hal_adc.h"
err_t hal_adc_close( handle_t *handle );
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
#line 57 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ADC_SUCCESS = 0,
    ADC_ERROR = (-1)
} analog_in_err_t;
#line 66 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ANALOG_IN_VREF_EXTERNAL = 0,
    ANALOG_IN_VREF_INTERNAL
} analog_in_vref_t;
#line 75 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef enum
{
    ANALOG_IN_RESOLUTION_NOT_SET = 0,
    ANALOG_IN_RESOLUTION_6_BIT,
    ANALOG_IN_RESOLUTION_8_BIT,
    ANALOG_IN_RESOLUTION_10_BIT,
    ANALOG_IN_RESOLUTION_12_BIT,
    ANALOG_IN_RESOLUTION_14_BIT,
    ANALOG_IN_RESOLUTION_16_BIT,


    ANALOG_IN_RESOLUTION_DEFAULT =  ANALOG_IN_RESOLUTION_12_BIT
} analog_in_resolution_t;
#line 107 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef struct
{
    pin_name_t input_pin;
    analog_in_resolution_t resolution;
    analog_in_vref_t vref_input;
    float vref_value;
} analog_in_config_t;
#line 127 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
typedef struct
{
    handle_t handle;
    analog_in_config_t config;
} analog_in_t;
#line 207 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
void analog_in_configure_default( analog_in_config_t *config );
#line 246 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_open( analog_in_t *obj, analog_in_config_t *config );
#line 282 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_resolution( analog_in_t *obj, analog_in_resolution_t resolution );
#line 318 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_vref_input( analog_in_t *obj, analog_in_vref_t vref );
#line 356 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_set_vref_value( analog_in_t *obj, float vref_value );
#line 386 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_read( analog_in_t *obj, uint16_t *readDatabuf );
#line 417 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_read_voltage( analog_in_t *obj, float *readDatabuf );
#line 440 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/.meproject/setup/Debug/include/drv/drv_analog_in.h"
err_t analog_in_close( analog_in_t *obj );
#line 53 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
#line 91 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
typedef  uint16_t hallcurrent5_data_t;
#line 96 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
typedef struct
{


    digital_in_t int_pin;



    analog_in_t adc;

    uint16_t dev_init_volt;

} hallcurrent5_t;
#line 113 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
typedef struct
{


    pin_name_t an_pin;



    pin_name_t int_pin;



    analog_in_resolution_t  resolution;
    float vref;

    uint16_t init_volt;

} hallcurrent5_cfg_t;
#line 152 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
void hallcurrent5_cfg_setup ( hallcurrent5_cfg_t *cfg );
#line 162 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
uint8_t  hallcurrent5_init ( hallcurrent5_t *ctx, hallcurrent5_cfg_t *cfg );
#line 172 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
hallcurrent5_data_t hallcurrent5_generic_read ( hallcurrent5_t *ctx );
#line 182 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
float hallcurrent5_generic_read_voltage ( hallcurrent5_t *ctx );
#line 192 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
float hallcurrent5_get_current ( hallcurrent5_t *ctx );
#line 201 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
uint8_t hallcurrent5_get_fault ( hallcurrent5_t *ctx );
#line 211 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/include/hallcurrent5.h"
void hallcurrent5_set_init_voltage ( hallcurrent5_t *ctx, uint16_t voltage );
#line 31 "C:/Users/lenovo/Documents/MIKROE/Projects/wifiCourant/lib_hallcurrent5/src/hallcurrent5.c"



void hallcurrent5_cfg_setup ( hallcurrent5_cfg_t *cfg )
{


    cfg->an_pin =  (hal_pin_name_t)(0xFFFFFFFF) ;



    cfg->int_pin =  (hal_pin_name_t)(0xFFFFFFFF) ;

    cfg->resolution   = ANALOG_IN_RESOLUTION_DEFAULT;
    cfg->vref         = 3.3;

    cfg->init_volt = 316;
}

uint8_t  hallcurrent5_init ( hallcurrent5_t *ctx, hallcurrent5_cfg_t *cfg )
{
    analog_in_config_t adc_cfg;

    analog_in_configure_default( &adc_cfg );
    adc_cfg.input_pin  = cfg->an_pin;

    if (  analog_in_open( &ctx->adc, &adc_cfg ) == ACQUIRE_FAIL )
    {
        return  0xFF ;
    }

    analog_in_set_vref_value( &ctx->adc, cfg->vref );
    analog_in_set_resolution( &ctx->adc, cfg->resolution );



    digital_in_init( &ctx->int_pin, cfg->int_pin );

    return  0x00 ;
}

hallcurrent5_data_t hallcurrent5_generic_read ( hallcurrent5_t *ctx )
{
    hallcurrent5_data_t rx_data;

    analog_in_read( &ctx->adc, &rx_data );

    return rx_data;
}

float hallcurrent5_generic_read_voltage ( hallcurrent5_t *ctx )
{
    float voltage;

    analog_in_read_voltage( &ctx->adc, &voltage );

    return voltage;
}

float hallcurrent5_get_current ( hallcurrent5_t *ctx )
{
    float voltage;
    float current;

    voltage = hallcurrent5_generic_read_voltage( ctx );
    voltage *= 1000;
    current = ( ( voltage - ctx->dev_init_volt - 12 ) / 66.0 ) * 1000.0;

    return current;
}

uint8_t hallcurrent5_get_fault ( hallcurrent5_t *ctx )
{
    return  ((((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->int_pin)->base) == 0) ? (0) : (((hal_ll_gpio_base_handle_t *)((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->int_pin)->base)->idr & ((hal_ll_gpio_pin_t *)(hal_ll_gpio_pin_t *)(hal_gpio_pin_t *)&ctx->int_pin)->mask) ? (1) : (0)) ;
}

void hallcurrent5_set_init_voltage ( hallcurrent5_t *ctx, uint16_t voltage )
{
    ctx->dev_init_volt = voltage;
}
