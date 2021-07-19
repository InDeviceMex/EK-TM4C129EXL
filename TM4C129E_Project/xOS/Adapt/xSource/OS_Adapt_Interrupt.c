/**
 *
 * @file OS_Adapt_Interrupt.c
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
 * @verbatim 17 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Adapt/xHeader/OS_Adapt_Interrupt.h>

#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

void OS_Adapt__vYield(void)
{
    SCB_PendSV__vSetPending();
}

void OS_Adapt__vYieldWithinAPI(void)
{
    SCB_PendSV__vSetPending();
}

void OS_Adapt__vYieldFromISR(uint32_t u32Switch)
{
    OS_Adapt__vEndSwitchingISR(u32Switch);
}

void OS_Adapt__vEndSwitchingISR( uint32_t u32SwitchRequired)
{
    if( u32SwitchRequired != 0UL )
    {
        OS_Adapt__vYield();
    }
}



void OS_Adapt__vDisableInterrupts(void)
{
    MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY);
}

void OS_Adapt__vEnableInterrupts(void)
{
    MCU__enSetBasePriorityInterrupt(MCU_enPRI0);
}

uint32_t OS_Adapt__u32IsInterruptActive(void)
{
    uint32_t u32InterruptActive = 0UL;
    u32InterruptActive = (uint32_t) SCB_ISR__enGetVectorActive();
    return (u32InterruptActive);
}

uint32_t OS_Adapt__u32SetInterruptMaskFromISR(void)
{
    uint32_t u32Interrupt = 0UL;
    u32Interrupt = (uint32_t) MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY);
    return (u32Interrupt);
}


void OS_Adapt__vClearInterruptMaskFromISR(uint32_t u32Mask)
{
    MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) u32Mask);
}

