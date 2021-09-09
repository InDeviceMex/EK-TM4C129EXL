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


static OS_UBase_t OS_Task__uxGetExpectedIdleTime(void);
static void OS_Task__vIdle(void* pvParameters);

OS_UBase_t OS_Task__uxGetTickCount(void)
{
    OS_UBase_t uxTick = 0UL;
    OS_Task__vEnterCritical();
    {
        uxTick = OS_Task__uxGetTickCount_NotSafe();
    }
    OS_Task__vExitCritical();
    return (uxTick);
}

OS_UBase_t OS_Task__uxGetTickCountFromISR(void)
{
    OS_UBase_t uxReturn = 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
    {
        uxReturn = OS_Task__uxGetTickCount_NotSafe();
    }
    OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);

    return (uxReturn);
}

void OS_Task__vSetStepTick(const OS_UBase_t uxTicksToJump)
{
    OS_UBase_t uxNextTaskUnblockTime = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxTickNext = 0UL;

    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
    uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();

    uxTickNext = uxTickCount + uxTicksToJump;
    if(uxTickNext <= uxNextTaskUnblockTime)
    {
        OS_Task__vSetTickCount(uxTickNext);
    }
}



OS_Boolean_t OS_Task__boIncrementTick(void)
{
    OS_Task_TCB_TypeDef* pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef * pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstOwnerList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstReadyList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxDataAuxiliar = 0UL;
    OS_UBase_t uxListSize= 0UL;
    OS_UBase_t uxNextTaskUnblockTime = 0UL;
    OS_UBase_t uxPendedTicks = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Boolean_t boListIsEmpty = FALSE;
    OS_Boolean_t boYieldPending = FALSE;
    OS_Boolean_t boSwitchRequired = FALSE;

    /* Called by the portable layer each time a tick interrupt occurs.
    Increments the tick then checks to see if the new tick value will cause any
    tasks to be unblocked. */
    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if(0UL == uxSchedulerSuspended)
    {
        /* Increment the RTOS tick, switching the delayed and overflowed
        delayed lists if it wraps to 0. */
        OS_Task__vIncreaseTickCount();
        {
            /* Minor optimisation.  The tick count cannot change in this
            block. */
            const OS_UBase_t uxConstTickCount = OS_Task__uxGetTickCount_NotSafe();

            if(0UL == uxConstTickCount)
            {
                OS_Task__vSwitchDelayedLists();
            }

            /* See if this tick has made a timeout expire.  Tasks are stored in
            the queue in the order of their wake time - meaning once one task
            has been found whose block time has not expired there is no need to
            look any further down the list. */
            uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
            if( uxConstTickCount >= uxNextTaskUnblockTime )
            {
                while(1UL)
                {

                    pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
                    boListIsEmpty = OS_List__boIsEmpty(pstDelayedTaskList);
                    if( FALSE != boListIsEmpty )
                    {
                        /* The delayed list is empty.  Set uxNextTaskUnblockTime
                        to the maximum possible value so it is extremely
                        unlikely that the
                        if( OS_Task_uxTickCount >= uxNextTaskUnblockTime ) test will pass
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
                        pstTCB = (OS_Task_TCB_TypeDef *) OS_List__pvGetOwnerOfHeadEntry(pstDelayedTaskList);
                        uxDataAuxiliar = OS_List__uxGetItemValue(&( pstTCB->stGenericListItem));

                        if( uxConstTickCount < uxDataAuxiliar )
                        {
                            /* It is not time to unblock this item yet, but the
                            data auxiliar is the time at which the task at the head
                            of the blocked list must be removed from the Blocked
                            state - so record the data auxiliar in
                            uxNextTaskUnblockTime. */
                            OS_Task__vSetNextTaskUnblockTime(uxNextTaskUnblockTime);
                            break;
                        }

                        /* It is time to remove the item from the Blocked state. */
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));

                        /* Is the task waiting on an event also?  If so remove
                        it from the event list. */
                        pstOwnerList = (OS_List_TypeDef*) OS_List__pvItemContainer(&(pstTCB->stEventListItem));
                        if(0UL != (OS_UBase_t) pstOwnerList)
                        {
                            (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
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
                            if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                            {
                                boSwitchRequired = TRUE;
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
            pstReadyList = OS_Task__pstGetReadyTasksLists(pstCurrentTCB->uxPriorityTask);
            uxListSize = OS_List__uxGetLength(pstReadyList);
            if( 1UL < uxListSize)
            {
                boSwitchRequired = TRUE;
            }
        }

        {
            /* Guard against the tick hook being called when the pended tick
            count is being unwound (when the scheduler is being unlocked). */
            uxPendedTicks = OS_Task__uxGetPendedTicks();
            if(0UL == uxPendedTicks)
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
        boYieldPending = OS_Task__boGetYieldPending();
        if(FALSE != boYieldPending)
        {
            boSwitchRequired = TRUE;
        }
    }

    return (boSwitchRequired);
}


void OS_Task__vSwitchContext(void)
{

    OS_UBase_t uxSchedulerSuspended = 0UL;
    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended)
    {
        /* The scheduler is currently suspended - do not allow a context
        switch. */
        OS_Task__vSetYieldPending(TRUE);
    }
    else
    {
        OS_Task__vSetYieldPending(FALSE);

        /* Check for stack overflow, if configured. */
        OS_Task__vCheckStackOverflow();

        /* Select a new task to run using either the generic C or port
        optimised asm code. */
        OS_Task__vSelectHighestPriorityTask();
    }
}

static OS_UBase_t OS_Task__uxGetExpectedIdleTime(void)
{
    OS_Task_TCB_TypeDef*  pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstList = (OS_List_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxNextTaskUnblockTime = 0UL;
    OS_UBase_t uxReturn = 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstList = OS_Task__pstGetReadyTasksLists(OS_TASK_IDLE_PRIORITY);
    uxListSize = OS_List__uxGetLength(pstList);
    if(OS_TASK_IDLE_PRIORITY < pstCurrentTCB->uxPriorityTask)
    {
        uxReturn = 0UL;
    }
    else if(1UL < uxListSize)
    {
        /* There are other idle priority tasks in the ready state.  If
        time slicing is used then the very next tick interrupt must be
        processed. */
        uxReturn = 0UL;
    }
    else
    {
        uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
        uxTickCount = OS_Task__uxGetTickCount_NotSafe();
        uxReturn = uxNextTaskUnblockTime - uxTickCount;
    }

    return (uxReturn);
}

static void OS_Task__vIdle(void* pvParameters)
{
    OS_UBase_t uxListSize = (OS_UBase_t) pvParameters;
    OS_UBase_t uxTickCount = (OS_UBase_t) pvParameters;
    OS_UBase_t uxNextTaskUnblockTime = (OS_UBase_t) pvParameters;
    OS_List_TypeDef* pstReadyList = (OS_List_TypeDef*) 0UL;
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
            uxListSize = OS_List__uxGetLength(pstReadyList);

            if(1UL < uxListSize)
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
            OS_UBase_t uxExpectedIdleTime = 0UL;

            /* It is not desirable to suspend then resume the scheduler on
            each iteration of the idle task.  Therefore, a preliminary
            test of the expected idle time is performed without the
            scheduler suspended.  The result here is not necessarily
            valid. */
            uxExpectedIdleTime = OS_Task__uxGetExpectedIdleTime();

            if( uxExpectedIdleTime >= OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP )
            {
                OS_Task__vSuspendAll();
                {
                    /* Now the scheduler is suspended, the expected idle
                    time can be sampled again, and this time its value can
                    be used. */

                    uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
                    uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                    if(uxNextTaskUnblockTime >= uxTickCount)
                    {
                        uxExpectedIdleTime = OS_Task__uxGetExpectedIdleTime();

                        if(OS_TASK_EXPECTED_IDLE_TIME_BEFORE_SLEEP <= uxExpectedIdleTime)
                        {
                            /* portSUPPRESS_TICKS_AND_SLEEP( uxExpectedIdleTime );*/
                        }
                    }
                }
                (void) OS_Task__boResumeAll();
            }
        }
    }
}

void OS_Task__vStartScheduler(OS_UBase_t uxUsPeriod)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Task_Handle_TypeDef* pvIdleTaskHandle = (OS_Task_Handle_TypeDef*) 0UL;

    /* Add the idle task at the lowest priority. */
    {
        /* Create the idle task, storing its handle in xIdleTaskHandle so it can
        be returned by the xTaskGetIdleTaskHandle() function. */
        pvIdleTaskHandle = OS_Task__pvGetIdleTaskHandle();
        uxReturn = OS_Task__uxTaskGenericCreate(&OS_Task__vIdle,
                                                "IDLE",
                                                OS_TASK_IDLE_STACK_SIZE,
                                                (void *) 0UL,
                                                (OS_TASK_IDLE_PRIORITY),
                                                pvIdleTaskHandle );
    }

    #if ( configUSE_TIMERS == 1 )
    {
        if(1UL == uxReturn)
        {
            uxReturn = xTimerCreateTimerTask();
        }
    }
    #endif /* configUSE_TIMERS */

    if(1UL == uxReturn)
    {
        /* Interrupts are turned off here, to ensure a tick does not occur
        before or during the call to xPortStartScheduler().  The stacks of
        the created tasks contain a status word with interrupts switched on
        so interrupts will automatically get re-enabled when the first task
        starts to run. */
        OS_Task__vDisableInterrupts();

        OS_Task__vSetNextTaskUnblockTime(OS_ADAPT_MAX_DELAY);
        OS_Task__vSetSchedulerRunning(TRUE);
        OS_Task__vSetTickCount(0UL);

        /* If configGENERATE_RUN_TIME_STATS is defined then the following
        macro must be defined to configure the timer/counter used to generate
        the run time counter time base. */

        /* portCONFIGURE_TIMER_FOR_RUN_TIME_STATS(); */

        /* Setting up the timer tick is hardware specific and thus in the
        portable interface. */
        OS_Adapt__vStartScheduler(uxUsPeriod);
    }
    else
    {
        /* This line will only be reached if the kernel could not be started,
        because there was not enough FreeRTOS heap to create the idle task
        or the timer task. */
        if(0UL == uxReturn)
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
    OS_Task__vSetSchedulerRunning(FALSE);
    OS_Adapt__vEndScheduler();
}

