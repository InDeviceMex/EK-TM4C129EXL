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
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boAlreadyYielded = FALSE;

    if(0UL < uxTicksToDelay)
    {
        uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
        if(0UL == uxSchedulerSuspended)
        {
            OS_Task__vSuspendAll();
            {
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
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxTimeToWake = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boAlreadyYielded = FALSE;
    OS_Boolean_t boShouldDelay = FALSE;

    uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
    if((0UL != (OS_UBase_t) puxPreviousWakeTime) &&
       (0UL < uxTimeIncrement) &&
       (0UL == uxSchedulerSuspended))
    {
        OS_Task__vSuspendAll();
        {
            uxTickCount = OS_Task__uxGetTickCount_NotSafe();
            const OS_UBase_t uxConstTickCount = uxTickCount;

            uxTimeToWake = *puxPreviousWakeTime;
            uxTimeToWake += uxTimeIncrement;

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
    OS_List_TypeDef* pstOverflowDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxTickCount = 0UL;
    OS_UBase_t uxNextTaskUnblockTime = 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    OS_List__vSetItemValue(&(pstCurrentTCB->stGenericListItem), uxTimeToWake);

    uxTickCount = OS_Task__uxGetTickCount();
    if( uxTimeToWake < uxTickCount )
    {
        pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
        OS_List__vInsert(pstOverflowDelayedTaskList,
                         &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
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
