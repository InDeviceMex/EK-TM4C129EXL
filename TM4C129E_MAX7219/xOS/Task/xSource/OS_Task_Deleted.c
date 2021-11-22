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

void OS_Task__vDelete(OS_Task_Handle_t pvTaskToDelete)
{
    OS_List_t* pstTasksWaitingTermination = (OS_List_t*) 0UL;
    OS_List_t* pstTCBOwnerList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t *) 0UL;
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t *) 0UL ;
    OS_UBase_t uxSchedulerSuspended = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boSchedulerRunning = FALSE;

    OS_Task__vEnterCritical();
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToDelete);
        uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
        if( 0UL == uxListSize )
        {
            OS_Task__vResetReadyPriority( pstTCB->uxPriorityTask );
        }

        pstTCBOwnerList = (OS_List_t*) OS_List__pvItemContainer(&( pstTCB->stEventListItem));
        if( 0UL != (OS_UBase_t) pstTCBOwnerList)
        {
            (void) OS_List__uxRemove(&( pstTCB->stEventListItem));
        }
        pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
        OS_List__vInsertEnd(pstTasksWaitingTermination,
                            &(pstTCB->stGenericListItem));

        OS_Task__vIncreaseTasksDeleted();
        OS_Task__vIncreaseTaskNumber();
    }
    OS_Task__vExitCritical();

    boSchedulerRunning = OS_Task__boGetSchedulerRunning();
    if(FALSE != boSchedulerRunning)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB == pstCurrentTCB )
        {
            uxSchedulerSuspended = OS_Task__uxGetSchedulerSuspended();
            if(0UL == uxSchedulerSuspended)
            {
                OS_Task__vYieldWithinAPI();
            }
        }
        else
        {
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
    OS_List_t* pstTasksWaitingTermination = (OS_List_t*) 0UL;
    OS_UBase_t uxTasksDeleted = 0UL;
    OS_Boolean_t boListIsEmpty = FALSE;

    uxTasksDeleted = OS_Task__uxGetTasksDeleted();
    while(0UL < uxTasksDeleted)
    {
        pstTasksWaitingTermination = OS_Task__pstGetTasksWaitingTermination();
        OS_Task__vSuspendAll();
        {
            boListIsEmpty = OS_List__boIsEmpty(pstTasksWaitingTermination);
        }
        (void) OS_Task__boResumeAll();

        if(FALSE == boListIsEmpty)
        {
            OS_Task_TCB_t* pstTCB = (OS_Task_TCB_t*) 0UL;
            OS_Task__vEnterCritical();
            {
                pstTCB = (OS_Task_TCB_t *) OS_List__pvGetOwnerOfHeadEntry(pstTasksWaitingTermination);
                (void) OS_List__uxRemove(&(pstTCB->stGenericListItem));
                OS_Task__vDecreaseCurrentNumberOfTasks();
                OS_Task__vDecreaseTasksDeleted();
            }
            OS_Task__vExitCritical();
            OS_Task__vDeleteTCB(pstTCB);
        }
    }
}
