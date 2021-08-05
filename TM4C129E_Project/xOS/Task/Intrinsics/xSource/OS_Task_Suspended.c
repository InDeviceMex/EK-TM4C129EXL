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

static OS_Task_List_Typedef OS_Task_stPendingReadyList;
static OS_Task_List_Typedef OS_Task_stSuspendedTaskList;                   /*< Tasks that are currently suspended. */

static volatile uint32_t OS_Task_u32PendedTicks = 0UL;
static volatile uint32_t OS_Task_u32YieldPending = 0UL;



uint32_t OS_Task__u32GetPendedTicks(void)
{
    return (OS_Task_u32PendedTicks);
}

void OS_Task__vSetPendedTicks(uint32_t u32ValueArg)
{
    OS_Task_u32PendedTicks = u32ValueArg;
}

void OS_Task__vIncreasePendedTicks(void)
{
    ++OS_Task_u32PendedTicks;
}

uint32_t OS_Task__u32GetYieldPending(void)
{
    return (OS_Task_u32YieldPending);
}

void OS_Task__vSetYieldPending(uint32_t s32ValueArg)
{
    OS_Task_u32YieldPending = s32ValueArg;
}

void OS_Task__vMissedYield(void)
{
    OS_Task__vSetYieldPending(1UL);
}

OS_Task_List_Typedef* OS_Task__pstGetPendingReadyList(void)
{
    return (&OS_Task_stPendingReadyList);
}

OS_Task_List_Typedef* OS_Task__pstGetSuspendedTaskList(void)
{
    return (&OS_Task_stSuspendedTaskList);
}

OS_Task_eStatus OS_Task__enIsTaskSuspended( const OS_Task_Handle_TypeDef pvTask )
{
    OS_Task_eStatus enStatus = OS_Task_enStatus_Error;
    OS_TASK_TCB* const pstTCB =  (OS_TASK_TCB*) pvTask;
    CDLinkedList_nSTATUS enListStatus = CDLinkedList_enSTATUS_ERROR;

    if(0UL != (uint32_t) pstTCB)
    {
        enListStatus = CDLinkedList__enIsItemOwnerList(&OS_Task_stSuspendedTaskList, &(pstTCB->stGenericListItem));
        if(CDLinkedList_enSTATUS_OK == enListStatus)
        {
            enListStatus = CDLinkedList__enIsItemOwnerList(&OS_Task_stPendingReadyList, &(pstTCB->stEventListItem));
            if(CDLinkedList_enSTATUS_ERROR == enListStatus)
            {
                enListStatus = CDLinkedList__enIsItemOwnerList((OS_Task_List_Typedef*) 0UL, &(pstTCB->stEventListItem));
                if(CDLinkedList_enSTATUS_OK == enListStatus)
                {
                    enStatus = OS_Task_enStatus_Ok;
                }
            }
        }
    }
    return (enStatus);
}



void OS_Task__vInitialiseSuspendedTaskLists(void)
{
    CDLinkedList__enInit( &OS_Task_stPendingReadyList, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    CDLinkedList__enInit( &OS_Task_stSuspendedTaskList, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
}
