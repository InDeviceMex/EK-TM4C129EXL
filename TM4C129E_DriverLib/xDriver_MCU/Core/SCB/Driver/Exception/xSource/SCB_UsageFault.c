/**
 *
 * @file SCB_UsageFault.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_UsageFault.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_UsageFault__vSetPriority(SCB_nSHPR enUsageFaultPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR1_OFFSET, (uint32_t) enUsageFaultPriority,
                        SCB_SHPR1_USAGE_MASK, SCB_SHPR1_R_USAGE_BIT);
    MCU__vDataSyncBarrier();
}

SCB_nSHPR SCB_UsageFault__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    enReturn = (SCB_nSHPR) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR1_OFFSET,
                                  SCB_SHPR1_USAGE_MASK, SCB_SHPR1_R_USAGE_BIT);
    return (enReturn);
}

void SCB_UsageFault__vEnable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTENA_ENA,
                        SCB_SHCSR_USGFAULTENA_MASK, SCB_SHCSR_R_USGFAULTENA_BIT);
}
void SCB_UsageFault__vDisable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTENA_DIS,
                        SCB_SHCSR_USGFAULTENA_MASK, SCB_SHCSR_R_USGFAULTENA_BIT);
}

void SCB_UsageFault__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTPENDED_PEND,
                        SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);
}

void SCB_UsageFault__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTPENDED_NOPEND,
                        SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);
}

SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;
    enReturn = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_SHCSR_OFFSET,
                                  SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);

    return (enReturn);
}
