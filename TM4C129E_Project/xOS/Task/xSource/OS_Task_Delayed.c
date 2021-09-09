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

void OS_Task__vDelay(const OS_UBase_t uxTicksToDelay)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_Boolean_t boAlreadyYielded = FALSE;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;

    /* A delay time of zero just forces a reschedule. */
    if(0UL < uxTicksToDelay)
    {
        uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
        if(0UL == uxSchedulerSuspended)
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

                uxTickCount = OS_Task__uxGetTickCount();
                uxTimeToWake = uxTickCount + uxTicksToDelay;

                /* We must remove ourselves from the ready list before adding
                ourselves to the blocked list as the same list item is used for
                both lists. */
                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority(pstCurrentTCB->uxPriorityTask);
                }
                OS_Task__vAddCurrentTaskToDelayedList( uxTimeToWake );
            }
            boAlreadyYielded = OS_Task__boResumeAll();
        }
    }
    /* Force a reschedule if xTaskResumeAll has not already done so, we may
    have put ourselves to sleep. */
    if( FALSE == boAlreadyYielded)
    {
        OS_Task__vYieldWithinAPI();
    }
}

void OS_Task__vDelayUntil(OS_UBase_t * const puxPreviousWakeTime,
                          const OS_UBase_t uxTimeIncrement)
{
    OS_UBase_t uxTimeToWake = 0UL;
    OS_Boolean_t boAlreadyYielded = FALSE;
    OS_Boolean_t boShouldDelay = FALSE;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;

    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if((0UL != (OS_UBase_t) puxPreviousWakeTime) &&
       ( 0UL < uxTimeIncrement) &&
       (0UL == uxSchedulerSuspended))
    {
        OS_Task__vSuspendAll();
        {
            /* Minor optimisation.  The tick count cannot change in this
            block. */
            uxTickCount = OS_Task__uxGetTickCount();
            const OS_UBase_t uxConstTickCount = uxTickCount;

            /* Generate the tick time at which the task wants to wake. */
            uxTimeToWake = *puxPreviousWakeTime + uxTimeIncrement;

            if( uxConstTickCount < *puxPreviousWakeTime )
            {
                /* The tick count has overflowed since this function was
                lasted called.  In this case the only time we should ever
                actually delay is if the wake time has also overflowed,
                and the wake time is greater than the tick time.  When this
                is the case it is as if neither time had overflowed. */
                if((uxTimeToWake < *puxPreviousWakeTime) &&
                   (uxTimeToWake > uxConstTickCount))
                {
                    boShouldDelay = TRUE;
                }
            }
            else
            {
                /* The tick time has not overflowed.  In this case we will
                delay if either the wake time has overflowed, and/or the
                tick time is less than the wake time. */
                if((uxTimeToWake < *puxPreviousWakeTime) ||
                   (uxTimeToWake > uxConstTickCount ))
                {
                    boShouldDelay = TRUE;
                }
            }

            /* Update the wake time ready for the next call. */
            *puxPreviousWakeTime = (OS_UBase_t) uxTimeToWake;

            if(FALSE != boShouldDelay)
            {
                /* Remove the task from the ready list before adding it to the
                blocked list as the same list item is used for both lists. */
                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    /* The current task must be in a ready list, so there is
                    no need to check, and the port reset macro can be called
                    directly. */
                    OS_Task__vClearReadyPriority( pstCurrentTCB->uxPriorityTask );
                }

                OS_Task__vAddCurrentTaskToDelayedList( uxTimeToWake );
            }
        }
        boAlreadyYielded = OS_Task__boResumeAll();

        /* Force a reschedule if xTaskResumeAll has not already done so, we may
        have put ourselves to sleep. */
        if( FALSE == boAlreadyYielded)
        {
            OS_Task__vYieldWithinAPI();
        }

    }
}

void OS_Task__vAddCurrentTaskToDelayedList(const OS_UBase_t uxTimeToWake)
{
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxNextTaskUnblockTime = 0UL;
    OS_List_TypeDef* pstOverflowDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstDelayedTaskList = (OS_List_TypeDef*) 0UL;

    /* The list item will be inserted in wake time order. */
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    OS_List__vSetItemValue(&(pstCurrentTCB->stGenericListItem), uxTimeToWake);

    uxTickCount = OS_Task__uxGetTickCount();
    if( uxTimeToWake < uxTickCount )
    {
        /* Wake time has overflowed.  Place this item in the overflow list. */
        pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
        OS_List__vInsert(pstOverflowDelayedTaskList,
                         &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
        /* The wake time has not overflowed, so the current block list is used. */
        pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
        OS_List__vInsert(pstDelayedTaskList,
                         &(pstCurrentTCB->stGenericListItem));

        /* If the task entering the blocked state was placed at the head of the
        list of blocked tasks then OS_Task_uxNextTaskUnblockTime needs to be updated
        too. */
        uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
        if( uxTimeToWake < uxNextTaskUnblockTime )
        {
            OS_Task__vSetNextTaskUnblockTime(uxTimeToWake);
        }
    }
}
