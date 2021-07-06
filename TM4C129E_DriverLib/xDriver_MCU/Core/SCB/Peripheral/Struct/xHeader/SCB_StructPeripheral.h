/**
 *
 * @file SCB_StructPeripheral.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/SCB/Peripheral/Struct/xHeader/SCB_StructRegister.h>

typedef volatile struct
{
    const uint32_t reserved[1];
    union
    {
        volatile const uint32_t ICTLR;
        ICTLR_TypeDef ICTLR_Bit;
    };
    union
    {
        volatile uint32_t ACTLR;
        ACTLR_TypeDef ACTLR_Bit;
    };
    const uint32_t reserved1[829];
    union
    {
        volatile uint32_t CPUID;
        CPUID_TypeDef CPUID_Bit;
    };
    union
    {
        volatile uint32_t ICSR;
        ICSR_TypeDef ICSR_Bit;
    };
    union
    {
        volatile uint32_t VTOR;
        VTOR_TypeDef VTOR_Bit;
    };
    union
    {
        volatile uint32_t AIRCR;
        AIRCR_TypeDef AIRCR_Bit;
    };
    union
    {
        volatile uint32_t SCR;
        SCR_TypeDef SCR_Bit;
    };
    union
    {
        volatile uint32_t CCR;
        CCR_TypeDef CCR_Bit;
    };
    union
    {
        volatile uint32_t SHPR1;
        SHPR1_TypeDef SHPR1_Bit;
    };
    union
    {
        volatile uint32_t SHPR2;
        SHPR2_TypeDef SHPR2_Bit;
    };
    union
    {
        volatile uint32_t SHPR3;
        SHPR3_TypeDef SHPR3_Bit;
    };
    union
    {
        volatile uint32_t SHCSR;
        SHCSR_TypeDef SHCSR_Bit;
    };
    union
    {
        volatile uint32_t CFSR;
        CFSR_TypeDef CFSR_Bit;
    };
    union
    {
        volatile uint32_t HFSR;
        HFSR_TypeDef HFSR_Bit;
    };
    union
    {
        volatile uint32_t DFSR;
        DFSR_TypeDef DFSR_Bit;
    };
    union
    {
        volatile uint32_t MMFAR;
        MMFAR_TypeDef MMFAR_Bit;
    };
    union
    {
        volatile uint32_t BFAR;
        BFAR_TypeDef BFAR_Bit;
    };
    union
    {
        volatile uint32_t AFSR;
        AFSR_TypeDef AFSR_Bit;
    };
    union
    {
        volatile uint32_t PFR0;
        PFR0_TypeDef PFR0_Bit;
    };
    union
    {
        volatile uint32_t PFR1;
        PFR1_TypeDef PFR1_Bit;
    };
    union
    {
        volatile uint32_t DFR0;
        DFR0_TypeDef DFR0_Bit;
    };
    union
    {
        volatile uint32_t AFR0;
        AFR0_TypeDef AFR0_Bit;
    };
    union
    {
        volatile uint32_t MMFR0;
        MMFR0_TypeDef MMFR0_Bit;
    };
    union
    {
        volatile uint32_t MMFR1;
        MMFR1_TypeDef MMFR1_Bit;
    };
    union
    {
        volatile uint32_t MMFR2;
        MMFR2_TypeDef MMFR2_Bit;
    };
    union
    {
        volatile uint32_t MMFR3;
        MMFR3_TypeDef MMFR3_Bit;
    };
    union
    {
        volatile uint32_t ISAR0;
        ISAR0_TypeDef ISAR0_Bit;
    };
    union
    {
        volatile uint32_t ISAR1;
        ISAR1_TypeDef ISAR1_Bit;
    };
    union
    {
        volatile uint32_t ISAR2;
        ISAR2_TypeDef ISAR2_Bit;
    };
    union
    {
        volatile uint32_t ISAR3;
        ISAR3_TypeDef ISAR3_Bit;
    };
    union
    {
        volatile uint32_t ISAR4;
        ISAR4_TypeDef ISAR4_Bit;
    };
    const uint32_t reserved3[163];
}SCB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTPERIPHERAL_H_ */
