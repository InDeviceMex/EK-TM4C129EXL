/**
 *
 * @file OS_Task_Delayed_.c
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Delayed_.h>

static OS_List_t* volatile OS_Task_pstDelayedTaskList = (OS_List_t*) 0UL;
static OS_List_t* volatile OS_Task_pstOverflowDelayedTaskList = (OS_List_t*) 0UL;

static volatile OS_UBase_t OS_Task_uxNumOfOverflows =  0UL;
static volatile OS_UBase_t OS_Task_uxNextTaskUnblockTime = 0UL;

OS_List_t* OS_Task__pstGetOverflowDelayedTaskList(void)
{
    return (OS_Task_pstOverflowDelayedTaskList);
}

OS_List_t* OS_Task__pstGetDelayedTaskList(void)
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
    OS_Boolean_t boStatus;

    boStatus = OS_List__boIsEmpty(OS_Task_pstDelayedTaskList);
    if(FALSE != boStatus)
    {
        OS_Task_uxNextTaskUnblockTime = OS_ADAPT_MAX_DELAY;
    }
    else
    {
        OS_Task_TCB_t *pstTCB;
        OS_ListItem_t* pstGenericListReg;

        pstTCB = (OS_Task_TCB_t *) OS_List__pvGetOwnerOfHeadEntry(OS_Task_pstDelayedTaskList);
        pstGenericListReg = &(pstTCB->stGenericListItem);
        OS_Task_uxNextTaskUnblockTime = OS_List__uxGetItemValue(pstGenericListReg);
    }
}


void OS_Task__vSwitchDelayedLists(void)
{
    OS_Boolean_t boIsEmptyList;

    boIsEmptyList = OS_List__boIsEmpty(OS_Task_pstDelayedTaskList);
    if(FALSE != boIsEmptyList)
    {
        OS_List_t *pstTempList;
        pstTempList = OS_Task_pstDelayedTaskList;
        OS_Task_pstDelayedTaskList = OS_Task_pstOverflowDelayedTaskList;
        OS_Task_pstOverflowDelayedTaskList = pstTempList;
        OS_Task_uxNumOfOverflows++;
        OS_Task__vResetNextTaskUnblockTime();
    }
}

void OS_Task__vInitialiseDelayedTaskLists(void)
{
    static OS_List_t OS_Task_stDelayedTaskList1 = (OS_List_t) {0UL};
    static OS_List_t OS_Task_stDelayedTaskList2 = (OS_List_t) {0UL};

    OS_List__vInit(&OS_Task_stDelayedTaskList1);
    OS_List__vInit(&OS_Task_stDelayedTaskList2);

    OS_Task_pstDelayedTaskList = &OS_Task_stDelayedTaskList1;
    OS_Task_pstOverflowDelayedTaskList = &OS_Task_stDelayedTaskList2;
}
