/**
 *
 * @file SYSEXC_InterruptVector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Interrupt/xHeader/SYSEXC_InterruptVector.h>

#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Dependencies.h>

void SYSEXC__vEnInterruptVector(SYSEXC_nPRIORITY enSYSEXCPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SYSEXC;

    enSYSEXCPriority &= 0x7U;
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enSYSEXCPriority);
}

void SYSEXC__vDisInterruptVector(void)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_SYSEXC;
    NVIC__vClearEnableIRQ(enVector);
}
