/**
 *
 * @file CAN_Enum.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_XHEADER_CAN_ENUM_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_XHEADER_CAN_ENUM_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef enum
{
    CAN_enSTATUS_OK = 0UL,
    CAN_enSTATUS_ERROR = 1UL,
    CAN_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}CAN_nSTATUS;

typedef enum
{
    CAN_enNOREADY = 0UL,
    CAN_enREADY = 1UL,
}CAN_nREADY;

typedef enum
{
    CAN_enMODULE_0 = 0UL,
    CAN_enMODULE_1 = 1UL,
    CAN_enMODULE_MAX = 2UL,
}CAN_nMODULE;

typedef enum
{
    CAN_enPRI0 = 0UL,
    CAN_enPRI1 = 1UL,
    CAN_enPRI2 = 2UL,
    CAN_enPRI3 = 3UL,
    CAN_enPRI4 = 4UL,
    CAN_enPRI5 = 5UL,
    CAN_enPRI6 = 6UL,
    CAN_enPRI7 = 7UL,
    CAN_enDEFAULT = 0xFFFFFFFFUL,
}CAN_nPRIORITY;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_XHEADER_CAN_ENUM_H_ */
