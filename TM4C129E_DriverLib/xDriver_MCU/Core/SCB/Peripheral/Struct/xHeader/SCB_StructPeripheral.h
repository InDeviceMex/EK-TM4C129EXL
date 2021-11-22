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
        ICTLR_t ICTLR_Bit;
    };
    union
    {
        volatile uint32_t ACTLR;
        ACTLR_t ACTLR_Bit;
    };
    const uint32_t reserved1[829];
    union
    {
        volatile uint32_t CPUID;
        CPUID_t CPUID_Bit;
    };
    union
    {
        volatile uint32_t ICSR;
        ICSR_t ICSR_Bit;
    };
    union
    {
        volatile uint32_t VTOR;
        VTOR_t VTOR_Bit;
    };
    union
    {
        volatile uint32_t AIRCR;
        AIRCR_t AIRCR_Bit;
    };
    union
    {
        volatile uint32_t SCR;
        SCR_t SCR_Bit;
    };
    union
    {
        volatile uint32_t CCR;
        CCR_t CCR_Bit;
    };
    union
    {
        volatile uint32_t SHPR1;
        SHPR1_t SHPR1_Bit;
    };
    union
    {
        volatile uint32_t SHPR2;
        SHPR2_t SHPR2_Bit;
    };
    union
    {
        volatile uint32_t SHPR3;
        SHPR3_t SHPR3_Bit;
    };
    union
    {
        volatile uint32_t SHCSR;
        SHCSR_t SHCSR_Bit;
    };
    union
    {
        volatile uint32_t CFSR;
        CFSR_t CFSR_Bit;
    };
    union
    {
        volatile uint32_t HFSR;
        HFSR_t HFSR_Bit;
    };
    union
    {
        volatile uint32_t DFSR;
        DFSR_t DFSR_Bit;
    };
    union
    {
        volatile uint32_t MMFAR;
        MMFAR_t MMFAR_Bit;
    };
    union
    {
        volatile uint32_t BFAR;
        BFAR_t BFAR_Bit;
    };
    union
    {
        volatile uint32_t AFSR;
        AFSR_t AFSR_Bit;
    };
    union
    {
        volatile uint32_t PFR0;
        PFR0_t PFR0_Bit;
    };
    union
    {
        volatile uint32_t PFR1;
        PFR1_t PFR1_Bit;
    };
    union
    {
        volatile uint32_t DFR0;
        DFR0_t DFR0_Bit;
    };
    union
    {
        volatile uint32_t AFR0;
        AFR0_t AFR0_Bit;
    };
    union
    {
        volatile uint32_t MMFR0;
        MMFR0_t MMFR0_Bit;
    };
    union
    {
        volatile uint32_t MMFR1;
        MMFR1_t MMFR1_Bit;
    };
    union
    {
        volatile uint32_t MMFR2;
        MMFR2_t MMFR2_Bit;
    };
    union
    {
        volatile uint32_t MMFR3;
        MMFR3_t MMFR3_Bit;
    };
    union
    {
        volatile uint32_t ISAR0;
        ISAR0_t ISAR0_Bit;
    };
    union
    {
        volatile uint32_t ISAR1;
        ISAR1_t ISAR1_Bit;
    };
    union
    {
        volatile uint32_t ISAR2;
        ISAR2_t ISAR2_Bit;
    };
    union
    {
        volatile uint32_t ISAR3;
        ISAR3_t ISAR3_Bit;
    };
    union
    {
        volatile uint32_t ISAR4;
        ISAR4_t ISAR4_Bit;
    };
    const uint32_t reserved3[163];
}SCB_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_STRUCT_SCB_STRUCTPERIPHERAL_H_ */
