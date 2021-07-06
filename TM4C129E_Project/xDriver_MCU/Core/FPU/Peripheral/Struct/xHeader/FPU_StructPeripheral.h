/**
 *
 * @file FPU_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/FPU/Peripheral/Struct/xHeader/FPU_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CPACR;
        CPACR_TypeDef CPACR_Bit;
    };
    uint32_t reserved[106UL];
    union
    {
        volatile uint32_t FPCCR;
        FPCCR_TypeDef FPCCR_Bit;
    };
    union
    {
        volatile uint32_t FPCAR;
        FPCAR_TypeDef FPCAR_Bit;
    };
    union
    {
        volatile uint32_t FPDSCR;
        FPDSCR_TypeDef FPDSCR_Bit;
    };
    union
    {
        const  uint32_t MVFR0;
        MVFR0_TypeDef MVFR0_Bit;
    };
    union
    {
        const  uint32_t MVFR1;
        MVFR1_TypeDef MVFR1_Bit;
    };
        const  uint32_t MVFR2;
}FPU_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_FPU_STRUCTPERIPHERAL_H_ */
