/**
 *
 * @file SCB_PendSV.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_PendSV.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_PendSV__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_ICSR_OFFSET, SCB_ICSR_PENDSVSET_SET,
                        SCB_ICSR_PENDSVSET_MASK, SCB_ICSR_R_PENDSVSET_BIT);
    MCU__vDataSyncBarrier();
    MCU__vInstructionSyncBarrier();
}
void SCB_PendSV__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_ICSR_OFFSET, SCB_ICSR_PENDSVCLR_REMOVE,
                        SCB_ICSR_PENDSVCLR_MASK, SCB_ICSR_R_PENDSVCLR_BIT);
}

SCB_nPENDSTATE SCB_PendSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;
    enReturn = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_ICSR_OFFSET,
                                  SCB_ICSR_PENDSVSET_MASK, SCB_ICSR_R_PENDSVSET_BIT);
    return (enReturn);
}

void SCB_PendSV__vSetPriority(SCB_nSHPR enPendSVPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR3_OFFSET, (uint32_t) enPendSVPriority,
                        SCB_SHPR3_PENDSV_MASK, SCB_SHPR3_R_PENDSV_BIT);
    MCU__vDataSyncBarrier();
}

SCB_nSHPR SCB_PendSV__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    enReturn = (SCB_nSHPR) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR3_OFFSET,
                                  SCB_SHPR3_PENDSV_MASK, SCB_SHPR3_R_PENDSV_BIT);
    return (enReturn);
}
