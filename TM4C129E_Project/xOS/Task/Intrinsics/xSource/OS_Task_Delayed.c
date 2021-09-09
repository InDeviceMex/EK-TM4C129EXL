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
 * @verbatim 21 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Delayed.h>

static OS_List_TypeDef* volatile OS_Task_pstDelayedTaskList = (OS_List_TypeDef*) 0UL;
static OS_List_TypeDef* volatile OS_Task_pstOverflowDelayedTaskList = (OS_List_TypeDef*) 0UL;

static volatile OS_UBase_t OS_Task_uxNumOfOverflows =  0UL;
static volatile OS_UBase_t OS_Task_uxNextTaskUnblockTime = 0UL;

OS_List_TypeDef* OS_Task__pstGetOverflowDelayedTaskList(void)
{
    return (OS_Task_pstOverflowDelayedTaskList);
}

OS_List_TypeDef* OS_Task__pstGetDelayedTaskList(void)
{
    return (OS_Task_pstDelayedTaskList);
}

OS_UBase_t OS_Task__uxGetNextTaskUnblockTime(void)
{
    return (OS_Task_uxNextTaskUnblockTime);
}

void OS_Task__vSetNextTaskUnblockTime(OS_UBase_t uxValueArg)
{
    OS_Task_uxNextTaskUnblockTime = uxValueArg;
}

OS_UBase_t OS_Task__uxGetNumOfOverflows(void)
{
    return (OS_Task_uxNumOfOverflows);
}

void OS_Task__vSetNumOfOverflows(OS_UBase_t uxValueArg)
{
    OS_Task_uxNumOfOverflows = uxValueArg;
}

void OS_Task__vResetNextTaskUnblockTime(void)
{
    OS_Boolean_t boStatus = FALSE;
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_ListItem_TypeDef* pstGenericListReg = (OS_ListItem_TypeDef*) 0UL;

    boStatus = OS_List__boIsEmpty(OS_Task_pstDelayedTaskList);
    if(FALSE != boStatus)
    {
        /* The new current delayed list is empty.  Set OS_Task_uxNextTaskUnblockTime to
        the maximum possible value so it is extremely unlikely that the
        if( uxTickCount >= OS_Task_uxNextTaskUnblockTime ) test will pass until
        there is an item in the delayed list. */
        OS_Task_uxNextTaskUnblockTime = OS_ADAPT_MAX_DELAY;
    }
    else
    {
        /* The new current delayed list is not empty, get the value of
        the item at the head of the delayed list.  This is the time at
        which the task at the head of the delayed list should be removed
        from the Blocked state. */
        pstTCB = (OS_Task_TCB_TypeDef *) OS_List__pvGetOwnerOfHeadEntry(OS_Task_pstDelayedTaskList);
        pstGenericListReg = &(pstTCB->stGenericListItem);
        OS_Task_uxNextTaskUnblockTime = OS_List__uxGetItemValue(pstGenericListReg);
    }
}


void OS_Task__vSwitchDelayedLists(void)
{
    OS_Boolean_t boIsEmptyList = FALSE;
    OS_List_TypeDef *pstTempList = (OS_List_TypeDef*) 0UL;

    /* The delayed tasks list should be empty when the lists are switched. */
    boIsEmptyList = OS_List__boIsEmpty(OS_Task_pstDelayedTaskList);
    if(FALSE != boIsEmptyList)
    {
        pstTempList = OS_Task_pstDelayedTaskList;
        OS_Task_pstDelayedTaskList = OS_Task_pstOverflowDelayedTaskList;
        OS_Task_pstOverflowDelayedTaskList = pstTempList;
        OS_Task_uxNumOfOverflows++;
        OS_Task__vResetNextTaskUnblockTime();
    }
}

void OS_Task__vInitialiseDelayedTaskLists(void)
{
    static OS_List_TypeDef OS_Task_stDelayedTaskList1 = (OS_List_TypeDef) {0UL}; /*< Delayed tasks. */
    /*< Delayed tasks (two lists are used - one for delays that have overflowed the current tick count. */
    static OS_List_TypeDef OS_Task_stDelayedTaskList2 = (OS_List_TypeDef) {0UL};

    OS_List__vInit(&OS_Task_stDelayedTaskList1);
    OS_List__vInit(&OS_Task_stDelayedTaskList2);

    OS_Task_pstDelayedTaskList = &OS_Task_stDelayedTaskList1;
    OS_Task_pstOverflowDelayedTaskList = &OS_Task_stDelayedTaskList2;
}
