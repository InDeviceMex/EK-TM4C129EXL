/**
 *
 * @file SSI_Clock_Register.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/FrameControl/Clock/xHeader/SSI_Clock_Register.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetClockEvenPrescalerPart(SSI_nMODULE enModule, uint32_t u32EvenPrescaler)
{
    uint32_t u32MaskRegister = SSI_CPSR_CPSDVSR_MASK;
    u32MaskRegister &= ~ (uint32_t) 0x01UL;
    SSI__vWriteRegister(enModule, SSI_CPSR_OFFSET, u32EvenPrescaler, u32MaskRegister, SSI_CPSR_R_CPSDVSR_BIT);
}

uint32_t SSI__u32GetClockEvenPrescalerPart(SSI_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    SSI__enReadRegister(enModule, SSI_CPSR_OFFSET, &u32Reg, SSI_CPSR_CPSDVSR_MASK, SSI_CPSR_R_CPSDVSR_BIT);
    return u32Reg;
}

void SSI__vSetClockDivisorPart(SSI_nMODULE enModule, uint32_t u32Divisor)
{
    SSI__vWriteRegister(enModule, SSI_CR0_OFFSET, u32Divisor, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
}

uint32_t SSI__u32GetClockDivisorPart(SSI_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    SSI__enReadRegister(enModule, SSI_CR0_OFFSET, &u32Reg, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
    return u32Reg;
}


