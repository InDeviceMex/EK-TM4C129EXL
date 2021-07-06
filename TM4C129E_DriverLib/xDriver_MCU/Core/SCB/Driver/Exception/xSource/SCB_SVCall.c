/**
 *
 * @file SCB_SVCall.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_SVCall.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_SVCall__vSetPriority(SCB_nSHPR enSVCallPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR2_OFFSET, (uint32_t) enSVCallPriority,
                        SCB_SHPR2_SVCALL_MASK, SCB_SHPR2_R_SVCALL_BIT);
    MCU__vDataSyncBarrier();
}

SCB_nSHPR SCB_SVCall__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    enReturn = (SCB_nSHPR) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR2_OFFSET,
                                  SCB_SHPR2_SVCALL_MASK, SCB_SHPR2_R_SVCALL_BIT);
    return (enReturn);
}

void SCB_SVCall__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_SVCALLPENDED_PEND,
                        SCB_SHCSR_SVCALLPENDED_MASK, SCB_SHCSR_R_SVCALLPENDED_BIT);
}

void SCB_SVCall__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_SVCALLPENDED_NOPEND,
                        SCB_SHCSR_SVCALLPENDED_MASK, SCB_SHCSR_R_SVCALLPENDED_BIT);
}

SCB_nPENDSTATE SCB_SVCall__enGetPending(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;
    enReturn = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_SHCSR_OFFSET,
                                  SCB_SHCSR_SVCALLPENDED_MASK, SCB_SHCSR_R_SVCALLPENDED_BIT);
    return (enReturn);
}
