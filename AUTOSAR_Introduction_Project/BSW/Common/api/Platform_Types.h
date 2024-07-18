#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/************************************************************************************************************
 *                                               Type definitions                                           *
 ************************************************************************************************************/

/**
 * Description: This standard AUTOSAR type shall only be used together with the definitions TRUE and FALSE.
 * Range:
 *      FALSE -> 0
 *      TRUE  -> 1
 */
typedef unsigned char boolean;

/**
 * Description: This standard AUTOSAR type shall be of 8 bit unsigned.
 * Range: 0..255 / 0x00..0xFF
 */
typedef unsigned char uint8;

/**
 * Description: This standard AUTOSAR type shall be of 16 bit unsigned.
 * Range: 0..65535 / 0x0000..0xFFFF
 */
typedef unsigned short uint16;

/**
 * Description: This standard AUTOSAR type shall be of 32 bit unsigned.
 * Range: 0..4294967295 / 0x00000000..0xFFFFFFFF
 */
typedef unsigned int uint32;

/**
 * Description: This standard AUTOSAR type shall be of 64 bit unsigned.
 * Range: 0..18446744073709551615  / 0x0000000000000000..0xFFFFFFFFFFFFFFFF
 */
typedef unsigned long long uint64;

/**
 * Description: This standard AUTOSAR type shall be of 8 bit signed.
 * Range: -128..+127 / 0x80..0x7F
 */
typedef char sint8;

/**
 * Description: This standard AUTOSAR type shall be of 16 bit signed.
 * Range: -32768..+32767 / 0x8000..0x7FFF
 */
typedef short sint16;

/**
 * Description: This standard AUTOSAR type shall be of 32 bit signed.
 * Range: -2147483648..+2147483647 / 0x80000000..0x7FFFFFFF
 */
typedef int sint32;

/**
 * Description: This standard AUTOSAR type shall be of 64 bit signed.
 * Range: -9223372036854775808..9223372036854775807 / 0x8000000000000000..0x7FFFFFFFFFFFFFFF
 */
typedef long long sint64;

/**
 * Description: This standard AUTOSAR type shall follow the 32-bit binary interchange format according to IEEE
 *              754-2008 with encoding parameters specified in chapter 3.6, table 3.5, column "binary32".
 * Range: -3.4028235e+38..+3.4028235e+38
 */
typedef float float32;

/**
 * Description: This standard AUTOSAR type shall follow the 64-bit binary interchange format according to IEEE
 *              754-2008 with encoding parameters specified in chapter 3.6, table 3.5, column "binary64".
 * Range: -1.7976931348623157e+308..+1.7976931348623157e+308
 */
typedef double float64;

/**
 * Description: This standard AUTOSAR type shall be a void pointer
 *              Note: This type shall be used for buffers that contain data returned to the caller.
 */
typedef void* VoidPtr;

/**
 * Description: This standard AUTOSAR type shall be a void pointer to const.
 *              Note: This type shall be used for buffers that are passed to the callee.
 */
typedef const void* ConstVoidPtr;

/************************************************************************************************************
 *                                            Symbol definitions                                            *
 ************************************************************************************************************/
#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

#endif /* PLATFORM_TYPES_H */
