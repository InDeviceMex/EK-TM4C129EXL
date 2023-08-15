/**
 *
 * @file OS_Task_Suspended.c
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
#include <xOS/Task/xHeader/OS_Task_Suspended.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

void OS_Task__vSuspendAll(void)
{
    OS_Task__vIncreaseSchedulerSuspended();
}

OS_Boolean_t OS_Task__boResumeAll(void)
{
    OS_UBase_t uxSchedulerSuspended;
    OS_Boolean_t boAlreadyYielded;

    boAlreadyYielded = FALSE;
    uxSchedulerSuspended =  OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended )
    {
        OS_Task__vEnterCritical();
        {
            --uxSchedulerSuspended;
            OS_Task__vSetSchedulerSuspended(uxSchedulerSuspended);

            if(0UL == uxSchedulerSuspended)
            {
                OS_UBase_t uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
                if(0UL <  uxCurrentNumberOfTasks)
                {

                    OS_List_t* pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    OS_Boolean_t boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    while(FALSE == boIsListEmpty)
                    {
                        OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t *) OS_List__pvGetOwnerOfHeadEntry(pstPendingReadyList);

                        (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        OS_Task_TCB_t *pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                        {
                            OS_Task__vSetYieldPending(TRUE);
                        }

                        boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    }

                    OS_UBase_t uxPendedTicks = OS_Task__uxGetPendedTicks();
                    if(0UL < uxPendedTicks)
                    {
                        while( 0UL < uxPendedTicks)
                        {
                            if(FALSE != OS_Task__boIncrementTick())
                            {
                                OS_Task__vSetYieldPending(TRUE);
                            }
                            --uxPendedTicks;
                            OS_Task__vSetPendedTicks(uxPendedTicks);
                        }
                    }
                    OS_Boolean_t boYieldPending = OS_Task__boGetYieldPending();
                    if(TRUE == boYieldPending)
                    {
                        boAlreadyYielded = TRUE;
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
        OS_Task__vExitCritical();
    }
    return (boAlreadyYielded);
}


void OS_Task__vSuspend(OS_Task_Handle_t pvTaskToSuspend)
{
    OS_Task_TCB_t * pstCurrentTCB;
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    OS_List_t* pstSuspendedTaskList;
    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
    OS_Task_TCB_t *pstTCB;
    OS_Task__vEnterCritical();
    {

        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSuspend);
        OS_UBase_t uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
        if(0UL == uxListSize)
        {
            OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
        }

        OS_List_t* pstList = (OS_List_t*) OS_List__pvGetItemContainer(&(pstTCB->stEventListItem));
        if( 0UL != (OS_Pointer_t) pstList )
        {
            (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
        }
        OS_List__vInsertEnd(pstSuspendedTaskList, &(pstTCB->stGenericListItem));
    }
    OS_Task__vExitCritical();

    OS_Boolean_t boSchedulerRunning =  OS_Task__boGetSchedulerRunning();
    if( pstTCB == pstCurrentTCB )
    {
        if(FALSE != boSchedulerRunning)
        {
            OS_UBase_t uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
            if(0UL == uxSchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
            OS_UBase_t uxListSize = OS_List__uxGetLength(pstSuspendedTaskList);
            OS_UBase_t uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
            if( uxListSize == uxCurrentNumberOfTasks )
            {
                pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
            }
            else
            {
                OS_Task__vSwitchContext();
            }
        }
    }
    else
    {
        if(FALSE != boSchedulerRunning)
        {
            OS_Task__vEnterCritical();
            {
                OS_Task__vResetNextTaskUnblockTime();
            }
            OS_Task__vExitCritical();
        }
    }
}

void OS_Task__vResume(OS_Task_Handle_t pvTaskToResume)
{
    OS_Task_TCB_t * const pstTCB = ( OS_Task_TCB_t * ) pvTaskToResume;

    if(0UL != (OS_Pointer_t) pvTaskToResume)
    {
        OS_Task_TCB_t * pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if((0UL != (OS_Pointer_t) pstTCB) &&
           ((OS_Pointer_t) pstTCB != (OS_Pointer_t) pstCurrentTCB))
        {
            OS_Task__vEnterCritical();
            {
                OS_Boolean_t boStatus = OS_Task__boIsTaskSuspended(pstTCB);
                if(FALSE != boStatus)
                {
                    (void) OS_List__uxRemove(&( pstTCB->stGenericListItem));
                    OS_Task__vAddTaskToReadyList(pstTCB);

                    if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                    {
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
            OS_Task__vExitCritical();
        }
    }
}

OS_Boolean_t OS_Task__boResumeFromISR(OS_Task_Handle_t pvTaskToResume)
{
    OS_Task_TCB_t * const pstTCB = ( OS_Task_TCB_t * ) pvTaskToResume;
    OS_Boolean_t boYieldRequired;

    boYieldRequired = FALSE;
    if(0UL != (OS_Pointer_t) pvTaskToResume)
    {
        OS_UBase_t uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            OS_Boolean_t boStatus = OS_Task__boIsTaskSuspended(pstTCB);
            if(FALSE != boStatus)
            {
                OS_UBase_t uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                if(0UL == uxSchedulerSuspended)
                {
                    OS_Task_TCB_t * pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                    {
                        boYieldRequired = TRUE;
                    }

                    (void) OS_List__uxRemove(&( pstTCB->stGenericListItem));
                    OS_Task__vAddTaskToReadyList(pstTCB);
                }
                else
                {
                    OS_List_t* pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    OS_List__vInsertEnd(pstPendingReadyList, &(pstTCB->stEventListItem));
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
    }

    return (boYieldRequired);
}

#define OS_TASK_NONAPPLICATIONTASKS (1UL)
OS_Task_eSleepModeStatus OS_Task__enConfirmSleepModeStatus(void)
{
    OS_Task_eSleepModeStatus enReturn;
    enReturn = OS_Task_enSleepModeStatus_StandardSleep;
    OS_List_t* pstPendingReadyList;
    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
    OS_UBase_t uxListLength;
    uxListLength = OS_List__uxGetLength(pstPendingReadyList);
    OS_Boolean_t boYieldPending;
    boYieldPending = OS_Task__boGetYieldPending();
    if(0UL != uxListLength)
    {
        enReturn = OS_Task_enSleepModeStatus_AbortSleep;
    }
    else if(FALSE != boYieldPending)
    {
        enReturn = OS_Task_enSleepModeStatus_AbortSleep;
    }
    else
    {
        OS_List_t* pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
        uxListLength = OS_List__uxGetLength(pstSuspendedTaskList);
        OS_UBase_t uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
        uxCurrentNumberOfTasks -= OS_TASK_NONAPPLICATIONTASKS;
        if(uxListLength == uxCurrentNumberOfTasks)
        {
            enReturn = OS_Task_enSleepModeStatus_NoTasksWaitingTimeout;
        }
    }

    return (enReturn);
}
