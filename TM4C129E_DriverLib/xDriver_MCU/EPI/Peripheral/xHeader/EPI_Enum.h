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

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

typedef enum
{
    EPI_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    EPI_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    EPI_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    EPI_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    EPI_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    EPI_enERROR_BUSY = (UBase_t) MCU_enERROR_BUSY,
    EPI_enERROR_TIMEOUT = (UBase_t) MCU_enERROR_TIMEOUT,
    EPI_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}EPI_nERROR;

typedef enum
{
    EPI_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    EPI_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    EPI_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} EPI_nSTATE;

typedef enum
{
    EPI_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    EPI_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    EPI_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} EPI_nSTATUS;

typedef enum
{
    EPI_enPRI0 = (UBase_t) MCU_enPRI0,
    EPI_enPRI1 = (UBase_t) MCU_enPRI1,
    EPI_enPRI2 = (UBase_t) MCU_enPRI2,
    EPI_enPRI3 = (UBase_t) MCU_enPRI3,
    EPI_enPRI4 = (UBase_t) MCU_enPRI4,
    EPI_enPRI5 = (UBase_t) MCU_enPRI5,
    EPI_enPRI6 = (UBase_t) MCU_enPRI6,
    EPI_enPRI7 = (UBase_t) MCU_enPRI7,
    EPI_enPRIMAX = (UBase_t) MCU_enPRIMAX,
    EPI_enDEFAULT = (UBase_t) MCU_enDEFAULT,
}EPI_nPRIORITY;

typedef enum
{
    EPI_enMODULE_0 = 0UL,
    EPI_enMODULE_MAX = 1UL,
    EPI_enMODULE_UNDEF = UNDEF_VALUE,
}EPI_nMODULE;



#endif /* XDRIVER_MCU_EPI_PERIPHERAL_XHEADER_EPI_ENUM_H_ */
