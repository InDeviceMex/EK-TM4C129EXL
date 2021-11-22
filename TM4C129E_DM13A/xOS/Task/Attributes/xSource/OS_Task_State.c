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

OS_Task_eState OS_Task__enGetState(OS_Task_Handle_t pvTask)
{
    OS_List_t* pstStateList = (OS_List_t*) 0UL;
    OS_List_t* pstStateSuspendedList = (OS_List_t*) 0UL;
    OS_List_t* pstDelayedTaskList = (OS_List_t*) 0UL;
    OS_List_t* pstOverflowDelayedTaskList = (OS_List_t*) 0UL;
    OS_List_t* pstSuspendedTaskList = (OS_List_t*) 0UL;
    OS_List_t* pstTasksWaitingTermination = (OS_List_t*) 0UL;
    OS_Task_TCB_t* pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    const OS_Task_TCB_t* const pstTCB = (OS_Task_TCB_t*) pvTask;
    OS_Task_eState enReturn = OS_Task_enState_Undef;

    if(0UL != (OS_UBase_t) pstTCB)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB == pstCurrentTCB )
        {
            enReturn = OS_Task_enState_Running;
        }
        else
        {
            OS_Task__vEnterCritical();
            {
                pstStateList = (OS_List_t*) OS_List__pvItemContainer(&(pstTCB->stGenericListItem));
            }
            OS_Task__vExitCritical();

            pstDelayedTaskList = OS_Task__pstGetDelayedTaskList();
            pstOverflowDelayedTaskList = OS_Task__pstGetOverflowDelayedTaskList();
            pstSuspendedTaskList = OS_Task__pstGetSuspendedTaskList();
            pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
            if((pstStateList == pstDelayedTaskList) ||
               (pstStateList == pstOverflowDelayedTaskList))
            {
                enReturn = OS_Task_enState_Blocked;
            }
            else if( pstStateList == pstSuspendedTaskList )
            {
                pstStateSuspendedList = (OS_List_t*) OS_List__pvItemContainer(&(pstTCB->stEventListItem));
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
                enReturn = OS_Task_enState_Deleted;
            }
            else
            {
                enReturn = OS_Task_enState_Ready;
            }
        }
    }
    return (enReturn);
}
