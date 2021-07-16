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

#include <xOS/External/OS_External.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_Delayed.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

static volatile uint32_t u32SchedulerSuspended = 0UL;
static volatile uint32_t u32SchedulerRunning = 0;

static volatile uint32_t u32TickCount = 0UL;

uint32_t OS_Task__u32GetTickCount(void)
{
    return (u32TickCount);
}

void OS_Task__vSetTickCount(uint32_t u32ValueArg)
{
    u32TickCount = u32ValueArg;
}

uint32_t OS_Task__u32GetSchedulerSuspended(void)
{
    return (u32SchedulerSuspended);
}

void OS_Task__vSetSchedulerSuspended(uint32_t u32ValueArg)
{
    u32SchedulerSuspended = u32ValueArg;
}


void OS_Task__vIncreaseSchedulerSuspended(void)
{
    ++u32SchedulerSuspended;
}

uint32_t OS_Task__u32GetSchedulerRunning(void)
{
    return (u32SchedulerRunning);
}

void OS_Task__vSetSchedulerRunning(uint32_t u32ValueArg)
{
    u32SchedulerRunning = u32ValueArg;
}


void OS_Task__vIncreaseSchedulerRunning(void)
{
    ++u32SchedulerRunning;
}

uint32_t OS_Task__u32TaskIncrementTick( void )
{
OS_TASK_TCB * pstTCB;
OS_TASK_TCB * pstCurrentTCB;
uint32_t u32DataAuxiliar;
uint32_t u32SwitchRequired = 0UL;
uint32_t u32ListSize= 0UL;
uint32_t u32NextTaskUnblockTime = 0UL;
uint32_t u32PendedTicks = 0UL;
uint32_t u32YieldPending = 0UL;
CDLinkedList_nSTATUS enListIsEmpty = CDLinkedList_enSTATUS_OK;
OS_Task_List_Typedef* pstDelayedTaskList = (OS_Task_List_Typedef*) 0UL;
OS_Task_List_Typedef* pstOwnerList = (OS_Task_List_Typedef*) 0UL;
OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;

    /* Called by the portable layer each time a tick interrupt occurs.
    Increments the tick then checks to see if the new tick value will cause any
    tasks to be unblocked. */
    if( u32SchedulerSuspended == ( uint32_t ) 0UL )
    {
        /* Increment the RTOS tick, switching the delayed and overflowed
        delayed lists if it wraps to 0. */
        ++u32TickCount;

        {
            /* Minor optimisation.  The tick count cannot change in this
            block. */
            const uint32_t u32ConstTickCount = u32TickCount;

            if( u32ConstTickCount == ( uint32_t ) 0U )
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
                for( ;; )
                {

                    pstDelayedTaskList = OS_Task__pstGetDelayedTaskListPointer();
                    enListIsEmpty = CDLinkedList__enIsEmpty(pstDelayedTaskList);
                    if( CDLinkedList_enSTATUS_OK == enListIsEmpty )
                    {
                        /* The delayed list is empty.  Set u32NextTaskUnblockTime
                        to the maximum possible value so it is extremely
                        unlikely that the
                        if( u32TickCount >= u32NextTaskUnblockTime ) test will pass
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
                            if( pstTCB->u32Priority >= pstCurrentTCB->u32Priority )
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
            pstReadyList = OS_Task__pstGetReadyTasksLists( pstCurrentTCB->u32Priority);
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
            if( u32PendedTicks == ( uint32_t ) 0U )
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
        if( u32YieldPending != 0UL )
        {
            u32SwitchRequired = 1UL;
        }
    }

    return u32SwitchRequired;
}


void OS_Task__vTaskSwitchContext(void)
{
    if( (uint32_t) 0UL != u32SchedulerSuspended)
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

