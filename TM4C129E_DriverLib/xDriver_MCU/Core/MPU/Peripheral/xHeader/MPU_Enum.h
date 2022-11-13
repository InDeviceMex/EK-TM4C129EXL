/**
 *
 * @file MPU_Enum.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_MPU_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_MPU_ENUM_H_

#include <xDriver_MCU/Common/xHeader/MCU_Enum.h>

#define SCB_VECTOR_TABLE_SIZE ((UBase_t) 0x00000100UL)

typedef enum
{
    MPU_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    MPU_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    MPU_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    MPU_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    MPU_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}MPU_nERROR;

typedef enum
{
    MPU_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    MPU_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    MPU_enSTATE_UNDEF = UNDEF_VALUE,
}MPU_nSTATE;

typedef enum
{
    MPU_enMODULE_0 = 0UL,
    MPU_enMODULE_MAX = 1UL,
    MPU_enMODULE_UNDEF = UNDEF_VALUE,
}MPU_nMODULE;

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_MPU_ENUM_H_ */
