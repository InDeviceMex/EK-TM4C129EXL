/**
 *
 * @file SSI_Clock.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/FrameControl/xHeader/SSI_Clock.h>

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
    uint32_t u32Reg = 0UL;
    u32Reg = SSI__u32ReadRegister(enModule, SSI_CPSR_OFFSET, SSI_CPSR_CPSDVSR_MASK, SSI_CPSR_R_CPSDVSR_BIT);
    return (u32Reg);
}

void SSI__vSetClockDivisorPart(SSI_nMODULE enModule, uint32_t u32Divisor)
{
    SSI__vWriteRegister(enModule, SSI_CR0_OFFSET, u32Divisor, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
}

uint32_t SSI__u32GetClockDivisorPart(SSI_nMODULE enModule)
{
    uint32_t u32Reg = 0UL;
    u32Reg = SSI__u32ReadRegister(enModule, SSI_CR0_OFFSET, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
    return (u32Reg);
}
