/**
 *
 * @file OS_Task_Suspended.c
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
 * @verbatim 20 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_Suspended.h>

static OS_List_TypeDef OS_Task_stPendingReadyList = (OS_List_TypeDef) {0UL};
/*< Tasks that are currently suspended. */
static OS_List_TypeDef OS_Task_stSuspendedTaskList = (OS_List_TypeDef) {0UL};

static volatile OS_UBase_t OS_Task_uxPendedTicks = 0UL;
static volatile OS_Boolean_t OS_Task_boYieldPending = FALSE;

OS_UBase_t OS_Task__uxGetPendedTicks(void)
{
    return (OS_Task_uxPendedTicks);
}

void OS_Task__vSetPendedTicks(OS_UBase_t uxValueArg)
{
    OS_Task_uxPendedTicks = uxValueArg;
}

void OS_Task__vIncreasePendedTicks(void)
{
    ++OS_Task_uxPendedTicks;
}

OS_Boolean_t OS_Task__boGetYieldPending(void)
{
    return (OS_Task_boYieldPending);
}

void OS_Task__vSetYieldPending(OS_Boolean_t boValueArg)
{
    OS_Task_boYieldPending = boValueArg;
}

void OS_Task__vMissedYield(void)
{
    OS_Task__vSetYieldPending(TRUE);
}

OS_List_TypeDef* OS_Task__pstGetPendingReadyList(void)
{
    return (&OS_Task_stPendingReadyList);
}

OS_List_TypeDef* OS_Task__pstGetSuspendedTaskList(void)
{
    return (&OS_Task_stSuspendedTaskList);
}

OS_Boolean_t OS_Task__boIsTaskSuspended(const OS_Task_Handle_TypeDef pvTask)
{
    OS_Boolean_t boStatus = FALSE;
    OS_Boolean_t boListStatus = FALSE;
    OS_Task_TCB_TypeDef* const pstTCB = (OS_Task_TCB_TypeDef*) pvTask;

    if(0UL != (OS_UBase_t) pstTCB)
    {
        boListStatus = OS_List__boIsContainedWithin(&OS_Task_stSuspendedTaskList,
                                                    &(pstTCB->stGenericListItem));
        if(FALSE != boListStatus)
        {
            boListStatus = OS_List__boIsContainedWithin(&OS_Task_stPendingReadyList,
                                                        &(pstTCB->stEventListItem));
            if(FALSE == boListStatus)
            {
                boListStatus = OS_List__boIsContainedWithin((OS_List_TypeDef*) 0UL,
                                                            &(pstTCB->stEventListItem));
                if(FALSE != boListStatus)
                {
                    boStatus = TRUE;
                }
            }
        }
    }
    return (boStatus);
}

void OS_Task__vInitialiseSuspendedTaskLists(void)
{
    OS_List__vInit(&OS_Task_stPendingReadyList);
    OS_List__vInit(&OS_Task_stSuspendedTaskList);
}
