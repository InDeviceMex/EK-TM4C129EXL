/**
 *
 * @file MCU_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 17 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_ENUM_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef enum
{
    MCU_enERROR_OK = (UBase_t) ERROR_OK,
    MCU_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    MCU_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    MCU_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    MCU_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    MCU_enERROR_BUSY = (UBase_t) ERROR_BUSY,
    MCU_enERROR_TIMEOUT = (UBase_t) ERROR_TIMEOUT,
    MCU_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}MCU_nERROR;

typedef enum
{
    MCU_enSTATE_DIS = 0UL,
    MCU_enSTATE_ENA = 1UL,
    MCU_enSTATE_UNDEF = UNDEF_VALUE,
}MCU_nSTATE;

typedef enum
{
    MCU_enSTATUS_INACTIVE = 0UL,
    MCU_enSTATUS_ACTIVE = 1UL,
    MCU_enSTATUS_CLEAR = 1UL,
    MCU_enSTATUS_UNDEF = UNDEF_VALUE,
}MCU_nSTATUS;

typedef enum
{
    MCU_enSTACK_MSP = 0UL,
    MCU_enSTACK_PSP = 1UL,
}MCU_nSTACK;

typedef enum
{
    MCU_enTHREAD_LEVEL_PRIV = 0UL,
    MCU_enTHREAD_LEVEL_UNPRIV = 1UL,
}MCU_nTHREAD_LEVEL;

typedef enum
{
    MCU_enPRI0 = 0UL,
    MCU_enPRI1 = 1UL,
    MCU_enPRI2 = 2UL,
    MCU_enPRI3 = 3UL,
    MCU_enPRI4 = 4UL,
    MCU_enPRI5 = 5UL,
    MCU_enPRI6 = 6UL,
    MCU_enPRI7 = 7UL,
    MCU_enPRIMAX = 8UL,
    MCU_enDEFAULT = UNDEF_VALUE,
}MCU_nPRIORITY;

typedef struct
{
    uintptr_t uptrAddress;
    UBase_t uxValue;
    UBase_t uxMask;
    UBase_t uxShift;
}MCU_Register_t;

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_ENUM_H_ */
