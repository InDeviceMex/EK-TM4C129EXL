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


static OS_Task_Handle_TypeDef OS_Task_pvIdleTaskHandle = (OS_Task_Handle_TypeDef) 0UL;         /*< Holds the handle of the idle task.  The idle task is created automatically when the scheduler is started. */

static volatile uint32_t OS_Task_u32SchedulerSuspended = 0UL;
static volatile uint32_t OS_Task_u32SchedulerRunning = 0UL;

static volatile uint32_t OS_Task_u32TickCount = 0UL;

OS_Task_Handle_TypeDef* OS_Task__pvGetIdleTaskHandle(void)
{
    return (&OS_Task_pvIdleTaskHandle);
}

uint32_t OS_Task__u32GetTickCount_NotSafe(void)
{
    return (OS_Task_u32TickCount);
}

void OS_Task__vSetTickCount(uint32_t u32ValueArg)
{
    OS_Task_u32TickCount = u32ValueArg;
}

void OS_Task__vIncreaseTickCount(void)
{
    OS_Task_u32TickCount++;
}

uint32_t OS_Task__u32GetSchedulerSuspended(void)
{
    return (OS_Task_u32SchedulerSuspended);
}

void OS_Task__vSetSchedulerSuspended(uint32_t u32ValueArg)
{
    OS_Task_u32SchedulerSuspended = u32ValueArg;
}

void OS_Task__vIncreaseSchedulerSuspended(void)
{
    ++OS_Task_u32SchedulerSuspended;
}

uint32_t OS_Task__u32GetSchedulerRunning(void)
{
    return (OS_Task_u32SchedulerRunning);
}

void OS_Task__vSetSchedulerRunning(uint32_t u32ValueArg)
{
    OS_Task_u32SchedulerRunning = u32ValueArg;
}

void OS_Task__vIncreaseSchedulerRunning(void)
{
    ++OS_Task_u32SchedulerRunning;
}

uint32_t xTaskGetSchedulerState( void )
{
    uint32_t u32Return = 0UL;

    if(0UL == OS_Task_u32SchedulerRunning)
    {
        u32Return = (uint32_t) OS_Task_enScheduler_Not_Started;
    }
    else
    {
        if(0UL == OS_Task_u32SchedulerSuspended)
        {
            u32Return = (uint32_t) OS_Task_enScheduler_Running;
        }
        else
        {
            u32Return = (uint32_t) OS_Task_enScheduler_Suspended;
        }
    }

    return (u32Return);
}
