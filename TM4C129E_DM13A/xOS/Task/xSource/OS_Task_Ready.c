/**
 *
 * @file OS_Task_Ready.c
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
#include <xOS/Task/xHeader/OS_Task_Ready.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

void OS_Task__vSelectHighestPriorityTask(void)
{
    OS_List_t* pstReadyTask =  (OS_List_t*) 0UL;
    OS_Task_TCB_t* pstNewTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxTopPriority = 0UL;
    OS_UBase_t uxListLenght = 0UL;

    uxTopPriority = OS_Task__uxGetHighestPriority();
    pstReadyTask = OS_Task__pstGetReadyTasksLists(uxTopPriority);
    if(0UL != (OS_UBase_t) pstReadyTask)
    {
        uxListLenght = OS_List__uxGetLength(pstReadyTask);
        if(0UL != uxListLenght)
        {
            pstNewTCB = (OS_Task_TCB_t*) OS_List__pvGetOwnerOfNextEntry(pstReadyTask);
            OS_Task__vSetCurrentTCB(pstNewTCB);
        }
    }
}

void OS_Task__vResetReadyPriority(OS_UBase_t uxPrioritArg)
{
    OS_List_t* pstReadyTask =  (OS_List_t*) 0UL;
    OS_UBase_t uxListLenght = 0UL;

    pstReadyTask = OS_Task__pstGetReadyTasksLists(uxPrioritArg);
    if(0UL != (OS_UBase_t) pstReadyTask)
    {
        uxListLenght = OS_List__uxGetLength(pstReadyTask);
        if(0UL == uxListLenght)
        {
            OS_Task__vAdaptResetReadyPriority(uxPrioritArg);
        }
    }
}


void OS_Task__vAddTaskToReadyList(OS_Task_TCB_t* pstTCBArg)
{
    OS_List_t* pstReadyTaskList =  (OS_List_t*) 0UL;
    OS_ListItem_t* pstTCBTask =  (OS_ListItem_t*) 0UL;
    OS_UBase_t uxTCBPriority = 0UL;

    if(0UL != (OS_UBase_t) pstTCBArg)
    {
        uxTCBPriority = pstTCBArg->uxPriorityTask;
        OS_Task__vRecordReadyPriority(uxTCBPriority);
        pstReadyTaskList = OS_Task__pstGetReadyTasksLists(uxTCBPriority);
        if(0UL != (OS_UBase_t) pstReadyTaskList)
        {
            pstTCBTask = &(pstTCBArg->stGenericListItem);
            OS_List__vInsertEnd(pstReadyTaskList, pstTCBTask);
        }
    }
}
