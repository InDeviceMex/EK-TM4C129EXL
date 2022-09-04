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
 * @verbatim 12 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSCTL/Interrupt/xHeader/SYSCTL_InterruptVector.h>

#include <xApplication_MCU/SYSCTL/Intrinsics/xHeader/SYSCTL_Dependencies.h>

void SYSCTL__vEnInterruptVector(SYSCTL_nPRIORITY enSYSCTLPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_SYSCTL;
    enSYSCTLPriority &= 0x7U;
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enSYSCTLPriority);
}

void SYSCTL__vDisInterruptVector(void)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_SYSCTL;
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}
