/**
 *
 * @file EPI_Enum.h
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_EPI_PERIPHERAL_XHEADER_EPI_ENUM_H_
#define XDRIVER_MCU_EPI_PERIPHERAL_XHEADER_EPI_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

typedef enum
{
    EPI_enSTATUS_OK = 0UL,
    EPI_enSTATUS_ERROR = 1UL,
    EPI_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}EPI_nSTATUS;


typedef enum
{
    EPI_enSTATE_FALSE = 0UL,
    EPI_enSTATE_TRUE = 1UL,
    EPI_enSTATE_UNDEF = 0xFFFFFFFFUL,
}EPI_nSTATE;

typedef enum
{
    EPI_enNOREADY = 0UL,
    EPI_enREADY = 1UL,
}EPI_nREADY;

typedef enum
{
    EPI_enMODULE_0 = 0UL,
    EPI_enMODULE_MAX = 1UL,
}EPI_nMODULE;

#endif /* XDRIVER_MCU_EPI_PERIPHERAL_XHEADER_EPI_ENUM_H_ */
