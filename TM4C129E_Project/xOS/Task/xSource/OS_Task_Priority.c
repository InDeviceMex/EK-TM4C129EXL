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

OS_UBase_t OS_Task__uxPriorityGet(OS_Task_Handle_TypeDef psTaskArg)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxReturn = 0UL;

    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the priority of the that
        called upsTaskArgPriorityGet() that is being queried. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        uxReturn = pstTCB->uxPriorityTask;
    }
    OS_Task__vExitCritical();

    return (uxReturn);
}

OS_UBase_t OS_Task__uxPriorityGetFromISR(OS_Task_Handle_TypeDef psTaskArg)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxReturn = 0UL;
    OS_UBase_t uxSavedInterruptState = 0UL;

    uxSavedInterruptState = OS_Adapt__uxSetInterruptMaskFromISR();
    {
        /* If null is passed in here then it is the priority of the calling
        task that is being queried. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        uxReturn = pstTCB->uxPriorityTask;
    }
    OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptState);

    return (uxReturn);
}


void OS_Task__vPrioritySet(OS_Task_Handle_TypeDef psTaskArg, OS_UBase_t uxNewPriority)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxCurrentBasePriority = 0UL;
    OS_UBase_t uxPriorityUsedOnEntry = 0UL;
    OS_UBase_t uxEventValue = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_List_TypeDef* pstReadyList = (OS_List_TypeDef*) 0UL;
    OS_Boolean_t boIsListOwner = FALSE;
    OS_Boolean_t boYieldRequired = FALSE;

    /* Ensure the new priority is valid. */
    if(OS_TASK_MAX_PRIORITIES <= uxNewPriority)
    {
        uxNewPriority = OS_TASK_MAX_PRIORITIES - 1UL;
    }

    OS_Task__vEnterCritical();
    {
        /* If null is passed in here then it is the priority of the calling
        task that is being changed. */
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);

        {
            uxCurrentBasePriority = pstTCB->uxBasePriority;
        }

        if(uxCurrentBasePriority != uxNewPriority)
        {
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            /* The priority change may have readied a task of higher
            priority than the calling task. */
            if(uxNewPriority > uxCurrentBasePriority)
            {
                if(pstTCB != pstCurrentTCB)
                {
                    /* The priority of a task other than the currently
                    running task is being raised.  Is the priority being
                    raised above that of the running task? */
                    if( uxNewPriority >= pstCurrentTCB->uxPriorityTask )
                    {
                        boYieldRequired = TRUE;
                    }
                }
            }
            else if(pstTCB == pstCurrentTCB)
            {
                /* Setting the priority of the running task down means
                there may now be another task of higher priority that
                is ready to execute. */
                boYieldRequired = TRUE;
            }

            /* Remember the ready list the task might be referenced from
            before its uxPriorityTask member is changed so the
            taskRESET_READY_PRIORITY() macro can function correctly. */
            uxPriorityUsedOnEntry = pstTCB->uxPriorityTask;

            {
                /* Only change the priority being used if the task is not
                currently using an inherited priority. */
                if( pstTCB->uxBasePriority == pstTCB->uxPriorityTask )
                {
                    pstTCB->uxPriorityTask = (OS_UBase_t) uxNewPriority;
                }

                /* The base priority gets set whatever. */
                pstTCB->uxBasePriority = (OS_UBase_t) uxNewPriority;
            }

            /* Only reset the event list data auxiliar if the value is not
            being used for anything else. */
            uxEventValue = OS_List__uxGetItemValue(&(pstTCB->stEventListItem));
            uxEventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == uxEventValue)
            {
                OS_List__vSetItemValue(&(pstTCB->stEventListItem),
                                       OS_TASK_MAX_PRIORITIES - uxNewPriority);
            }

            /* If the task is in the blocked or suspended list we need do
            nothing more than change it's priority variable. However, if
            the task is in a ready list it needs to be removed and placed
            in the list appropriate to its new priority. */
            pstReadyList = OS_Task__pstGetReadyTasksLists(uxPriorityUsedOnEntry);
            boIsListOwner = OS_List__boIsContainedWithin(pstReadyList,
                                                         &(pstTCB->stGenericListItem));
            if(FALSE != boIsListOwner)
            {
                /* The task is currently in its ready list - remove before adding
                it to it's new ready list.  As we are in a critical section we
                can do this even if the scheduler is suspended. */
                uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    /* It is known that the task is in its ready list so
                    there is no need to check again and the port level
                    reset macro can be called directly. */
                    OS_Task__vClearReadyPriority(uxPriorityUsedOnEntry);
                }
                OS_Task__vAddTaskToReadyList(pstTCB);
            }

            if(TRUE == boYieldRequired)
            {
                OS_Task__vYieldIfUsingPreemption();
            }

            /* Remove compiler warning about unused variables when the port
            optimised task selection is not being used. */
            (void) uxPriorityUsedOnEntry;
        }
    }
    OS_Task__vExitCritical();

}

void OS_Task__vPriorityInherit(OS_Task_Handle_TypeDef const pvMutexHolder)
{
    OS_Task_TCB_TypeDef* const pstTCB = (OS_Task_TCB_TypeDef*) pvMutexHolder;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxEventValue = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_List_TypeDef* pstReadyList = (OS_List_TypeDef*) 0UL;
    OS_Boolean_t boIsListOwner = FALSE;

    /* If the mutex was given back by an interrupt while the queue was
    locked then the mutex holder might now be NULL. */
    if(0UL != (OS_UBase_t) pvMutexHolder)
    {
        /* If the holder of the mutex has a priority below the priority of
        the task attempting to obtain the mutex then it will temporarily
        inherit the priority of the task attempting to obtain the mutex. */
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB->uxPriorityTask < pstCurrentTCB->uxPriorityTask )
        {
            /* Adjust the mutex holder state to account for its new
            priority.  Only reset the event list data auxiliar if the value is
            not being used for anything else. */
            uxEventValue = OS_List__uxGetItemValue(&(pstTCB->stEventListItem));
            uxEventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == uxEventValue)
            {
                OS_List__vSetItemValue(&(pstTCB->stEventListItem),
                           OS_TASK_MAX_PRIORITIES - pstCurrentTCB->uxPriorityTask);
            }

            /* If the task being modified is in the ready state it will need
            to be moved into a new list. */
            pstReadyList = OS_Task__pstGetReadyTasksLists(pstTCB->uxPriorityTask);
            boIsListOwner = OS_List__boIsContainedWithin(pstReadyList,
                                                         &(pstTCB->stGenericListItem));
            if(FALSE != boIsListOwner)
            {
                uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
                }

                /* Inherit the priority before being moved into the new list. */
                pstTCB->uxPriorityTask = pstCurrentTCB->uxPriorityTask;
                OS_Task__vAddTaskToReadyList(pstTCB);
            }
            else
            {
                /* Just inherit the priority. */
                pstTCB->uxPriorityTask = pstCurrentTCB->uxPriorityTask;
            }
        }
    }
}


OS_Boolean_t OS_Task__boPriorityDisinherit(OS_Task_Handle_TypeDef const pvMutexHolder)
{
    OS_Task_TCB_TypeDef* const pstTCB = (OS_Task_TCB_TypeDef*) pvMutexHolder;
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxPriority = 0UL;
    OS_Boolean_t boReturn = FALSE;

    if(0UL != pvMutexHolder)
    {
        /* A task can only have an inherited priority if it holds the mutex.
        If the mutex is held by a task then it cannot be given from an
        interrupt, and if a mutex is given by the holding task then it must
        be the running state task. */

        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(pstTCB == pstCurrentTCB)
        {
            if(0UL != pstTCB->uxMutexesHeld)
            {
                (pstTCB->uxMutexesHeld )--;

                /* Has the holder of the mutex inherited the priority of another
                task? */
                if( pstTCB->uxPriorityTask != pstTCB->uxBasePriority )
                {
                    /* Only disinherit if no other mutexes are held. */
                    if( 0UL == pstTCB->uxMutexesHeld)
                    {
                        /* A task can only have an inherited priority if it holds
                        the mutex.  If the mutex is held by a task then it cannot be
                        given from an interrupt, and if a mutex is given by the
                        holding task then it must be the running state task.  Remove
                        the holding task from the ready list. */
                        uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        if(0UL == uxListSize)
                        {
                            OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
                        }

                        /* Disinherit the priority before adding the task into the
                        new ready list. */
                        pstTCB->uxPriorityTask = pstTCB->uxBasePriority;

                        /* Reset the event list data auxiliar.  It cannot be in use for
                        any other purpose if this task is running, and it must be
                        running to give back the mutex. */
                        uxPriority = OS_TASK_MAX_PRIORITIES;
                        uxPriority -= pstTCB->uxPriorityTask;
                        OS_List__vSetItemValue(&(pstTCB->stEventListItem), uxPriority);
                        OS_Task__vAddTaskToReadyList(pstTCB);

                        /* Return true to indicate that a context switch is required.
                        This is only actually required in the corner case whereby
                        multiple mutexes were held and the mutexes were given back
                        in an order different to that in which they were taken.
                        If a context switch did not occur when the first mutex was
                        returned, even if a task was waiting on it, then a context
                        switch should occur when the last mutex is returned whether
                        a task is waiting on it or not. */
                        boReturn = TRUE;
                    }
                }
            }
        }
    }
    return (boReturn);
}


void* OS_Task__pvIncrementMutexHeldCount(void)
{
    OS_Task_TCB_TypeDef *pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;

    /* If xSemaphoreCreateMutex() is called before any tasks have been created
    then pstCurrentTCB will be NULL. */
    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    if(0UL != (OS_UBase_t) pstCurrentTCB)
    {
        (pstCurrentTCB->uxMutexesHeld)++;
    }

    return (pstCurrentTCB);
}
