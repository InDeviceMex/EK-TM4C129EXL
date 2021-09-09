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
    OS_List_TypeDef* pstStateList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstStateSuspendedList = (OS_List_TypeDef*) 0UL;
    const OS_Task_TCB_TypeDef* const pstTCB = (OS_Task_TCB_TypeDef*) pvTask;
    OS_Task_TCB_TypeDef* pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_List_TypeDef* pstDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstOverflowDelayedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstSuspendedTaskList = (OS_List_TypeDef*) 0UL;
    OS_List_TypeDef* pstTasksWaitingTermination = (OS_List_TypeDef*) 0UL;
    OS_Task_eState enReturn = OS_Task_enState_Undef;

    if(0UL != (OS_UBase_t) pstTCB)
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
                pstStateList = (OS_List_TypeDef*) OS_List__pvItemContainer(&(pstTCB->stGenericListItem));
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
                pstStateSuspendedList = (OS_List_TypeDef*) OS_List__pvItemContainer(&(pstTCB->stEventListItem));
                if(0UL == (OS_UBase_t) pstStateSuspendedList)
                {
                    enReturn = OS_Task_enState_Suspended;
                }
                else
                {
                    enReturn = OS_Task_enState_Blocked;
                }
            }
            else if(pstStateList == pstTasksWaitingTermination)
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
    return (enReturn);
}



