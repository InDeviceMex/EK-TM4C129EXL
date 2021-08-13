/**
 *
 * @file MCU_enum.h
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
    MCU_enENABLE_ENA = 0UL,
    MCU_enENABLE_DIS = 1UL,
}MCU_nENABLE;

typedef enum
{
    MCU_enSTATE_ACTIVE = 0UL,
    MCU_enSTATE_INACTIVE = 1UL,
}MCU_nSTATE;

typedef enum
{
    MCU_enFPU_STATE_INACTIVE = 0UL,
    MCU_enFPU_STATE_ACTIVE = 1UL,
}MCU_nFPU_STATE;

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
    MCU_enDEFAULT = 0xFFFFFFFFUL,
}MCU_nPRIORITY;

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_ENUM_H_ */
