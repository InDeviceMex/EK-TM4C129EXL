/**
 *
 * @file OS_Task_Scheduler.c
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
 * @verbatim 21 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Scheduler.h>

static volatile OS_UBase_t OS_Task_uxSchedulerSuspended = 0UL;
static volatile OS_Boolean_t OS_Task_boSchedulerRunning = FALSE;

static volatile OS_UBase_t OS_Task_uxTickCount = 0UL;

OS_Task_Handle_t* OS_Task__pvGetIdleTaskHandle(void)
{
    static OS_Task_Handle_t OS_Task_pvIdleTaskHandle = (OS_Task_Handle_t) 0UL;

    return (&OS_Task_pvIdleTaskHandle);
}

OS_UBase_t OS_Task__uxGetTickCount_NotSafe(void)
{
    return (OS_Task_uxTickCount);
}

void OS_Task__vSetTickCount(OS_UBase_t uxValueArg)
{
    OS_Task_uxTickCount = uxValueArg;
}

void OS_Task__vIncreaseTickCount(void)
{
    OS_Task_uxTickCount++;
}

OS_UBase_t OS_Task__uxGetSchedulerSuspended(void)
{
    return (OS_Task_uxSchedulerSuspended);
}

void OS_Task__vSetSchedulerSuspended(OS_UBase_t uxValueArg)
{
    OS_Task_uxSchedulerSuspended = uxValueArg;
}

void OS_Task__vIncreaseSchedulerSuspended(void)
{
    ++OS_Task_uxSchedulerSuspended;
}

OS_Boolean_t OS_Task__boGetSchedulerRunning(void)
{
    return (OS_Task_boSchedulerRunning);
}

void OS_Task__vSetSchedulerRunning(OS_Boolean_t boValueArg)
{
    OS_Task_boSchedulerRunning = boValueArg;
}

OS_Task_eScheduler OS_Task__enGetSchedulerState(void)
{
    OS_Task_eScheduler enSchedulerState = OS_Task_enScheduler_Suspended;

    if(FALSE == OS_Task_boSchedulerRunning)
    {
        enSchedulerState = OS_Task_enScheduler_Not_Started;
    }
    else
    {
        if(0UL == OS_Task_uxSchedulerSuspended)
        {
            enSchedulerState = OS_Task_enScheduler_Running;
        }
        else
        {
            enSchedulerState = OS_Task_enScheduler_Suspended;
        }
    }

    return (enSchedulerState);
}
