/**
 *
 * @file OS_Task_Delayed.c
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_Delayed.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>


/**TODO: create enum of status in order to avoid 1UL for true and 0UL for false*/

void OS_Task__vDelay(const uint32_t u32TicksToDelay)
{
    uint32_t u32TimeToWake = 0UL;
    uint32_t u32AlreadyYielded = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    uint32_t u32TickCount = 0UL;
    OS_TASK_TCB* pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;

    /* A delay time of zero just forces a reschedule. */
    if( 0UL < u32TicksToDelay)
    {
        u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
        if(0UL == u32SchedulerSuspended)
        {
            OS_Task__vSuspendAll();
            {

                /* A task that is removed from the event list while the
                scheduler is suspended will not get placed in the ready
                list or removed from the blocked list until the scheduler
                is resumed.

                This task cannot be in an event list as it is the currently
                executing task. */

                /* Calculate the time to wake - this may overflow but this is
                not a problem. */

                u32TickCount = OS_Task__u32GetTickCount();
                u32TimeToWake = u32TickCount + u32TicksToDelay;

                /* We must remove ourselves from the ready list before adding
                ourselves to the blocked list as the same list item is used for
                both lists. */
                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstCurrentTCB->stGenericListItem));
                CDLinkedList__enRemove( &( pstCurrentTCB->stGenericListItem));
                u32ListSize == CDLinkedList__u32GetSize(pstReadyList);

                if(0UL == u32ListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority(pstCurrentTCB->u32PriorityTask);
                }
                OS_Task__vAddCurrentTaskToDelayedList( u32TimeToWake );
            }
            u32AlreadyYielded = OS_Task__u32ResumeAll();
        }
    }
    /* Force a reschedule if xTaskResumeAll has not already done so, we may
    have put ourselves to sleep. */
    if( 0UL == u32AlreadyYielded)
    {
        OS_Task__vYieldWithinAPI();
    }
}


void OS_Task__vDelayUntil( uint32_t * const pu32PreviousWakeTime, const uint32_t u32TimeIncrement )
{
    uint32_t u32TimeToWake;
    uint32_t u32AlreadyYielded = 0UL;
    uint32_t u32ShouldDelay = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    uint32_t u32TickCount = 0UL;
    OS_TASK_TCB* pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;

    u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
    if((0UL != (uint32_t) pu32PreviousWakeTime) &&  ( 0UL < u32TimeIncrement) && (0UL == u32SchedulerSuspended))
    {
        OS_Task__vSuspendAll();
        {
            /* Minor optimisation.  The tick count cannot change in this
            block. */
            u32TickCount = OS_Task__u32GetTickCount();
            const uint32_t u32ConstTickCount = u32TickCount;

            /* Generate the tick time at which the task wants to wake. */
            u32TimeToWake = *pu32PreviousWakeTime + u32TimeIncrement;

            if( u32ConstTickCount < *pu32PreviousWakeTime )
            {
                /* The tick count has overflowed since this function was
                lasted called.  In this case the only time we should ever
                actually delay is if the wake time has also overflowed,
                and the wake time is greater than the tick time.  When this
                is the case it is as if neither time had overflowed. */
                if( ( u32TimeToWake < *pu32PreviousWakeTime ) && ( u32TimeToWake > u32ConstTickCount ) )
                {
                    u32ShouldDelay = 1UL;
                }
            }
            else
            {
                /* The tick time has not overflowed.  In this case we will
                delay if either the wake time has overflowed, and/or the
                tick time is less than the wake time. */
                if( ( u32TimeToWake < *pu32PreviousWakeTime ) || ( u32TimeToWake > u32ConstTickCount ) )
                {
                    u32ShouldDelay = 1UL;
                }
            }

            /* Update the wake time ready for the next call. */
            *pu32PreviousWakeTime = (uint32_t) u32TimeToWake;

            if( u32ShouldDelay != 0UL )
            {
                /* Remove the task from the ready list before adding it to the
                blocked list as the same list item is used for both lists. */
                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstCurrentTCB->stGenericListItem));
                CDLinkedList__enRemove( &( pstCurrentTCB->stGenericListItem));
                u32ListSize == CDLinkedList__u32GetSize(pstReadyList);
                if(0UL == u32ListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority( pstCurrentTCB->u32PriorityTask );
                }

                OS_Task__vAddCurrentTaskToDelayedList( u32TimeToWake );
            }
        }
        u32AlreadyYielded = OS_Task__u32ResumeAll();

        /* Force a reschedule if xTaskResumeAll has not already done so, we may
        have put ourselves to sleep. */
        if( 0UL == u32AlreadyYielded)
        {
            OS_Task__vYieldWithinAPI();
        }

    }
}

void OS_Task__vAddCurrentTaskToDelayedList(const uint32_t u32TimeToWake)
{
    OS_TASK_TCB* pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32TickCount = 0UL;
    uint32_t u32NextTaskUnblockTime = 0UL;
    OS_Task_List_Typedef* pstOverflowDelayedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstDelayedTaskList = (OS_Task_List_Typedef*) 0UL;

    /* The list item will be inserted in wake time order. */
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    CDLinkedList_Item__vSetValue(&(pstCurrentTCB->stGenericListItem), u32TimeToWake);

    u32TickCount = OS_Task__u32GetTickCount();
    if( u32TimeToWake < u32TickCount )
    {
        /* Wake time has overflowed.  Place this item in the overflow list. */
        pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
        CDLinkedList__enInsertInAscendingOrderByValue(pstOverflowDelayedTaskList, &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
        /* The wake time has not overflowed, so the current block list is used. */
        pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
        CDLinkedList__enInsertInAscendingOrderByValue(pstDelayedTaskList, &(pstCurrentTCB->stGenericListItem));

        /* If the task entering the blocked state was placed at the head of the
        list of blocked tasks then OS_Task_u32NextTaskUnblockTime needs to be updated
        too. */
        u32NextTaskUnblockTime = OS_Task__u32GetNextTaskUnblockTime();
        if( u32TimeToWake < u32NextTaskUnblockTime )
        {
            OS_Task__vSetNextTaskUnblockTime(u32TimeToWake);
        }
    }
}





