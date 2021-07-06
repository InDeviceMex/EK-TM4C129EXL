/**
 *
 * @file SCB_MemoryFault.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_MemoryFault.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_MemoryFault__vSetPriority(SCB_nSHPR enMemoryPriority)
{
    MCU__vDataSyncBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR1_OFFSET, (uint32_t) enMemoryPriority,
                        SCB_SHPR1_MEM_MASK, SCB_SHPR1_R_MEM_BIT);
    MCU__vDataSyncBarrier();
}
SCB_nSHPR SCB_MemoryFault__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    enReturn = (SCB_nSHPR) MCU__u32ReadRegister(SCB_BASE, SCB_SHPR1_OFFSET,
                                  SCB_SHPR1_MEM_MASK, SCB_SHPR1_R_MEM_BIT);

    return (enReturn);
}

void SCB_MemoryFault__vEnable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_MEMFAULTENA_ENA,
                        SCB_SHCSR_MEMFAULTENA_MASK, SCB_SHCSR_R_MEMFAULTENA_BIT);
}

void SCB_MemoryFault__vDisable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_MEMFAULTENA_DIS,
                        SCB_SHCSR_MEMFAULTENA_MASK, SCB_SHCSR_R_MEMFAULTENA_BIT);
}

void SCB_MemoryFault__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_MEMFAULTPENDED_PEND,
                        SCB_SHCSR_MEMFAULTPENDED_MASK, SCB_SHCSR_R_MEMFAULTPENDED_BIT);
}
void SCB_MemoryFault__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, (uint32_t) SCB_SHCSR_MEMFAULTPENDED_NOPEND,
                        SCB_SHCSR_MEMFAULTPENDED_MASK, SCB_SHCSR_R_MEMFAULTPENDED_BIT);
}

SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;

    enReturn = (SCB_nPENDSTATE) MCU__u32ReadRegister(SCB_BASE, SCB_SHCSR_OFFSET,
                                 SCB_SHCSR_MEMFAULTPENDED_MASK, SCB_SHCSR_R_MEMFAULTPENDED_BIT);
    return (enReturn);
}

uint32_t SCB_MemoryFault_u32GetAddress(void)
{
    uint32_t u32Reg = 0UL;
    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_MMFAR_OFFSET,
                                  SCB_MMFAR_ADDRESS_MASK, SCB_MMFAR_R_ADDRESS_BIT);

    return (u32Reg);
}
