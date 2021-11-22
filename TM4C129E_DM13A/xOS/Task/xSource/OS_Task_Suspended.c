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
    OS_List_t* pstPendingReadyList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxPendedTicks = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_Boolean_t boYieldPending = FALSE;
    OS_Boolean_t boAlreadyYielded = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;

    uxSchedulerSuspended =  OS_Task__uxGetSchedulerSuspended();
    if(0UL != uxSchedulerSuspended )
    {
        OS_Task__vEnterCritical();
        {
            --uxSchedulerSuspended;
            OS_Task__vSetSchedulerSuspended(uxSchedulerSuspended);

            if(0UL == uxSchedulerSuspended)
            {
                uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
                if(0UL <  uxCurrentNumberOfTasks)
                {
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    while(FALSE == boIsListEmpty)
                    {
                        pstTCB = (OS_Task_TCB_t *) OS_List__pvGetOwnerOfHeadEntry(pstPendingReadyList);

                        (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
                        (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                        {
                            OS_Task__vSetYieldPending(TRUE);
                        }

                        boIsListEmpty = OS_List__boIsEmpty(pstPendingReadyList);
                    }

                    uxPendedTicks = OS_Task__uxGetPendedTicks();
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
                    boYieldPending = OS_Task__boGetYieldPending();
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
    OS_List_t* pstSuspendedTaskList = (OS_List_t*) 0UL;
    OS_List_t* pstList = (OS_List_t*) 0UL;
    OS_Task_TCB_t * pstCurrentTCB = (OS_Task_TCB_t *) 0UL;
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t *) 0UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boSchedulerRunning = FALSE;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
    OS_Task__vEnterCritical();
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSuspend);
        uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
        if(0UL == uxListSize)
        {
            OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
        }

        pstList = (OS_List_t*) OS_List__pvItemContainer(&(pstTCB->stEventListItem));
        if( 0UL != (OS_UBase_t) pstList )
        {
            (void) OS_List__uxRemove(&(pstTCB->stEventListItem));
        }
        OS_List__vInsertEnd(pstSuspendedTaskList, &(pstTCB->stGenericListItem));
    }
    OS_Task__vExitCritical();

    boSchedulerRunning =  OS_Task__boGetSchedulerRunning();
    if( pstTCB == pstCurrentTCB )
    {
        if(FALSE != boSchedulerRunning)
        {
            uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
            if(0UL == uxSchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
            uxListSize = OS_List__uxGetLength(pstSuspendedTaskList);
            uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
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
    OS_Task_TCB_t * pstCurrentTCB = (OS_Task_TCB_t *) 0UL;
    OS_Task_TCB_t * const pstTCB = ( OS_Task_TCB_t * ) pvTaskToResume;
    OS_Boolean_t boStatus = FALSE;

    if(0UL != (OS_UBase_t) pvTaskToResume)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if((0UL != (OS_UBase_t) pstTCB) &&
           ((OS_UBase_t) pstTCB != (OS_UBase_t) pstCurrentTCB))
        {
            OS_Task__vEnterCritical();
            {
                boStatus = OS_Task__boIsTaskSuspended(pstTCB);
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
    OS_List_t* pstPendingReadyList = (OS_List_t*) 0UL;
    OS_Task_TCB_t * pstCurrentTCB = (OS_Task_TCB_t *) 0UL;
    OS_Task_TCB_t * const pstTCB = ( OS_Task_TCB_t * ) pvTaskToResume;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_Boolean_t boYieldRequired = FALSE;
    OS_Boolean_t boStatus = FALSE;

    if(0UL != (OS_UBase_t) pvTaskToResume)
    {
        uxSavedInterruptStatus = OS_Task__uxSetInterruptMaskFromISR();
        {
            boStatus = OS_Task__boIsTaskSuspended(pstTCB);
            if(FALSE != boStatus)
            {
                uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
                if(0UL == uxSchedulerSuspended)
                {
                    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                    if( pstTCB->uxPriorityTask >= pstCurrentTCB->uxPriorityTask )
                    {
                        boYieldRequired = TRUE;
                    }

                    (void) OS_List__uxRemove(&( pstTCB->stGenericListItem));
                    OS_Task__vAddTaskToReadyList(pstTCB);
                }
                else
                {
                    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
                    OS_List__vInsertEnd(pstPendingReadyList, &(pstTCB->stEventListItem));
                }
            }
        }
        OS_Task__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
    }

    return (boYieldRequired);
}

OS_Task_eSleepModeStatus OS_Task__enConfirmSleepModeStatus(void)
{
    OS_List_t* pstPendingReadyList = (OS_List_t*) 0UL;
    OS_List_t* pstSuspendedTaskList = (OS_List_t*) 0UL;
    const OS_UBase_t uxNonApplicationTasks = 1UL;
    OS_UBase_t uxCurrentNumberOfTasks = 0UL;
    OS_UBase_t uxListLength = 0UL;
    OS_Task_eSleepModeStatus enReturn = OS_Task_enSleepModeStatus_StandardSleep;
    OS_Boolean_t boYieldPending = FALSE;

    pstPendingReadyList = OS_Task__pstGetPendingReadyList();
    uxListLength = OS_List__uxGetLength(pstPendingReadyList);
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
        pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
        uxListLength = OS_List__uxGetLength(pstSuspendedTaskList);
        uxCurrentNumberOfTasks = OS_Task__uxGetCurrentNumberOfTasks();
        uxCurrentNumberOfTasks -= uxNonApplicationTasks;
        if(uxListLength == uxCurrentNumberOfTasks)
        {
            enReturn = OS_Task_enSleepModeStatus_NoTasksWaitingTimeout;
        }
    }

    return (enReturn);
}
