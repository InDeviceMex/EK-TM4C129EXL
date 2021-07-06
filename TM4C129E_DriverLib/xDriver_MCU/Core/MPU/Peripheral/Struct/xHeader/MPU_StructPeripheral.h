/**
 *
 * @file MPU_StructPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/MPU/Peripheral/Struct/xHeader/MPU_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t TYPER;
        MPU_TYPER_TypeDef TYPE_Bit;
    };
    union
    {
        volatile uint32_t CTRL;
        MPU_CTRL_TypeDef CTRL_Bit;
    };
    union
    {
        volatile uint32_t RNR;
        MPU_RNR_TypeDef RNR_Bit;
    };
    union
    {
        volatile uint32_t RBAR;
        MPU_RBAR_TypeDef RBAR_Bit;
    };
    union
    {
        volatile uint32_t RASR;
        MPU_RASR_TypeDef RASR_Bit;
    };
    union
    {
        volatile uint32_t RBAR1;
        MPU_RBAR_TypeDef RBAR1_Bit;
    };
    union
    {
        volatile uint32_t RASR1;
        MPU_RASR_TypeDef RASR1_Bit;
    };
    union
    {
        volatile uint32_t RBAR2;
        MPU_RBAR_TypeDef RBAR2_Bit;
    };
    union
    {
        volatile uint32_t RASR2;
        MPU_RASR_TypeDef RASR2_Bit;
    };
    union
    {
        volatile uint32_t RBAR3;
        MPU_RBAR_TypeDef RBAR3_Bit;
    };
    union
    {
        volatile uint32_t RASR3;
        MPU_RASR_TypeDef RASR3_Bit;
    };
}MPU_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_STRUCT_MPU_STRUCTPERIPHERAL_H_ */
