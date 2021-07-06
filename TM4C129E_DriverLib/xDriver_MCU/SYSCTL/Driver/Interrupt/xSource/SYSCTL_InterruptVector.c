/**
 *
 * @file SYSCTL_InterruptVector.c
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/xHeader/SYSCTL_InterruptVector.h>

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Dependencies.h>

void SYSCTL__vEnInterruptVector(SYSCTL_nPRIORITY enSYSCTLPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SYSCTL;
    enSYSCTLPriority &= 0x7U;
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enSYSCTLPriority);
}

void SYSCTL__vDisInterruptVector(void)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SYSCTL;
    NVIC__vClearEnableIRQ(enVector);
}


