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

static OS_Task_List_Typedef* volatile pstDelayedTaskList;             /*< Points to the delayed task list currently being used. */
static OS_Task_List_Typedef* volatile pstOverflowDelayedTaskList;     /*< Points to the delayed task list currently being used to hold tasks that have overflowed the current tick count. */

static OS_Task_List_Typedef stDelayedTaskList1;                        /*< Delayed tasks. */
static OS_Task_List_Typedef stDelayedTaskList2;                        /*< Delayed tasks (two lists are used - one for delays that have overflowed the current tick count. */

static volatile int32_t s32NumOfOverflows =  0;
static volatile uint32_t u32NextTaskUnblockTime = 0UL; /* Initialised to portMAX_DELAY before the scheduler starts. */

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
        CDLinkedList__enInsertInDescendingOrderByValue(pstOverflowDelayedTaskList, &(pstCurrentTCB->stGenericListItem));
    }
    else
    {
        /* The wake time has not overflowed, so the current block list is used. */
        CDLinkedList__enInsertInDescendingOrderByValue(pstDelayedTaskList, &(pstCurrentTCB->stGenericListItem));

        /* If the task entering the blocked state was placed at the head of the
        list of blocked tasks then u32NextTaskUnblockTime needs to be updated
        too. */
        if( u32TimeToWake < u32NextTaskUnblockTime )
        {
            u32NextTaskUnblockTime = u32TimeToWake;
        }
    }
}


void OS_Task__vSwitchDelayedLists(void)
{
    CDLinkedList_nSTATUS enIsEmptyList = CDLinkedList_enSTATUS_OK;
    OS_Task_List_Typedef *pstTempList = (OS_Task_List_Typedef*) 0UL;

    /* The delayed tasks list should be empty when the lists are switched. */
    enIsEmptyList = CDLinkedList__enIsEmpty(pstDelayedTaskList);
    if(CDLinkedList_enSTATUS_OK == enIsEmptyList)
    {
        pstTempList = pstDelayedTaskList;
        pstDelayedTaskList = pstOverflowDelayedTaskList;
        pstOverflowDelayedTaskList = pstTempList;
        s32NumOfOverflows++;
        OS_Task__vResetNextTaskUnblockTime();
    }
}

OS_Task_List_Typedef* OS_Task__pstGetDelayedTaskListPointer(void)
{
    return (pstDelayedTaskList);
}

uint32_t OS_Task__u32GetNextTaskUnblockTime(void)
{
    return (u32NextTaskUnblockTime);
}


void OS_Task__vSetNextTaskUnblockTime(uint32_t u32ValueArg)
{
    u32NextTaskUnblockTime = u32ValueArg;
}

static void OS_Task__vResetNextTaskUnblockTime(void)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_OK;
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    OS_Task_ListItem_TypeDef* pstGenericListReg = (OS_Task_ListItem_TypeDef*) 0UL;

    enStatus = CDLinkedList__enIsEmpty(pstDelayedTaskList);
    if(CDLinkedList_enSTATUS_OK == enStatus)
    {
        /* The new current delayed list is empty.  Set u32NextTaskUnblockTime to
        the maximum possible value so it is extremely unlikely that the
        if( u32TickCount >= u32NextTaskUnblockTime ) test will pass until
        there is an item in the delayed list. */
        u32NextTaskUnblockTime = OS_ADAPT_MAX_DELAY;
    }
    else
    {
        /* The new current delayed list is not empty, get the value of
        the item at the head of the delayed list.  This is the time at
        which the task at the head of the delayed list should be removed
        from the Blocked state. */
        pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(pstDelayedTaskList);
        pstGenericListReg = &(pstTCB->stGenericListItem);
        u32NextTaskUnblockTime = CDLinkedList_Item__u32GetValue(pstGenericListReg);
    }
}


void OS_Task__vInitialiseDelayedTaskLists(void)
{
    CDLinkedList__enInit( &stDelayedTaskList1, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    CDLinkedList__enInit( &stDelayedTaskList2, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);

    pstDelayedTaskList = &stDelayedTaskList1;
    pstOverflowDelayedTaskList = &stDelayedTaskList2;
}
