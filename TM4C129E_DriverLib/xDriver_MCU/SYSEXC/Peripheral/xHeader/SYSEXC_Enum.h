/**
 *
 * @file SYSEXC_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef enum
{
    SYSEXC_enSTATUS_OK = 0UL,
    SYSEXC_enSTATUS_ERROR = 1UL,
    SYSEXC_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enINTERRUPT_SW = 0x0UL,
    SYSEXC_enINTERRUPT_DENORMAL = 0x1UL,
    SYSEXC_enINTERRUPT_DIV0 = 0x2UL,
    SYSEXC_enINTERRUPT_INVALID = 0x3UL,
    SYSEXC_enINTERRUPT_UNDERFLOW = 0x4UL,
    SYSEXC_enINTERRUPT_OVERFLOW = 0x5UL,
    SYSEXC_enINTERRUPT_INEXACT = 0x6UL,
    SYSEXC_enINTERRUPT_MAX = 0x7UL,
}SYSEXC_nINTERRUPT;

typedef enum
{
    SYSEXC_enINT_SOURCE_NONE = 0x0UL,
    SYSEXC_enINT_SOURCE_DENORMAL = 0x1UL,
    SYSEXC_enINT_SOURCE_DIV0 = 0x2UL,
    SYSEXC_enINT_SOURCE_INVALID = 0x4UL,
    SYSEXC_enINT_SOURCE_UNDERFLOW = 0x8UL,
    SYSEXC_enINT_SOURCE_OVERFLOW = 0x10UL,
    SYSEXC_enINT_SOURCE_INEXACT = 0x20UL,
    SYSEXC_enINT_SOURCE_ALL = 0x3FUL,
    SYSEXC_enINT_SOURCE_UNDEF = 0xFFFFFUL,
}SYSEXC_nINT_SOURCE;

typedef enum
{
    SYSEXC_enINT_STATUS_NOOCCUR = 0UL,
    SYSEXC_enINT_STATUS_OCCUR = 1UL,
    SYSEXC_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}SYSEXC_nINT_STATUS;

typedef enum
{
    SYSEXC_enPRI0 = 0UL,
    SYSEXC_enPRI1 = 1UL,
    SYSEXC_enPRI2 = 2UL,
    SYSEXC_enPRI3 = 3UL,
    SYSEXC_enPRI4 = 4UL,
    SYSEXC_enPRI5 = 5UL,
    SYSEXC_enPRI6 = 6UL,
    SYSEXC_enPRI7 = 7UL,
    SYSEXC_enMIN = 7UL,
    SYSEXC_enDEFAULT = 0xFFFFFFFFUL,
}SYSEXC_nPRIORITY;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_ */
