/**
 *
 * @file OS_Queue_Send.c
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Send.h>

#include <xOS/Queue/Intrinsics/OS_Queue_Intrinsics.h>
#include <xOS/Queue/xHeader/OS_Queue_Lock.h>
#include <xOS/Queue/xHeader/OS_Queue_Notify.h>

#include <xOS/Task/OS_Task.h>
#include <xOS/Adapt/OS_Adapt.h>

/*TODO : Check if portASSERT_IF_INTERRUPT_PRIORITY_INVALID is need to implement in RTOS*/

OS_Boolean_t OS_Queue__boGenericSend(OS_Queue_Handle_t pvQueue,
                                   const void* const pvItemToQueue,
                                   OS_UBase_t uxTicksToWait,
                                   const OS_Queue_nPos enCopyPosition)
{
    OS_Boolean_t boEntryTimeSet = FALSE;
    OS_Boolean_t boYieldRequired = FALSE;
    OS_Boolean_t boStatus = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;
    OS_Boolean_t boIsQueueFull = FALSE;
    OS_UBase_t uxTempValue = 0UL;
    OS_Task_TimeOut_t stTimeOut = {0UL, 0UL};
    OS_Queue_t* const pstQueue = (OS_Queue_t*) pvQueue;
    OS_Task_eScheduler enSchedulerState = OS_Task_enScheduler_Suspended;

    if((0UL != (OS_UBase_t) pstQueue))
    {
        if((0UL != (OS_UBase_t) pvItemToQueue) || (0UL == pstQueue->uxItemSize))
        {
            if((OS_Queue_enPos_OVERWRITE != enCopyPosition) || (1UL == pstQueue->uxLength))
            {
                enSchedulerState = OS_Task__enGetSchedulerState();
                if((OS_Task_enScheduler_Suspended != enSchedulerState) || (0UL == uxTicksToWait))
                {
                    /* This function relaxes the coding standard somewhat to allow return
                    statements within the function itself.  This is done in the interest
                    of execution time efficiency. */
                    while(1UL)
                    {
                        OS_Task__vEnterCritical();
                        {
                            /* Is there room on the queue now?  The running task must be the
                            highest priority task wanting to access the queue.  If the head item
                            in the queue is to be overwritten then it does not matter if the
                            queue is full. */
                            uxTempValue = pstQueue->uxLength;
                            if((pstQueue->uxMessagesWaiting < uxTempValue) || ( enCopyPosition == OS_Queue_enPos_OVERWRITE ))
                            {
                                boYieldRequired = OS_Queue__boCopyDataToQueue(pstQueue, pvItemToQueue, enCopyPosition);
                                if(0UL != (OS_UBase_t) pstQueue->pstQueueSetContainer)
                                {
                                    boStatus = OS_Queue__boNotifyQueueSetContainer(pstQueue, enCopyPosition);
                                    if(TRUE == boStatus)
                                    {
                                        /* The queue is a member of a queue set, and posting
                                        to the queue set caused a higher priority task to
                                        unblock. A context switch is required. */
                                        OS_Queue__vYieldIfUsingPreemption();
                                    }
                                }
                                else
                                {
                                    /* If there was a task waiting for data to arrive on the
                                    queue then unblock it now. */
                                    boIsListEmpty = OS_List__boIsEmpty(&(pstQueue->stTasksWaitingToReceive));
                                    if(FALSE == boIsListEmpty)
                                    {
                                        boStatus = OS_Task__boRemoveFromEventList(&(pstQueue->stTasksWaitingToReceive));
                                        if(TRUE == boStatus)
                                        {
                                            /* The unblocked task has a priority higher than
                                            our own so yield immediately.  Yes it is ok to
                                            do this from within the critical section - the
                                            kernel takes care of that. */
                                            OS_Queue__vYieldIfUsingPreemption();
                                        }
                                    }
                                    else if(FALSE != boYieldRequired)
                                    {
                                        /* This path is a special case that will only get
                                        executed if the task was holding multiple mutexes
                                        and the mutexes were given back in an order that is
                                        different to that in which they were taken. */
                                        OS_Queue__vYieldIfUsingPreemption();
                                    }
                                }
                                OS_Task__vExitCritical();
                                return (TRUE);
                            }
                            else
                            {
                                if(0UL == uxTicksToWait)
                                {
                                    /* The queue was full and no block time is specified (or
                                    the block time has expired) so leave now. */
                                    OS_Task__vExitCritical();

                                    /* Return to the original privilege level before exiting
                                    the function. */
                                    return (OS_QUEUE_FULL);
                                }
                                else if(FALSE == boEntryTimeSet)
                                {
                                    /* The queue was full and a block time was specified so
                                    configure the timeout structure. */
                                    OS_Task__vSetTimeOutState(&stTimeOut);
                                    boEntryTimeSet = TRUE;
                                }
                            }
                        }
                        OS_Task__vExitCritical();

                        /* Interrupts and other tasks can send to and receive from the queue
                        now the critical section has been exited. */

                        OS_Task__vSuspendAll();
                        OS_Queue__vLock(pstQueue);

                        /* Update the timeout state to see if it has expired yet. */
                        boStatus = OS_Task__boCheckForTimeOut(&stTimeOut, &uxTicksToWait);
                        if(FALSE == boStatus)
                        {
                            boIsQueueFull = OS_Queue__boIsQueueFull(pstQueue);
                            if(FALSE !=  boIsQueueFull)
                            {
                                OS_Task__vPlaceOnEventList(&(pstQueue->stTasksWaitingToSend), uxTicksToWait);

                                /* Unlocking the queue means queue events can effect the
                                event list.  It is possible that interrupts occurring now
                                remove this task from the event list again - but as the
                                scheduler is suspended the task will go onto the pending
                                ready last instead of the actual ready list. */
                                OS_Queue__vUnlock(pstQueue);

                                /* Resuming the scheduler will move tasks from the pending
                                ready list into the ready list - so it is feasible that this
                                task is already in a ready list before it yields - in which
                                case the yield will not cause a context switch unless there
                                is also a higher priority task in the pending ready list. */
                                boStatus = OS_Task__boResumeAll();
                                if(FALSE == boStatus)
                                {
                                    OS_Adapt__vYieldWithinAPI();
                                }
                            }
                            else
                            {
                                /* Try again. */
                                OS_Queue__vUnlock(pstQueue);
                                (void) OS_Task__boResumeAll();
                            }
                        }
                        else
                        {
                            /* The timeout has expired. */
                            OS_Queue__vUnlock(pstQueue);
                            (void) OS_Task__boResumeAll();

                            /* Return to the original privilege level before exiting the
                            function. */
                            return (OS_QUEUE_FULL);
                        }
                    }
                }
            }
        }
    }
    return (FALSE);
}


OS_Boolean_t OS_Queue__boGenericSendFromISR(OS_Queue_Handle_t pvQueueArg,
                                            const void* const pvItemToQueue,
                                            OS_Boolean_t* const pboHigherPriorityTaskWoken,
                                            const OS_Queue_nPos enCopyPosition)
{
    OS_Boolean_t boReturn = FALSE;
    OS_Boolean_t boStatus = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;
    OS_UBase_t uxTempValue = 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueueArg;

    if(0UL != (OS_UBase_t) pstQueueReg)
    {
        if((0UL != (OS_UBase_t) pvItemToQueue) || (0UL == pstQueueReg->uxItemSize))
        {
            if((OS_Queue_enPos_OVERWRITE != enCopyPosition) || (1UL == pstQueueReg->uxLength))
            {
                /* Similar to pvQueueArgGenericSend, except without blocking if there is no room
                in the queue.  Also don't directly wake a task that was blocked on a queue
                read, instead return a flag to say whether a context switch is required or
                not (i.e. has a task with a higher priority than us been woken by this
                post). */
                uxSavedInterruptStatus = OS_Adapt__uxSetInterruptMaskFromISR();
                {
                    uxTempValue = pstQueueReg->uxLength;
                    if((pstQueueReg->uxMessagesWaiting < uxTempValue) || ( enCopyPosition == OS_Queue_enPos_OVERWRITE ))
                    {
                        /* Semaphores use pvQueueArgGiveFromISR(), so pstQueueReg will not be a
                        semaphore or mutex.  That means prvCopyDataToQueue() cannot result
                        in a task disinheriting a priority and prvCopyDataToQueue() can be
                        called here even though the disinherit function does not check if
                        the scheduler is suspended before accessing the ready lists. */
                        (void) OS_Queue__boCopyDataToQueue(pstQueueReg, pvItemToQueue, enCopyPosition);

                        /* The event list is not altered if the queue is locked.  This will
                        be done when the queue is unlocked later. */
                        if(OS_QUEUE_UNLOCKED == pstQueueReg->xTxLock)
                        {
                            if(0UL != (OS_UBase_t) pstQueueReg->pstQueueSetContainer)
                            {
                                boStatus = OS_Queue__boNotifyQueueSetContainer(pstQueueReg, enCopyPosition);
                                if(TRUE == boStatus)
                                {
                                    /* The queue is a member of a queue set, and posting
                                    to the queue set caused a higher priority task to
                                    unblock.  A context switch is required. */
                                    if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                                    {
                                        *pboHigherPriorityTaskWoken = TRUE;
                                    }
                                }
                            }
                            else
                            {
                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToReceive));
                                    if(FALSE !=  boStatus)
                                    {
                                        /* The task waiting has a higher priority so
                                        record that a context switch is required. */
                                        if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                                        {
                                            *pboHigherPriorityTaskWoken = TRUE;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            /* Increment the lock count so the task that unlocks the queue
                            knows that data was posted while it was locked. */
                            ++(pstQueueReg->xTxLock);
                        }

                        boReturn = TRUE;
                    }
                    else
                    {
                        boReturn = OS_QUEUE_FULL;
                    }
                }
                OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
            }
        }
    }
    return (boReturn);
}


OS_Boolean_t OS_Queue__boAltGenericSend(OS_Queue_Handle_t pvQueue,
                                        const void* const pvItemToQueue,
                                        OS_UBase_t uxTicksToWait,
                                        OS_Queue_nPos enCopyPosition)
{
    OS_Boolean_t boEntryTimeSet = FALSE;
    OS_Boolean_t boStatus = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;
    OS_Boolean_t boIsQueueFull = FALSE;
    OS_UBase_t uxTempValue = 0UL;
    OS_Task_TimeOut_t stTimeOut = {0UL, 0UL};
    OS_Queue_t* const pstQueueReg = (OS_Queue_t*) pvQueue;

    if(0UL != (OS_UBase_t) pstQueueReg)
    {
        if((0UL != (OS_UBase_t) pvItemToQueue) || (0UL == pstQueueReg->uxItemSize))
        {
            while(1UL)
            {
                OS_Task__vEnterCritical();
                {
                    /* Is there room on the queue now?  To be running we must be
                    the highest priority task wanting to access the queue. */
                    uxTempValue = pstQueueReg->uxLength;
                    if(pstQueueReg->uxMessagesWaiting < uxTempValue)
                    {
                        OS_Queue__boCopyDataToQueue(pstQueueReg, pvItemToQueue, enCopyPosition);

                        /* If there was a task waiting for data to arrive on the
                        queue then unblock it now. */
                        boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
                        if(FALSE == boIsListEmpty)
                        {
                            boStatus = OS_Task__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToReceive));
                            if(TRUE ==  boStatus)
                            {
                                /* The unblocked task has a priority higher than
                                our own so yield immediately. */
                                OS_Adapt__vYieldWithinAPI();
                            }
                        }
                        OS_Task__vExitCritical();
                        return (TRUE);
                    }
                    else
                    {
                        if(0UL == uxTicksToWait)
                        {
                            OS_Task__vExitCritical();
                            return (OS_QUEUE_FULL);
                        }
                        else if( boEntryTimeSet == FALSE )
                        {
                            OS_Task__vSetTimeOutState(&stTimeOut);
                            boEntryTimeSet = TRUE;
                        }
                    }
                }
                OS_Task__vExitCritical();

                OS_Task__vEnterCritical();
                {
                    boStatus = OS_Task__boCheckForTimeOut(&stTimeOut, &uxTicksToWait);
                    if(FALSE == boStatus)
                    {
                        boIsQueueFull = OS_Queue__boIsQueueFull(pstQueueReg);
                        if(FALSE != boIsQueueFull)
                        {
                            OS_Task__vPlaceOnEventList(&(pstQueueReg->stTasksWaitingToSend), uxTicksToWait);
                            OS_Adapt__vYieldWithinAPI();
                        }
                    }
                    else
                    {
                        OS_Task__vExitCritical();
                        return (OS_QUEUE_FULL);
                    }
                }
                OS_Task__vExitCritical();
            }
        }
    }
    return (FALSE);
}


OS_Boolean_t OS_Queue__boGiveFromISR( OS_Queue_Handle_t pvQueue,
                                      OS_Boolean_t* const pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boReturn = FALSE;
    OS_Boolean_t boStatus = FALSE;
    OS_Boolean_t boIsListEmpty = FALSE;
    OS_UBase_t uxTempValue = 0UL;
    OS_UBase_t uxSavedInterruptStatus = 0UL;
    OS_Queue_t * const pstQueueReg = ( OS_Queue_t * ) pvQueue;
    void* pvMutexHolderReg = (void*) 0UL;

    /* Similar to pvQueueGenericSendFromISR() but used with semaphores where the
    item size is 0.  Don't directly wake a task that was blocked on a queue
    read, instead return a flag to say whether a context switch is required or
    not (i.e. has a task with a higher priority than us been woken by this
    post). */

    if(0UL != (OS_UBase_t) pstQueueReg)
    {
        /* pvQueueGenericSendFromISR() should be used instead of pvQueueGiveFromISR()
        if the item size is not 0. */
        if(0UL == pstQueueReg->uxItemSize)
        {
            /* Normally a mutex would not be given from an interrupt, especially if
            there is a mutex holder, as priority inheritance makes no sense for an
            interrupts, only tasks. */
            pvMutexHolderReg = pstQueueReg->pvMutexHolder;
            if((OS_QUEUE_IS_MUTEX != pstQueueReg->uxQueueType) || (0UL == (OS_UBase_t) pvMutexHolderReg))
            {
                uxSavedInterruptStatus = OS_Adapt__uxSetInterruptMaskFromISR();
                {
                    /* When the queue is used to implement a semaphore no data is ever
                    moved through the queue but it is still valid to see if the queue 'has
                    space'. */
                    uxTempValue = pstQueueReg->uxLength;
                    if(pstQueueReg->uxMessagesWaiting < uxTempValue)
                    {
                        /* A task can only have an inherited priority if it is a mutex
                        holder - and if there is a mutex holder then the mutex cannot be
                        given from an ISR.  As this is the ISR version of the function it
                        can be assumed there is no mutex holder and no need to determine if
                        priority disinheritance is needed.  Simply increase the count of
                        messages (semaphores) available. */
                        ++(pstQueueReg->uxMessagesWaiting);

                        /* The event list is not altered if the queue is locked.  This will
                        be done when the queue is unlocked later. */
                        if(OS_QUEUE_UNLOCKED == pstQueueReg->xTxLock)
                        {
                            if(0UL != (OS_UBase_t) (pstQueueReg->pstQueueSetContainer))
                            {
                                boStatus = OS_Queue__boNotifyQueueSetContainer(pstQueueReg, OS_Queue_enPos_SEND_TO_BACK);
                                if(TRUE == boStatus)
                                {
                                    /* The semaphore is a member of a queue set, and
                                    posting to the queue set caused a higher priority
                                    task to unblock.  A context switch is required. */
                                    if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                                    {
                                        *pboHigherPriorityTaskWoken = TRUE;
                                    }
                                }
                            }
                            else
                            {
                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToReceive));
                                    if(FALSE != boStatus)
                                    {
                                        /* The task waiting has a higher priority so
                                        record that a context switch is required. */
                                        if(0UL != (OS_UBase_t) pboHigherPriorityTaskWoken)
                                        {
                                            *pboHigherPriorityTaskWoken = TRUE;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            /* Increment the lock count so the task that unlocks the queue
                            knows that data was posted while it was locked. */
                            ++(pstQueueReg->xTxLock);
                        }

                        boReturn = TRUE;
                    }
                    else
                    {
                        boReturn = OS_QUEUE_FULL;
                    }
                }
                OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
            }
        }
    }
    return (boReturn);
}
