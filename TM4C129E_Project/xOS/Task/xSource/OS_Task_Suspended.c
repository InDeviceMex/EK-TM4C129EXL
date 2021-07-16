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
#include <xOS/Task/xHeader/OS_Task_Suspended.h>

#include <xOS/Task/xHeader/OS_Task_Defines.h>

#include <xOS/Task/xHeader/OS_Task_Create.h>
#include <xOS/Task/xHeader/OS_Task_Scheduler.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>

static OS_Task_eStatus OS_Task__enTaskIsTaskSuspended( const OS_Task_Handle_TypeDef pvTask );

static OS_Task_List_Typedef stPendingReadyList;
static OS_Task_List_Typedef stSuspendedTaskList;                   /*< Tasks that are currently suspended. */

static volatile uint32_t u32PendedTicks = 0UL;
static volatile uint32_t u32YieldPending = 0UL;

uint32_t OS_Task__u32GetPendedTicks(void)
{
    return (u32PendedTicks);
}

void OS_Task__vSetPendedTicks(uint32_t u32ValueArg)
{
    u32PendedTicks = u32ValueArg;
}

void OS_Task__vIncreasePendedTicks(void)
{
    ++u32PendedTicks;
}

uint32_t OS_Task__u32GetYieldPending(void)
{
    return (u32YieldPending);
}

void OS_Task__vSetYieldPending(uint32_t s32ValueArg)
{
    u32YieldPending = s32ValueArg;
}

static OS_Task_eStatus OS_Task__enTaskIsTaskSuspended( const OS_Task_Handle_TypeDef pvTask )
{
    OS_Task_eStatus enStatus = OS_Task_enStatus_Error;
    OS_TASK_TCB* const pstTCB =  (OS_TASK_TCB*) pvTask;
    CDLinkedList_nSTATUS enListStatus = CDLinkedList_enSTATUS_ERROR;

    if(0UL != (uint32_t) pstTCB)
    {
        enListStatus = CDLinkedList__enIsItemOwnerList(&stSuspendedTaskList, &(pstTCB->stGenericListItem));
        if(CDLinkedList_enSTATUS_OK == enListStatus)
        {
            enListStatus = CDLinkedList__enIsItemOwnerList(&stPendingReadyList, &(pstTCB->stEventListItem));
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

void OS_Task__vTaskSuspendAll( void )
{
    /* A critical section is not required as the variable is of type
    uint32_t.  Please read Richard Barry's reply in the following link to a
    post in the FreeRTOS support forum before reporting this as a bug! -
    http://goo.gl/wu4acr */
    OS_Task__vIncreaseSchedulerSuspended();
}

uint32_t OS_Task__u32TaskResumeAll(void)
{
    OS_TASK_TCB *pstTCB;
    OS_TASK_TCB *pstCurrentTCB;
    uint32_t u32AlreadyYielded = 0UL;
    uint32_t u32SchedulerSuspended = 0UL;
    uint32_t u32CurrentNumberOfTasks = 0UL;
    CDLinkedList_nSTATUS enIsListEmpty = CDLinkedList_enSTATUS_OK;

    /* If u32SchedulerSuspended is zero then this function does not match a
    previous call to vTaskSuspendAll(). */
    u32SchedulerSuspended =  OS_Task__u32GetSchedulerSuspended();
    if(0UL < u32SchedulerSuspended )
    {
        /* It is possible that an ISR caused a task to be removed from an event
        list while the scheduler was suspended.  If this was the case then the
        removed task will have been added to the stPendingReadyList.  Once the
        scheduler has been resumed it is safe to move all the pending ready
        tasks from this list into their appropriate ready list. */
        OS_TASK_ENTER_CRITICAL();
        {
            --u32SchedulerSuspended;
            OS_Task__vSetSchedulerSuspended(u32SchedulerSuspended);

            if( u32SchedulerSuspended == ( uint32_t ) 0UL )
            {
                u32CurrentNumberOfTasks = OS_Task__u32GetCurrentNumberOfTasks();
                if( u32CurrentNumberOfTasks > ( uint32_t ) 0U )
                {
                    /* Move any readied tasks from the pending list into the
                    appropriate ready list. */
                    enIsListEmpty = CDLinkedList__enIsEmpty(&stPendingReadyList);
                    while(CDLinkedList_enSTATUS_ERROR == enIsListEmpty)
                    {
                        pstTCB = ( OS_TASK_TCB * ) CDLinkedList__pvGetDataHead(&stPendingReadyList);
                        CDLinkedList__enRemove(&(pstTCB->stEventListItem));
                        CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* If the moved task has a priority higher than the current
                        task then a yield must be performed. */
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if( pstTCB->u32Priority >= pstCurrentTCB->u32Priority )
                        {
                            u32YieldPending = 1UL;
                        }

                        enIsListEmpty = CDLinkedList__enIsEmpty(&stPendingReadyList);
                    }

                    /* If any ticks occurred while the scheduler was suspended then
                    they should be processed now.  This ensures the tick count does
                    not slip, and that any delayed tasks are resumed at the correct
                    time. */
                    if(0UL < u32PendedTicks)
                    {
                        while( 0UL < u32PendedTicks)
                        {
                            if( OS_Task__u32TaskIncrementTick() != 0UL )
                            {
                                u32YieldPending = 1UL;
                            }
                            --u32PendedTicks;
                        }
                    }

                    if( u32YieldPending == 1UL )
                    {
                        u32AlreadyYielded = 1UL;
                        OS_TASK_YIELD_IF_USING_PREEMPTION();
                    }
                }
            }
        }
        OS_TASK_EXIT_CRITICAL();
    }

    return u32AlreadyYielded;
}

void OS_Task__vInitialiseSuspendedTaskLists(void)
{
    CDLinkedList__enInit( &stPendingReadyList, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
    CDLinkedList__enInit( &stSuspendedTaskList, (void (*) (void *DataContainer)) 0UL, (void (*) (void *Item)) 0UL);
}


