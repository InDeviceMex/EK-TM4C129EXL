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

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/xHeader/OS_Task_Ready.h>


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

    return (u32Return);
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
    if(OS_TASK_MAX_PRIORITIES <= u32NewPriority)
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
            before its u32PriorityTask member is changed so the
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

                CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                u32ListSize = CDLinkedList__u32GetSize(pstReadyList);
                if(0UL == u32ListSize)
                {
                    /* It is known that the task is in its ready list so
                    there is no need to check again and the port level
                    reset macro can be called directly. */
                    OS_Task__vClearReadyPriority(u32PriorityUsedOnEntry);
                }
                OS_Task__vAddTaskToReadyList(pstTCB);
            }

            if(1UL == u32YieldRequired)
            {
                OS_Task__vYieldIfUsingPreemption();
            }

            /* Remove compiler warning about unused variables when the port
            optimised task selection is not being used. */
            (void) u32PriorityUsedOnEntry;
        }
    }
    OS_Task__vExitCritical();

}

void OS_Task__vPriorityInherit(OS_Task_Handle_TypeDef const pvMutexHolder)
{
    OS_TASK_TCB* const pstTCB = (OS_TASK_TCB*) pvMutexHolder;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32EventValue = 0UL;
    uint32_t u32ListSize = 0UL;
    OS_Task_List_Typedef* pstReadyList = (OS_Task_List_Typedef*) 0UL;
    CDLinkedList_nSTATUS enIsListOwner = CDLinkedList_enSTATUS_OK;

    /* If the mutex was given back by an interrupt while the queue was
    locked then the mutex holder might now be NULL. */
    if(0UL != pvMutexHolder)
    {
        /* If the holder of the mutex has a priority below the priority of
        the task attempting to obtain the mutex then it will temporarily
        inherit the priority of the task attempting to obtain the mutex. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB->u32PriorityTask < pstCurrentTCB->u32PriorityTask )
        {
            /* Adjust the mutex holder state to account for its new
            priority.  Only reset the event list data auxiliar if the value is
            not being used for anything else. */
            u32EventValue = CDLinkedList_Item__u32GetValue(&(pstTCB->stEventListItem));
            u32EventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == u32EventValue)
            {
                CDLinkedList_Item__vSetValue(&(pstTCB->stEventListItem), OS_TASK_MAX_PRIORITIES - pstCurrentTCB->u32PriorityTask);
            }

            /* If the task being modified is in the ready state it will need
            to be moved into a new list. */
            pstReadyList = OS_Task__pstGetReadyTasksLists(pstTCB->u32PriorityTask);
            enIsListOwner = CDLinkedList__enIsItemOwnerList(pstReadyList, &(pstTCB->stGenericListItem));
            if(CDLinkedList_enSTATUS_OK == enIsListOwner)
            {
                CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                u32ListSize = CDLinkedList__u32GetSize(pstReadyList);
                if(0UL == u32ListSize)
                {
                    OS_Task__vResetReadyPriority(pstTCB->u32PriorityTask);
                }

                /* Inherit the priority before being moved into the new list. */
                pstTCB->u32PriorityTask = pstCurrentTCB->u32PriorityTask;
                OS_Task__vAddTaskToReadyList(pstTCB);
            }
            else
            {
                /* Just inherit the priority. */
                pstTCB->u32PriorityTask = pstCurrentTCB->u32PriorityTask;
            }
        }
    }
}


uint32_t OS_Task__u32PriorityDisinherit(OS_Task_Handle_TypeDef const pvMutexHolder)
{
    OS_TASK_TCB* const pstTCB = (OS_TASK_TCB*) pvMutexHolder;
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;
    uint32_t u32ListSize = 0UL;
    uint32_t u32Priority = 0UL;
    OS_Task_List_Typedef* pstList = (OS_Task_List_Typedef*) 0UL;
    uint32_t u32Return = 0UL;

    if(0UL != pvMutexHolder)
    {
        /* A task can only have an inherited priority if it holds the mutex.
        If the mutex is held by a task then it cannot be given from an
        interrupt, and if a mutex is given by the holding task then it must
        be the running state task. */

        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(pstTCB == pstCurrentTCB)
        {
            if(0UL != pstTCB->u32MutexesHeld)
            {
                (pstTCB->u32MutexesHeld )--;

                /* Has the holder of the mutex inherited the priority of another
                task? */
                if( pstTCB->u32PriorityTask != pstTCB->u32BasePriority )
                {
                    /* Only disinherit if no other mutexes are held. */
                    if( 0UL == pstTCB->u32MutexesHeld)
                    {
                        /* A task can only have an inherited priority if it holds
                        the mutex.  If the mutex is held by a task then it cannot be
                        given from an interrupt, and if a mutex is given by the
                        holding task then it must be the running state task.  Remove
                        the holding task from the ready list. */

                        pstList = (OS_Task_List_Typedef*) CDLinkedList_Item__pvGetOwnerList( &(pstTCB->stGenericListItem));
                        CDLinkedList__enRemove(&(pstTCB->stGenericListItem));
                        u32ListSize = CDLinkedList__u32GetSize(pstList);
                        if(0UL == u32ListSize)
                        {
                            OS_Task__vResetReadyPriority(pstTCB->u32PriorityTask);
                        }

                        /* Disinherit the priority before adding the task into the
                        new ready list. */
                        pstTCB->u32PriorityTask = pstTCB->u32BasePriority;

                        /* Reset the event list data auxiliar.  It cannot be in use for
                        any other purpose if this task is running, and it must be
                        running to give back the mutex. */
                        u32Priority = OS_TASK_MAX_PRIORITIES;
                        u32Priority -= pstTCB->u32PriorityTask;
                        CDLinkedList_Item__vSetValue(&(pstTCB->stEventListItem), u32Priority);
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* Return true to indicate that a context switch is required.
                        This is only actually required in the corner case whereby
                        multiple mutexes were held and the mutexes were given back
                        in an order different to that in which they were taken.
                        If a context switch did not occur when the first mutex was
                        returned, even if a task was waiting on it, then a context
                        switch should occur when the last mutex is returned whether
                        a task is waiting on it or not. */
                        u32Return = 1UL;
                    }
                }
            }
        }
    }
    return (u32Return);
}


void* OS_Task__pvIncrementMutexHeldCount(void)
{
    OS_TASK_TCB *pstCurrentTCB = (OS_TASK_TCB*) 0UL;

    /* If xSemaphoreCreateMutex() is called before any tasks have been created
    then pstCurrentTCB will be NULL. */
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    if(0UL != pstCurrentTCB)
    {
        (pstCurrentTCB->u32MutexesHeld)++;
    }

    return (pstCurrentTCB);
}
