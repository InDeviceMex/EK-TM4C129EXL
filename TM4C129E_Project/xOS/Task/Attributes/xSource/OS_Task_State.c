/**
 *
 * @file OS_Task_State.c
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
 * @verbatim 23 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Attributes/xHeader/OS_Task_State.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>
#include <xOS/Task/xHeader/OS_Task_Delayed.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

OS_Task_eState OS_Task__enGetState(OS_Task_Handle_TypeDef pvTask)
{
    OS_Task_eState enReturn = OS_Task_enState_Undef;
    OS_Task_List_Typedef* pstStateList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstStateSuspendedList = (OS_Task_List_Typedef*) 0UL;
    const OS_TASK_TCB* const pstTCB = (OS_TASK_TCB*) pvTask;
    OS_TASK_TCB* pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_List_Typedef* pstDelayedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstOverflowDelayedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstSuspendedTaskList = (OS_Task_List_Typedef*) 0UL;
    OS_Task_List_Typedef* pstTasksWaitingTermination = (OS_Task_List_Typedef*) 0UL;

    if(0UL != (uint32_t) pstTCB)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB == pstCurrentTCB )
        {
            /* The task calling this function is querying its own state. */
            enReturn = OS_Task_enState_Running;
        }
        else
        {
            OS_Task__vEnterCritical();
            {
                pstStateList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList(&(pstTCB->stGenericListItem));
            }
            OS_Task__vExitCritical();

            pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
            pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
            pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
            pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
            if(( pstStateList == pstDelayedTaskList) || (pstStateList == pstOverflowDelayedTaskList))
            {
                /* The task being queried is referenced from one of the Blocked
                lists. */
                enReturn = OS_Task_enState_Blocked;
            }
            else if( pstStateList == pstSuspendedTaskList )
            {
                /* The task being queried is referenced from the suspended
                list.  Is it genuinely suspended or is it block
                indefinitely? */
                pstStateSuspendedList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList(&(pstTCB->stEventListItem));
                if(0UL == (uint32_t) pstStateSuspendedList)
                {
                    enReturn = OS_Task_enState_Suspended;
                }
                else
                {
                    enReturn = OS_Task_enState_Blocked;
                }
            }
            else if( pstStateList == pstTasksWaitingTermination )
            {
                /* The task being queried is referenced from the deleted
                tasks list. */
                enReturn = OS_Task_enState_Deleted;
            }

            else /*lint !e525 Negative indentation is intended to make use of pre-processor clearer. */
            {
                /* If the task is not in any other state, it must be in the
                Ready (including pending ready) state. */
                enReturn = OS_Task_enState_Ready;
            }
        }
    }
    return enReturn;
}



