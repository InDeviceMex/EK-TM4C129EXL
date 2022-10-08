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

void SSI__vSetClockEvenPrescalerPart(SSI_nMODULE enModule, UBase_t uxEvenPrescaler)
{
    UBase_t uxMaskRegister = SSI_CPSR_CPSDVSR_MASK;
    uxMaskRegister &= ~ (UBase_t) 0x01UL;
    SSI__vWriteRegister(enModule, SSI_CPSR_OFFSET,
    uxEvenPrescaler, uxMaskRegister, SSI_CPSR_R_CPSDVSR_BIT);
}

UBase_t SSI__uxGetClockEvenPrescalerPart(SSI_nMODULE enModule)
{
    UBase_t uxPreescalerReg = 0UL;
    uxPreescalerReg = SSI__uxReadRegister(enModule,
              SSI_CPSR_OFFSET, SSI_CPSR_CPSDVSR_MASK, SSI_CPSR_R_CPSDVSR_BIT);
    return (uxPreescalerReg);
}

void SSI__vSetClockDivisorPart(SSI_nMODULE enModule, UBase_t uxDivisor)
{
    SSI__vWriteRegister(enModule, SSI_CR0_OFFSET,
                uxDivisor, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
}

UBase_t SSI__uxGetClockDivisorPart(SSI_nMODULE enModule)
{
    UBase_t uxDivisorReg = 0UL;
    uxDivisorReg = SSI__uxReadRegister(enModule,
                     SSI_CR0_OFFSET, SSI_CR0_SCR_MASK, SSI_CR0_R_SCR_BIT);
    return (uxDivisorReg);
}
