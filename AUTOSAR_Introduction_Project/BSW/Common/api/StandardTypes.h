#ifndef STD_TYPES_H
#define STD_TYPES_H

/************************************************************************************************************
 *                                                   Includes                                               *
 ************************************************************************************************************/
#include "Platform_Types.h"

/************************************************************************************************************
 *                                               Type definitions                                           *
 ************************************************************************************************************/

/**
 * Description: This type can be used as standard API return type which is shared between the RTE and the 
 *              BSW modules. 
 * Range:
 *      E_OK      -> 0
 *      E_NOT_OK  -> 1
 *      0x02-0x3F -> Available to user specific errors.
 */
typedef uint8 Std_ReturnType;

/**
 * Description: This type shall be used to request the version of a BSW module using the 
 *              <Modulename>_GetVersionInfo() function.
 */
typedef struct Std_VersionInfoType_t
{
    uint16 vendorID;
    uint16 moduleID;
    uint8  sw_major_version;
    uint8  sw_minor_version;
    uint8  sw_patch_version;
} Std_VersionInfoType;

/************************************************************************************************************
 *                                            Symbol definitions                                            *
 ************************************************************************************************************/

#ifndef STATUSTYPEDEFINED
    #define STATUSTYPEDEFINED
    #define E_OK 0x00u
    typedef unsigned char StatusType; /* OSEK compliance */
#endif
#define E_NOT_OK 0x01u

#define STD_HIGH    0x01u /* Physical state 5V or 3.3V */
#define STD_LOW     0x00u /* Physical state 0V */

#define STD_ACTIVE  0x01u /* Logical state active */
#define STD_IDLE    0x00u /* Logical state idle */

#define STD_ON      0x01u
#define STD_OFF     0x00u

#endif /* STD_TYPES_H */
