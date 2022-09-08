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

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>


typedef enum
{
    CAN_enERROR_OK = (uint32_t) MCU_enERROR_OK,
    CAN_enERROR_POINTER = (uint32_t) MCU_enERROR_POINTER,
    CAN_enERROR_VALUE = (uint32_t) MCU_enERROR_VALUE,
    CAN_enERROR_RANGE = (uint32_t) MCU_enERROR_RANGE,
    CAN_enERROR_EMPTY = (uint32_t) MCU_enERROR_EMPTY,
    CAN_enERROR_UNDEF = (uint32_t) MCU_enERROR_UNDEF,
}CAN_nERROR;

typedef enum
{
    CAN_enSTATE_DIS = (uint32_t) MCU_enSTATE_DIS,
    CAN_enSTATE_ENA = (uint32_t) MCU_enSTATE_ENA,
    CAN_enSTATE_UNDEF = (uint32_t) MCU_enSTATE_UNDEF,
} CAN_nSTATE;

typedef enum
{
    CAN_enSTATUS_INACTIVE = (uint32_t) MCU_enSTATUS_INACTIVE,
    CAN_enSTATUS_ACTIVE = (uint32_t) MCU_enSTATUS_ACTIVE,
    CAN_enSTATUS_CLEAR = (uint32_t) MCU_enSTATUS_CLEAR,
    CAN_enSTATUS_UNDEF = (uint32_t) MCU_enSTATUS_UNDEF,
} CAN_nSTATUS;

typedef enum
{
    CAN_enPRI0 = (uint32_t) MCU_enPRI0,
    CAN_enPRI1 = (uint32_t) MCU_enPRI1,
    CAN_enPRI2 = (uint32_t) MCU_enPRI2,
    CAN_enPRI3 = (uint32_t) MCU_enPRI3,
    CAN_enPRI4 = (uint32_t) MCU_enPRI4,
    CAN_enPRI5 = (uint32_t) MCU_enPRI5,
    CAN_enPRI6 = (uint32_t) MCU_enPRI6,
    CAN_enPRI7 = (uint32_t) MCU_enPRI7,
    CAN_enPRIMAX = (uint32_t) MCU_enPRIMAX,
    CAN_enDEFAULT = (uint32_t) MCU_enDEFAULT,
}CAN_nPRIORITY;

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


#endif /* XDRIVER_MCU_CAN_PERIPHERAL_XHEADER_CAN_ENUM_H_ */
