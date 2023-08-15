/**
 *
 * @file OS_Task_Critical.c
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
 * @verbatim 20 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Adapt/OS_Adapt.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Critical.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Scheduler_.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB_.h>


void OS_Task__vEnterCritical(void)
{

    OS_Adapt__vDisableInterrupts();
    OS_Boolean_t boSchedulerRunning;
    boSchedulerRunning = OS_Task__boGetSchedulerRunning();
    if(FALSE != boSchedulerRunning)
    {
        OS_Task_TCB_t* pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        (pstCurrentTCB->uxCriticalNesting)++;

        if(1UL == pstCurrentTCB->uxCriticalNesting)
        {
            if(FALSE != OS_Adapt__boIsInterruptActive())
            {
                OS_Adapt__vFault();
            }
        }
    }
}

void OS_Task__vEnterCriticalFromISR(void)
{
    OS_Adapt__uxSetInterruptMaskFromISR();
}

void OS_Task__vExitCritical(void)
{
    OS_Boolean_t boSchedulerRunning;
    boSchedulerRunning = OS_Task__boGetSchedulerRunning();
    if(FALSE != boSchedulerRunning)
    {
        OS_Task_TCB_t* pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(0UL < pstCurrentTCB->uxCriticalNesting)
        {
            (pstCurrentTCB->uxCriticalNesting)--;
            if(0UL == pstCurrentTCB->uxCriticalNesting)
            {
                OS_Adapt__vEnableInterrupts();
            }
        }

    }
}

void OS_Task__vExitCriticalFromISR(OS_UBase_t uxMaskArg)
{
    OS_Adapt__vClearInterruptMaskFromISR(uxMaskArg);
}
