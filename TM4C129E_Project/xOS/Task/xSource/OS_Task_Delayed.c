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
    OS_Boolean_t boAlreadyYielded;

    boAlreadyYielded = FALSE;
    if(0UL < uxTicksToDelay)
    {
        OS_UBase_t uxSchedulerSuspended;
        uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
        if(0UL == uxSchedulerSuspended)
        {
            OS_Task__vSuspendAll();
            {
                OS_Task_TCB_t* pstCurrentTCB;
                OS_UBase_t uxTimeToWake;
                OS_UBase_t uxTickCount;
                OS_UBase_t uxListSize;

                uxTickCount = OS_Task__uxGetTickCount_NotSafe();
                uxTimeToWake = uxTickCount;
                uxTimeToWake += uxTicksToDelay;

                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority(pstCurrentTCB->uxPriorityTask);
                }
                OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
            }
            boAlreadyYielded = OS_Task__boResumeAll();
        }
    }

    if( FALSE == boAlreadyYielded)
    {
        OS_Task__vYieldWithinAPI();
    }
}

void OS_Task__vDelayUntil(OS_UBase_t * const puxPreviousWakeTime,
                          const OS_UBase_t uxTimeIncrement)
{
    OS_UBase_t uxSchedulerSuspended;

    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if((0UL != (OS_Pointer_t) puxPreviousWakeTime) &&
       (0UL < uxTimeIncrement) &&
       (0UL == uxSchedulerSuspended))
    {
        OS_Boolean_t boAlreadyYielded;

        OS_Task__vSuspendAll();
        {
            OS_UBase_t uxTickCount;
            OS_UBase_t uxTimeToWake;
            OS_Boolean_t boShouldDelay;

            uxTickCount = OS_Task__uxGetTickCount_NotSafe();
            const OS_UBase_t uxConstTickCount = uxTickCount;

            uxTimeToWake = *puxPreviousWakeTime;
            uxTimeToWake += uxTimeIncrement;

            boShouldDelay = FALSE;
            if( uxConstTickCount < *puxPreviousWakeTime )
            {
                if((uxTimeToWake < *puxPreviousWakeTime) &&
                   (uxTimeToWake > uxConstTickCount))
                {
                    boShouldDelay = TRUE;
                }
            }
            else
            {
                if((uxTimeToWake < *puxPreviousWakeTime) ||
                   (uxTimeToWake > uxConstTickCount ))
                {
                    boShouldDelay = TRUE;
                }
            }
            *puxPreviousWakeTime = (OS_UBase_t) uxTimeToWake;

            if(FALSE != boShouldDelay)
            {
                OS_Task_TCB_t* pstCurrentTCB;
                OS_UBase_t uxListSize;

                pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                uxListSize = OS_List__uxRemove(&(pstCurrentTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority(pstCurrentTCB->uxPriorityTask);
                }
                OS_Task__vAddCurrentTaskToDelayedList(uxTimeToWake);
            }
        }
        boAlreadyYielded = OS_Task__boResumeAll();

        if( FALSE == boAlreadyYielded)
        {
            OS_Task__vYieldWithinAPI();
        }
    }
}

void OS_Task__vAddCurrentTaskToDelayedList(const OS_UBase_t uxTimeToWake)
{
    OS_Task_TCB_t* pstCurrentTCB;
    OS_UBase_t uxTickCount;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    OS_List__vSetItemValue(&(pstCurrentTCB->stGenericListItem), uxTimeToWake);

    uxTickCount = OS_Task__uxGetTickCount();
    if( uxTimeToWake < uxTickCount )
    {
        OS_List_t* pstOverflowDelayedTaskList;

        pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
        OS_List__vInsert(pstOverflowDelayedTaskList,
                         &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
        OS_List_t* pstDelayedTaskList;
        OS_UBase_t uxNextTaskUnblockTime;

        pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
        OS_List__vInsert(pstDelayedTaskList,
                         &(pstCurrentTCB->stGenericListItem));

        uxNextTaskUnblockTime = OS_Task__uxGetNextTaskUnblockTime();
        if( uxTimeToWake < uxNextTaskUnblockTime )
        {
            OS_Task__vSetNextTaskUnblockTime(uxTimeToWake);
        }
    }
}
