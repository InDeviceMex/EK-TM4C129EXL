/**
 *
 * @file OS_Task_Priority.c
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
#include <xOS/Task/xHeader/OS_Task_Priority.h>


#include <xOS/Task/xHeader/OS_Task_Critical.h>
#include <xOS/Task/xHeader/OS_Task_Create.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>
#include <xOS/Task/xHeader/OS_Task_TCB.h>


static volatile uint32_t u32TopReadyPriority = OS_TASK_IDLE_PRIORITY;


uint32_t OS_Task__u32GetTopReadyPriority(void)
{
    return (u32TopReadyPriority);
}



void OS_Task__vRecordReadyPriority(uint32_t u32PriorityArg)
{
    OS_Adapt__vRecordReadyPriority(u32PriorityArg, &u32TopReadyPriority );
}

uint32_t OS_Task__u32GetHighestPriority(void)
{
    uint32_t u32TopPriorityReg = 0UL;
    OS_Adapt__vGetHighestPriority(&u32TopPriorityReg, u32TopReadyPriority);
    return (u32TopPriorityReg);
}

void OS_Task__vClearReadyPriority(uint32_t u32PriorityArg)
{
    OS_Adapt__vResetReadyPriority(u32PriorityArg, &u32TopReadyPriority );
}


uint32_t OS_Task__u32PriorityGet(OS_Task_Handle_TypeDef psTaskArg)
{
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32Return = 0UL;

    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the priority of the that
        called upsTaskArgPriorityGet() that is being queried. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        u32Return = pstTCB->u32PriorityTask;
    }
    OS_Task__vExitCritical();

    return (u32Return);
}

uint32_t OS_Task__u32PriorityGetFromISR(OS_Task_Handle_TypeDef psTaskArg)
{
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32Return = 0UL;
    uint32_t u32SavedInterruptState = 0UL;

    u32SavedInterruptState = OS_Adapt__u32SetInterruptMaskFromISR();
    {
        /* If null is passed in here then it is the priority of the calling
        task that is being queried. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        u32Return = pstTCB->u32PriorityTask;
    }
    OS_Adapt__vClearInterruptMaskFromISR(u32SavedInterruptState);

    return u32Return;
}


void OS_Task__vPrioritySet(OS_Task_Handle_TypeDef psTaskArg, uint32_t u32NewPriority)
{
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32CurrentBasePriority = 0UL;
    uint32_t u32PriorityUsedOnEntry = 0UL;
    uint32_t u32YieldRequired = 0UL;
    uint32_t u32EventValue = 0UL;
    uint32_t u32ListSize = 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    CDLinkedList_nSTATUS enIsListOwner = CDLinkedList_enSTATUS_OK;

    /* Ensure the new priority is valid. */
    if( u32NewPriority >= ( uint32_t ) OS_TASK_MAX_PRIORITIES )
    {
        u32NewPriority = OS_TASK_MAX_PRIORITIES - 1UL;
    }

    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the priority of the calling
        task that is being changed. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);

        {
            u32CurrentBasePriority = pstTCB->u32BasePriority;
        }

        if( u32CurrentBasePriority != u32NewPriority )
        {
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            /* The priority change may have readied a task of higher
            priority than the calling task. */
            if( u32NewPriority > u32CurrentBasePriority )
            {
                if( pstTCB != pstCurrentTCB )
                {
                    /* The priority of a task other than the currently
                    running task is being raised.  Is the priority being
                    raised above that of the running task? */
                    if( u32NewPriority >= pstCurrentTCB->u32PriorityTask )
                    {
                        u32YieldRequired = 1UL;
                    }
                }
            }
            else if( pstTCB == pstCurrentTCB )
            {
                /* Setting the priority of the running task down means
                there may now be another task of higher priority that
                is ready to execute. */
                u32YieldRequired = 1UL;
            }

            /* Remember the ready list the task might be referenced from
            before its uxPriority member is changed so the
            taskRESET_READY_PRIORITY() macro can function correctly. */
            u32PriorityUsedOnEntry = pstTCB->u32PriorityTask;

            {
                /* Only change the priority being used if the task is not
                currently using an inherited priority. */
                if( pstTCB->u32BasePriority == pstTCB->u32PriorityTask )
                {
                    pstTCB->u32PriorityTask = (uint32_t) u32NewPriority;
                }

                /* The base priority gets set whatever. */
                pstTCB->u32BasePriority = (uint32_t) u32NewPriority;
            }

            /* Only reset the event list data auxiliar if the value is not
            being used for anything else. */
            u32EventValue = CDLinkedList_Item__u32GetValue(&(pstTCB->stEventListItem));
            u32EventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == u32EventValue)
            {
                CDLinkedList_Item__vSetValue(&(pstTCB->stEventListItem), OS_TASK_MAX_PRIORITIES - u32NewPriority);
            }

            /* If the task is in the blocked or suspended list we need do
            nothing more than change it's priority variable. However, if
            the task is in a ready list it needs to be removed and placed
            in the list appropriate to its new priority. */
            pstReadyList = OS_Task__pstGetReadyTasksLists(u32PriorityUsedOnEntry);
            enIsListOwner = CDLinkedList__enIsItemOwnerList(pstReadyList, &(pstTCB->stGenericListItem));
            if(CDLinkedList_enSTATUS_OK == enIsListOwner)
            {
                /* The task is currently in its ready list - remove before adding
                it to it's new ready list.  As we are in a critical section we
                can do this even if the scheduler is suspended. */

                CDLinkedList__enRemove(&( pstTCB->stGenericListItem ));
                u32ListSize == CDLinkedList__u32GetSize(pstReadyList);
                if(0UL == u32ListSize)
                {
                    /* It is known that the task is in its ready list so
                    there is no need to check again and the port level
                    reset macro can be called directly. */
                    OS_Task__vClearReadyPriority(u32PriorityUsedOnEntry);
                }
                OS_Task__vAddTaskToReadyList( pstTCB );
            }

            if( u32YieldRequired == 1UL )
            {
                OS_Task__vYieldIfUsingPreemption();
            }

            /* Remove compiler warning about unused variables when the port
            optimised task selection is not being used. */
            ( void ) u32PriorityUsedOnEntry;
        }
    }
    OS_Task__vExitCritical();

}
