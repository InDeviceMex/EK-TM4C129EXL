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

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    SYSEXC_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    SYSEXC_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    SYSEXC_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    SYSEXC_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    SYSEXC_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    SYSEXC_enERROR_FULL = (UBase_t) MCU_enERROR_FULL,
    SYSEXC_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    SYSEXC_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}SYSEXC_nERROR;

typedef enum
{
    SYSEXC_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    SYSEXC_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    SYSEXC_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} SYSEXC_nSTATE;

typedef enum
{
    SYSEXC_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    SYSEXC_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    SYSEXC_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} SYSEXC_nSTATUS;

typedef enum
{
    SYSEXC_enFALSE = (UBase_t) FALSE,
    SYSEXC_enTRUE = (UBase_t) TRUE,
    SYSEXC_enPENDSTATE_UNDEF = UNDEF_VALUE,
}SYSEXC_nBOOLEAN;

typedef enum
{
    SYSEXC_enPRI0 = (UBase_t) MCU_enPRI0,
    SYSEXC_enPRI1 = (UBase_t) MCU_enPRI1,
    SYSEXC_enPRI2 = (UBase_t) MCU_enPRI2,
    SYSEXC_enPRI3 = (UBase_t) MCU_enPRI3,
    SYSEXC_enPRI4 = (UBase_t) MCU_enPRI4,
    SYSEXC_enPRI5 = (UBase_t) MCU_enPRI5,
    SYSEXC_enPRI6 = (UBase_t) MCU_enPRI6,
    SYSEXC_enPRI7 = (UBase_t) MCU_enPRI7,
    SYSEXC_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    SYSEXC_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}SYSEXC_nPRIORITY;

typedef enum
{
    SYSEXC_enMODULE_0 = 0UL,
    SYSEXC_enMODULE_MAX = 1UL,
}SYSEXC_nMODULE;

typedef enum
{
    SYSEXC_enINT_DENORMAL = 0UL,
    SYSEXC_enINT_DIV0 = 1UL,
    SYSEXC_enINT_INVALID = 2UL,
    SYSEXC_enINT_UNDERFLOW = 3UL,
    SYSEXC_enINT_OVERFLOW = 4UL,
    SYSEXC_enINT_INEXACT = 5UL,
    SYSEXC_enINT_SW = 6UL,
    SYSEXC_enINT_MAX = 7UL,
    SYSEXC_enINT_UNDEF = UNDEF_VALUE,
}SYSEXC_nINT;

typedef enum
{
    SYSEXC_enINTMASK_NONE = 0x0UL,
    SYSEXC_enINTMASK_DENORMAL = 0x1UL,
    SYSEXC_enINTMASK_DIV0 = 0x2UL,
    SYSEXC_enINTMASK_INVALID = 0x4UL,
    SYSEXC_enINTMASK_UNDERFLOW = 0x8UL,
    SYSEXC_enINTMASK_OVERFLOW = 0x10UL,
    SYSEXC_enINTMASK_INEXACT = 0x20UL,
    SYSEXC_enINTMASK_ALL = 0x3FUL,
    SYSEXC_enINTMASK_MAX = 0x40UL,
    SYSEXC_enINTMASK_UNDEF = UNDEF_VALUE,
}SYSEXC_nINTMASK;


typedef MCU_Register_t SYSEXC_Register_t;
typedef MCU_pvfIRQVectorHandler_t SYSEXC_pvfIRQVectorHandler_t;
typedef MCU_pvfIRQSourceHandler_t SYSEXC_pvfIRQSourceHandler_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_ENUM_H_ */
