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

#include <xOS/Task/xHeader/OS_Task_Defines.h>
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

static void OS_Task__vResetNextTaskUnblockTime(void);

static OS_Task_List_Typedef* volatile OS_Task_pstDelayedTaskList;             /*< Points to the delayed task list currently being used. */
static OS_Task_List_Typedef* volatile OS_Task_pstOverflowDelayedTaskList;     /*< Points to the delayed task list currently being used to hold tasks that have overflowed the current tick count. */

static OS_Task_List_Typedef OS_Task_stDelayedTaskList1;                        /*< Delayed tasks. */
static OS_Task_List_Typedef OS_Task_stDelayedTaskList2;                        /*< Delayed tasks (two lists are used - one for delays that have overflowed the current tick count. */

static volatile int32_t OS_Task_s32NumOfOverflows =  0;
static volatile uint32_t OS_Task_u32NextTaskUnblockTime = 0UL; /* Initialised to portMAX_DELAY before the scheduler starts. */

void OS_Task__vAddCurrentTaskToDelayedList(const uint32_t u32TimeToWake)
{
    OS_TASK_TCB* pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32TickCount = 0UL;

    /* The list item will be inserted in wake time order. */
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    CDLinkedList_Item__vSetValue(&(pstCurrentTCB->stGenericListItem), u32TimeToWake);

    u32TickCount = OS_Task__u32GetTickCount();
    if( u32TimeToWake < u32TickCount )
    {
        /* Wake time has overflowed.  Place this item in the overflow list. */
        CDLinkedList__enInsertInDescendingOrderByValue(OS_Task_pstOverflowDelayedTaskList, &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
        /* The wake time has not overflowed, so the current block list is used. */
        CDLinkedList__enInsertInDescendingOrderByValue(OS_Task_pstDelayedTaskList, &(pstCurrentTCB->stGenericListItem));

        /* If the task entering the blocked state was placed at the head of the
        list of blocked tasks then OS_Task_u32NextTaskUnblockTime needs to be updated
        too. */
        if( u32TimeToWake < OS_Task_u32NextTaskUnblockTime )
        {
            OS_Task_u32NextTaskUnblockTime = u32TimeToWake;
        }
    }
}


void OS_Task__vSwitchDelayedLists(void)
{
    CDLinkedList_nSTATUS enIsEmptyList = CDLinkedList_enSTATUS_OK;
    OS_Task_List_Typedef *pstTempList = (OS_Task_List_Typedef*) 0UL;

    /* The delayed tasks list should be empty when the lists are switched. */
    enIsEmptyList = CDLinkedList__enIsEmpty(OS_Task_pstDelayedTaskList);
    if(CDLinkedList_enSTATUS_OK == enIsEmptyList)
    {
        pstTempList = OS_Task_pstDelayedTaskList;
        OS_Task_pstDelayedTaskList = OS_Task_pstOverflowDelayedTaskList;
        OS_Task_pstOverflowDelayedTaskList = pstTempList;
        OS_Task_s32NumOfOverflows++;
        OS_Task__vResetNextTaskUnblockTime();
    }
}

OS_Task_List_Typedef* OS_Task__pstGetDelayedTaskListPointer(void)
{
    return (OS_Task_pstDelayedTaskList);
}

uint32_t OS_Task__u32GetNextTaskUnblockTime(void)
{
    return (OS_Task_u32NextTaskUnblockTime);
}


void OS_Task__vSetNextTaskUnblockTime(uint32_t u32ValueArg)
{
    OS_Task_u32NextTaskUnblockTime = u32ValueArg;
}

static void OS_Task__vResetNextTaskUnblockTime(void)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_OK;
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_ListItem_TypeDef* pstGenericListReg = (OS_Task_ListItem_TypeDef*) 0UL;

    enStatus = CDLinkedList__enIsEmpty(OS_Task_pstDelayedTaskList);
    if(CDLinkedList_enSTATUS_OK == enStatus)
    {
        /* The new current delayed list is empty.  Set OS_Task_u32NextTaskUnblockTime to
        the maximum possible value so it is extremely unlikely that the
        if( u32TickCount >= OS_Task_u32NextTaskUnblockTime ) test will pass until
        there is an item in the delayed list. */
        OS_Task_u32NextTaskUnblockTime = OS_ADAPT_MAX_DELAY;
    }
    else
    {
        /* The new current delayed list is not empty, get the value of
        the item at the head of the delayed list.  This is the time at
        which the task at the head of the delayed list should be removed
        from the Blocked state. */
        pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(OS_Task_pstDelayedTaskList);
        pstGenericListReg = &(pstTCB->stGenericListItem);
        OS_Task_u32NextTaskUnblockTime = CDLinkedList_Item__u32GetValue(pstGenericListReg);
    }
}


void OS_Task__vInitialiseDelayedTaskLists(void)
{
    CDLinkedList__enInit( &OS_Task_stDelayedTaskList1, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    CDLinkedList__enInit( &OS_Task_stDelayedTaskList2, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);

    OS_Task_pstDelayedTaskList = &OS_Task_stDelayedTaskList1;
    OS_Task_pstOverflowDelayedTaskList = &OS_Task_stDelayedTaskList2;
}
