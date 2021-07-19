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

#include <xOS/Task/xHeader/OS_Task_Priority.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

static OS_Task_List_Typedef pstReadyTasksLists[OS_TASK_MAX_PRIORITIES];/*< Prioritised ready tasks. */


OS_Task_List_Typedef* OS_Task__pstGetReadyTasksLists(uint32_t u32Index)
{
    OS_Task_List_Typedef* pstReadyTaskReg = (OS_Task_List_Typedef*) 0UL;
    if(OS_TASK_MAX_PRIORITIES > u32Index)
    {
        pstReadyTaskReg = &pstReadyTasksLists[u32Index];
    }

    return (pstReadyTaskReg);
}

void OS_Task__vSelectHighestPriorityTask(void)
{
    uint32_t u32TopPriority = 0UL;
    OS_Task_List_Typedef* pstReadyTask =  (OS_Task_List_Typedef*) 0UL;
    OS_TASK_TCB* pstNewTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32ListLenght = 0UL;
    u32TopPriority = OS_Task__u32GetHighestPriority();
    pstReadyTask = OS_Task__pstGetReadyTasksLists(u32TopPriority);
    if(0UL != (uint32_t) pstReadyTask)
    {
        u32ListLenght = CDLinkedList__u32GetSize(pstReadyTask);
        if(0UL != u32ListLenght)
        {
            pstNewTCB = (OS_TASK_TCB*) CDLinkedList__pvGetDataNextItem(pstReadyTask);
            OS_Task__vSetCurrentTCB(pstNewTCB);
        }
    }
}

void OS_Task__vResetReadyPriority(uint32_t u32PrioritArg)
{
    OS_Task_List_Typedef* pstReadyTask =  (OS_Task_List_Typedef*) 0UL;
    uint32_t u32ListLenght = 0UL;
    pstReadyTask = OS_Task__pstGetReadyTasksLists(u32PrioritArg);
    if(0UL != (uint32_t) pstReadyTask)
    {
        u32ListLenght = CDLinkedList__u32GetSize(pstReadyTask);
        if(0UL == u32ListLenght)
        {
            OS_Task__vClearReadyPriority(u32PrioritArg);
        }
    }
}


void OS_Task__vAddTaskToReadyList(OS_TASK_TCB* pstTCBArg)
{
    OS_Task_List_Typedef* pstReadyTaskList =  (OS_Task_List_Typedef*) 0UL;
    OS_Task_ListItem_TypeDef* pstTCBTask =  (OS_Task_ListItem_TypeDef*) 0UL;
    uint32_t u32TCBPriority = 0UL;
    if(0UL != (uint32_t) pstTCBArg)
    {
        u32TCBPriority = pstTCBArg->u32PriorityTask;
        OS_Task__vRecordReadyPriority(u32TCBPriority);
        pstReadyTaskList = OS_Task__pstGetReadyTasksLists(u32TCBPriority);
        if(0UL != (uint32_t) pstReadyTaskList)
        {
            pstTCBTask = &(pstTCBArg->stGenericListItem);
            CDLinkedList__enInsertPreviousLastItemRead(pstReadyTaskList, pstTCBTask);
        }
    }
}


void OS_Task__vInitialiseReadyTaskLists(void)
{
    uint32_t u32PriorityReg = 0UL;

    for( u32PriorityReg = ( uint32_t ) 0U; u32PriorityReg < ( uint32_t ) OS_TASK_MAX_PRIORITIES; u32PriorityReg++ )
    {
        CDLinkedList__enInit( &(pstReadyTasksLists[u32PriorityReg]), (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    }
}



