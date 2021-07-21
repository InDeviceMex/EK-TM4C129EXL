/**
 *
 * @file OS_Task_Deleted.c
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
#include <xOS/Task/xHeader/OS_Task_Deleted.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

void OS_Task__vDelete(OS_Task_Handle_TypeDef pvTaskToDelete)
{
    OS_TASK_TCB * pstCurrentTCB = (OS_TASK_TCB *) 0UL;
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB *) 0UL ;
    OS_Task_List_Typedef* pstTCBOwnerList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListSize = 0UL;
    OS_Task_List_Typedef* pstTasksWaitingTermination = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32SchedulerRunning = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;

    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the calling task that is
        being deleted. */
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToDelete);

        /* Remove task from the ready list and place in the termination list.
        This will stop the task from be scheduled.  The idle task will check
        the termination list and free up any memory allocated by the
        scheduler for the TCB and stack. */
        pstReadyList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstTCB->stGenericListItem));
        CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));
        u32ListSize == CDLinkedList__u32GetSize(pstReadyList);
        if( 0UL == u32ListSize )
        {
            OS_Task__vResetReadyPriority( pstTCB->u32PriorityTask );
        }

        /* Is the task waiting on an event also? */
        pstTCBOwnerList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &( pstTCB->stEventListItem));
        if( 0UL != pstTCBOwnerList)
        {
            CDLinkedList__enRemove(&( pstTCB->stEventListItem ));
        }
        pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
        CDLinkedList__enInsertPreviousLastItemRead( pstTasksWaitingTermination, &(pstTCB->stGenericListItem));

        /* Increment the ucTasksDeleted variable so the idle task knows
        there is a task that has been deleted and that it should therefore
        check the xTasksWaitingTermination list. */
        OS_Task__vIncreaseTasksDeleted();

        /* Increment the uxTaskNumberVariable also so kernel aware debuggers
        can detect that the task lists need re-generating. */
        OS_Task__vIncreaseTaskNumber();
    }
    OS_Task__vExitCritical();

    /* Force a reschedule if it is the currently running task that has just
    been deleted. */
    u32SchedulerRunning = OS_Task__u32GetSchedulerRunning();
    if( 0UL != u32SchedulerRunning)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB == pstCurrentTCB )
        {
            u32SchedulerSuspended = OS_Task__u32GetSchedulerSuspended();
            if(0UL == u32SchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
            /* Reset the next expected unblock time in case it referred to
            the task that has just been deleted. */
            OS_Task__vEnterCritical();
            {
                OS_Task__vResetNextTaskUnblockTime();
            }
            OS_Task__vExitCritical();
        }
    }
}


void OS_Task__vCheckTasksWaitingTermination(void)
{
    CDLinkedList_nSTATUS enListIsEmpty = CDLinkedList_enSTATUS_OK;
    uint32_t u32TasksDeleted = 0UL;
    OS_Task_List_Typedef* pstTasksWaitingTermination = (OS_Task_List_Typedef*) 0UL;

    /* ucTasksDeleted is used to prevent vTaskSuspendAll() being called
    too often in the idle task. */
    u32TasksDeleted = OS_Task__u32GetTasksDeleted();
    while(0UL < u32TasksDeleted)
    {
        pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
        OS_Task__vSuspendAll();
        {
            enListIsEmpty = CDLinkedList__enIsEmpty(pstTasksWaitingTermination);
        }
        (void) OS_Task__u32ResumeAll();

        if(CDLinkedList_enSTATUS_OK != enListIsEmpty)
        {
            OS_TASK_TCB* pstTCB = (OS_TASK_TCB*) 0UL;

            OS_Task__vEnterCritical();
            {
                pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(pstTasksWaitingTermination);
                (void) CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                OS_Task__vDecreaseCurrentNumberOfTasks();
                OS_Task__vDecreaseTasksDeleted();
            }
            OS_Task__vExitCritical();
            OS_Task__vDeleteTCB(pstTCB);
        }
    }
}

