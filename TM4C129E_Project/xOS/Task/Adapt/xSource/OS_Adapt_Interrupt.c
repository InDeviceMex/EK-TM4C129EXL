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
 * @verbatim 9 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Adapt/xHeader/OS_Adapt_Interrupt.h>

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

void OS_Adapt__vYieldFromISR(OS_Boolean_t boSwitch)
{
    OS_Adapt__vEndSwitchingISR(boSwitch);
}

void OS_Adapt__vEndSwitchingISR(OS_Boolean_t boSwitchRequired)
{
    if(FALSE != boSwitchRequired)
    {
        OS_Adapt__vYield();
    }
}

void OS_Adapt__vDisableInterrupts(void)
{
    MCU__vSetBasePriorityInterrupt((MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY);
}

void OS_Adapt__vEnableInterrupts(void)
{
    MCU__vSetBasePriorityInterrupt(MCU_enPRI0);
}

OS_Boolean_t OS_Adapt__boIsInterruptActive(void)
{
    OS_UBase_t uxInterruptActive = 0UL;
    OS_Boolean_t boInterruptState = FALSE;
    uxInterruptActive = (OS_UBase_t) SCB_ISR__enGetVectorActive();
    if(0UL != uxInterruptActive)
    {
        boInterruptState = TRUE;
    }
    return (boInterruptState);
}

OS_UBase_t OS_Adapt__uxSetInterruptMaskFromISR(void)
{
    OS_UBase_t uxInterrupt = 0UL;
    uxInterrupt = (OS_UBase_t) MCU__enSetBasePriorityInterrupt(
            (MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY);
    return (uxInterrupt);
}


void OS_Adapt__vClearInterruptMaskFromISR(OS_UBase_t uxMask)
{
    MCU__vSetBasePriorityInterrupt((MCU_nPRIORITY) uxMask);
}
