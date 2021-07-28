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
 * @verbatim 16 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/External/OS_External.h>
#include <xOS/Task/xHeader/OS_Task_Create.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_Deleted.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>


static uint32_t OS_Task__u32GetExpectedIdleTime(void);
static void OS_Task__vIdle(void* pvParameters);

uint32_t OS_Task__u32GetTickCount(void)
{
    uint32_t u32Tick = 0UL;
    OS_Task__vEnterCritical();
    {
        u32Tick = OS_Task__u32GetTickCount_NotSafe();
    }
    OS_Task__vExitCritical();
    return (u32Tick);
}

uint32_t OS_Task__u32GetTickCountFromISR(void)
{
    uint32_t u32Return = 0UL;
    uint32_t u32SavedInterruptStatus = 0UL;
    u32SavedInterruptStatus = OS_Task__u32SetInterruptMaskFromISR();
    {
        u32Return = OS_Task__u32GetTickCount_NotSafe();
    }
    OS_Task__vClearInterruptMaskFromISR(u32SavedInterruptStatus);

    return (u32Return);
}

void OS_Task__vSetStepTick(const uint32_t u32TicksToJump)
{
    uint32_t u32NextTaskUnblockTime = 0UL;
    uint32_t u32TickCount = 0UL;
    uint32_t u32TickNext = 0UL;

    u32TickCount = OS_Task__u32GetTickCount_NotSafe();
    u32NextTaskUnblockTime = OS_Task__u32GetNextTaskUnblockTime();

    u32TickNext = u32TickCount + u32TicksToJump;
    if(u32TickNext <= u32NextTaskUnblockTime)
    {
        OS_Task__vSetTickCount(u32TickNext);
    }
}



uint32_t OS_Task__u32TaskIncrementTick(void)
{
    OS_TASK_TCB * pstTCB;
    OS_TASK_TCB * pstCurrentTCB;
    uint32_t u32DataAuxiliar;
    uint32_t u32SwitchRequired = 0UL;
    uint32_t u32ListSize= 0UL;
    uint32_t u32NextTaskUnblockTime = 0UL;
    uint32_t u32PendedTicks = 0UL;
    uint32_t u32YieldPending = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    CDLinkedList_nSTATUS enListIsEmpty = CDLinkedList_enSTATUS_OK;
    OS_Task_List_Typedef* pstDelayedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstOwnerList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;

    /* Called by the portable layer each time a tick interrupt occurs.
    Increments the tick then checks to see if the new tick value will cause any
    tasks to be unblocked. */
    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
    if(0UL == u32SchedulerSuspended)
    {
        /* Increment the RTOS tick, switching the delayed and overflowed
        delayed lists if it wraps to 0. */
        OS_Task__vIncreaseTickCount();
        {
            /* Minor optimisation.  The tick count cannot change in this
            block. */
            const uint32_t u32ConstTickCount = OS_Task__u32GetTickCount_NotSafe();

            if(0UL == u32ConstTickCount)
            {
                OS_Task__vSwitchDelayedLists();
            }

            /* See if this tick has made a timeout expire.  Tasks are stored in
            the queue in the order of their wake time - meaning once one task
            has been found whose block time has not expired there is no need to
            look any further down the list. */
            u32NextTaskUnblockTime = OS_Task__u32GetNextTaskUnblockTime();
            if( u32ConstTickCount >= u32NextTaskUnblockTime )
            {
                while(1UL)
                {

                    pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
                    enListIsEmpty = CDLinkedList__enIsEmpty(pstDelayedTaskList);
                    if( CDLinkedList_enSTATUS_OK == enListIsEmpty )
                    {
                        /* The delayed list is empty.  Set u32NextTaskUnblockTime
                        to the maximum possible value so it is extremely
                        unlikely that the
                        if( OS_Task_u32TickCount >= u32NextTaskUnblockTime ) test will pass
                        next time through. */
                        OS_Task__vSetNextTaskUnblockTime(OS_ADAPT_MAX_DELAY);
                        break;
                    }
                    else
                    {
                        /* The delayed list is not empty, get the value of the
                        item at the head of the delayed list.  This is the time
                        at which the task at the head of the delayed list must
                        be removed from the Blocked state. */
                        pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(pstDelayedTaskList);
                        u32DataAuxiliar = CDLinkedList_Item__u32GetValue(&( pstTCB->stGenericListItem));

                        if( u32ConstTickCount < u32DataAuxiliar )
                        {
                            /* It is not time to unblock this item yet, but the
                            data auxiliar is the time at which the task at the head
                            of the blocked list must be removed from the Blocked
                            state - so record the data auxiliar in
                            u32NextTaskUnblockTime. */
                            OS_Task__vSetNextTaskUnblockTime(u32NextTaskUnblockTime);
                            break;
                        }

                        /* It is time to remove the item from the Blocked state. */
                        ( void ) CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));

                        /* Is the task waiting on an event also?  If so remove
                        it from the event list. */
                        pstOwnerList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstTCB->stEventListItem));
                        if(0UL != (uint32_t) pstOwnerList)
                        {
                            ( void ) CDLinkedList__enRemove(&( pstTCB->stEventListItem));
                        }

                        /* Place the unblocked task into the appropriate ready
                        list. */
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* A task being unblocked cannot cause an immediate
                        context switch if preemption is turned off. */
                        {
                            /* Preemption is on, but a context switch should
                            only be performed if the unblocked task has a
                            priority that is equal to or higher than the
                            currently executing task. */
                            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                            if( pstTCB->u32PriorityTask >= pstCurrentTCB->u32PriorityTask )
                            {
                                u32SwitchRequired = 1UL;
                            }
                        }
                    }
                }
            }
        }

        {
            /* Tasks of equal priority to the currently running task will share
            processing time (time slice) if preemption is on, and the application
            writer has not explicitly turned time slicing off. */
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            pstReadyList = OS_Task__pstGetReadyTasksLists( pstCurrentTCB->u32PriorityTask);
            u32ListSize = CDLinkedList__u32GetSize(pstReadyList);
            if( 1UL < u32ListSize)
            {
                u32SwitchRequired = 1UL;
            }
        }

        {
            /* Guard against the tick hook being called when the pended tick
            count is being unwound (when the scheduler is being unlocked). */
            u32PendedTicks = OS_Task__u32GetPendedTicks();
            if(0UL == u32PendedTicks)
            {
                OS_External__vApplicationTickHook();
            }
        }
    }
    else
    {
        OS_Task__vIncreasePendedTicks();

        /* The tick hook gets called at regular intervals, even if the
        scheduler is locked. */
        {
            OS_External__vApplicationTickHook();
        }
    }

    {
        u32YieldPending = OS_Task__u32GetYieldPending();
        if(0UL != u32YieldPending)
        {
            u32SwitchRequired = 1UL;
        }
    }

    return (u32SwitchRequired);
}


void OS_Task__vSwitchContext(void)
{

    uint32_t u32SchedulerSuspended = 0UL;
    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
    if(0UL != u32SchedulerSuspended)
    {
        /* The scheduler is currently suspended - do not allow a context
        switch. */
        OS_Task__vSetYieldPending(1UL);
    }
    else
    {
        OS_Task__vSetYieldPending(0UL);

        /* Check for stack overflow, if configured. */
        OS_Task__vCheckStackOverflow();

        /* Select a new task to run using either the generic C or port
        optimised asm code. */
        OS_Task__vSelectHighestPriorityTask();
    }
}

static uint32_t OS_Task__u32GetExpectedIdleTime(void)
{
    uint32_t u32Return = 0UL;
    OS_TASK_TCB*  pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;
    uint32_t u32NextTaskUnblockTime = 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstList = OS_Task__pstGetReadyTasksLists(OS_TASK_IDLE_PRIORITY);
    u32ListSize = CDLinkedList__u32GetSize(pstList);
    if(OS_TASK_IDLE_PRIORITY < pstCurrentTCB->u32PriorityTask)
    {
        u32Return = 0UL;
    }
    else if(1UL < u32ListSize)
    {
        /* There are other idle priority tasks in the ready state.  If
        time slicing is used then the very next tick interrupt must be
        processed. */
        u32Return = 0UL;
    }
    else
    {
        u32NextTaskUnblockTime = OS_Task__u32GetNextTaskUnblockTime();
        u32TickCount = OS_Task__u32GetTickCount_NotSafe();
        u32Return = u32NextTaskUnblockTime - u32TickCount;
    }

    return (u32Return);
}

static void OS_Task__vIdle(void* pvParameters)
{
    uint32_t u32ListSize = 0UL;
    uint32_t u32TickCount = 0UL;
    uint32_t u32NextTaskUnblockTime = 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    /* Stop warnings. */
    (void) pvParameters;

    while(1UL)
    {
        /* See if any tasks have been deleted. */
        OS_Task__vCheckTasksWaitingTermination();

        {
            /* When using preemption tasks of equal priority will be
            timesliced.  If a task that is sharing the idle priority is ready
            to run then the idle task should yield before the end of the
            timeslice.

            A critical region is not required here as we are just reading from
            the list, and an occasional incorrect value will not matter.  If
            the ready list at the idle priority contains more than one task
            then a task other than the idle task is ready to execute. */
            pstReadyList = OS_Task__pstGetReadyTasksLists(OS_TASK_IDLE_PRIORITY);
            u32ListSize = CDLinkedList__u32GetSize(pstReadyList);

            if(1UL < u32ListSize)
            {
                OS_Task__vYield();
            }
        }

        {
            /* Call the user defined function from within the idle task.  This
            allows the application designer to add background functionality
            without the overhead of a separate task.
            NOTE: vApplicationIdleHook() MUST NOT, UNDER ANY CIRCUMSTANCES,
            CALL A FUNCTION THAT MIGHT BLOCK. */
            OS_External__vApplicationIdleHook();
        }

        /* This conditional compilation should use inequality to 0, not equality
        to 1.  This is to ensure portSUPPRESS_TICKS_AND_SLEEP() is called when
        user defined low power mode implementations require
        configUSE_TICKLESS_IDLE to be set to a value other than 1. */
        {
            uint32_t u32ExpectedIdleTime = 0UL;

            /* It is not desirable to suspend then resume the scheduler on
            each iteration of the idle task.  Therefore, a preliminary
            test of the expected idle time is performed without the
            scheduler suspended.  The result here is not necessarily
            valid. */
            u32ExpectedIdleTime = OS_Task__u32GetExpectedIdleTime();

            if( u32ExpectedIdleTime >= OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP )
            {
                OS_Task__vSuspendAll();
                {
                    /* Now the scheduler is suspended, the expected idle
                    time can be sampled again, and this time its value can
                    be used. */

                    u32NextTaskUnblockTime = OS_Task__u32GetNextTaskUnblockTime();
                    u32TickCount = OS_Task__u32GetTickCount_NotSafe();
                    if(u32NextTaskUnblockTime >= u32TickCount)
                    {
                        u32ExpectedIdleTime = OS_Task__u32GetExpectedIdleTime();

                        if(OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP <= u32ExpectedIdleTime)
                        {
                            /* portSUPPRESS_TICKS_AND_SLEEP( u32ExpectedIdleTime );*/
                        }
                    }
                }
                (void) OS_Task__u32ResumeAll();
            }
        }
    }
}

void OS_Task__vStartScheduler(uint32_t u32UsPeriod)
{
    uint32_t u32Return = 0UL;
    uint32_t u32Status = 0UL;
    OS_Task_Handle_TypeDef* pvIdleTaskHandle = (OS_Task_Handle_TypeDef*) 0UL;

    /* Add the idle task at the lowest priority. */
    {
        /* Create the idle task, storing its handle in xIdleTaskHandle so it can
        be returned by the xTaskGetIdleTaskHandle() function. */
        pvIdleTaskHandle = OS_Task__pvGetIdleTaskHandle();
        u32Return = OS_Task__u32TaskGenericCreate(&OS_Task__vIdle, "IDLE", OS_TASK_IDLE_STACK_SIZE, (void *) 0UL, ( OS_TASK_IDLE_PRIORITY ), pvIdleTaskHandle ); /*lint !e961 MISRA exception, justified as it is not a redundant explicit cast to all supported compilers. */
    }

    #if ( configUSE_TIMERS == 1 )
    {
        if(1UL == u32Return)
        {
            u32Return = xTimerCreateTimerTask();
        }
    }
    #endif /* configUSE_TIMERS */

    if(1UL == u32Return)
    {
        /* Interrupts are turned off here, to ensure a tick does not occur
        before or during the call to xPortStartScheduler().  The stacks of
        the created tasks contain a status word with interrupts switched on
        so interrupts will automatically get re-enabled when the first task
        starts to run. */
        OS_Task__vDisableInterrupts();

        OS_Task__vSetNextTaskUnblockTime(OS_ADAPT_MAX_DELAY);
        OS_Task__vSetSchedulerRunning(1UL);
        OS_Task__vSetTickCount(0UL);

        /* If configGENERATE_RUN_TIME_STATS is defined then the following
        macro must be defined to configure the timer/counter used to generate
        the run time counter time base. */

        /* portCONFIGURE_TIMER_FOR_RUN_TIME_STATS(); */

        /* Setting up the timer tick is hardware specific and thus in the
        portable interface. */
        u32Status = OS_Adapt__u32StartScheduler(u32UsPeriod);
        if(0UL != u32Status)
        {
            /* Should not reach here as if the scheduler is running the
            function will not return. */
        }
        else
        {
            /* Should only reach here if a task calls xTaskEndScheduler(). */
        }
    }
    else
    {
        /* This line will only be reached if the kernel could not be started,
        because there was not enough FreeRTOS heap to create the idle task
        or the timer task. */
        if(0UL == u32Return)
        {
            OS_Task__vDisableInterrupts();
            while(1UL);
        }
    }
}

void OS_Task__vEndScheduler( void )
{
    /* Stop the scheduler interrupts and call the portable scheduler end
    routine so the original ISRs can be restored if necessary.  The port
    layer must ensure interrupts enable bit is left in the correct state. */
    OS_Task__vDisableInterrupts();
    OS_Task__vSetSchedulerRunning(0UL);
    OS_Adapt__vEndScheduler();
}

