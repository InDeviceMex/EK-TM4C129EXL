/**
 *
 * @file OS_Queue_Receive.c
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
 * @verbatim 2 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Receive.h>

#include <xOS/Queue/Intrinsics/OS_Queue_Intrinsics.h>
#include <xOS/Queue/xHeader/OS_Queue_Lock.h>
#include <xOS/Queue/xHeader/OS_Queue_Notify.h>

#include <xOS/Task/OS_Task.h>
#include <xOS/Adapt/OS_Adapt.h>

OS_Boolean_t OS_Queue__boGenericReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait,
                                       const OS_Boolean_t boJustPeeking)
{
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueue;
    OS_Boolean_t boEntryTimeSet = FALSE;
    OS_Task_TimeOut_t stTimeOut = {0UL, 0UL};

    if(0UL != (OS_Pointer_t) pstQueueReg)
    {
        if((0UL != (OS_Pointer_t) pvBuffer) || (0UL == pstQueueReg->uxItemSize))
        {
            OS_Task_eScheduler enSchedulerState;
            OS_Boolean_t boIsListEmpty;
            OS_Boolean_t boStatus;

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
                        /* Is there data in the queue now?  To be running the calling task
                        must be the highest priority task wanting to access the queue. */
                        if(0UL < pstQueueReg->uxMessagesWaiting)
                        {
                            /* Remember the read position in case the queue is only being
                            peeked. */
                            int8_t* ps8OriginalReadPosition;
                            ps8OriginalReadPosition = pstQueueReg->ps8ReadFrom;
                            OS_Queue__vCopyDataFromQueue(pstQueueReg, pvBuffer);

                            if(FALSE == boJustPeeking)
                            {
                                /* Actually removing data, not just peeking. */
                                --(pstQueueReg->uxMessagesWaiting);

                                if(OS_QUEUE_IS_MUTEX == pstQueueReg->uxQueueType)
                                {
                                    /* Record the information required to implement
                                    priority inheritance should it become necessary. */
                                    pstQueueReg->pvMutexHolder = OS_Task__pvIncrementMutexHeldCount(); /*lint !e961 Cast is not redundant as TaskHandle_t is a typedef. */
                                }

                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToSend));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToSend));
                                    if(TRUE == boStatus)
                                    {
                                        OS_Queue__vYieldIfUsingPreemption();
                                    }
                                }
                            }
                            else
                            {
                                /* The data is not being removed, so reset the read
                                pointer. */
                                pstQueueReg->ps8ReadFrom = ps8OriginalReadPosition;

                                /* The data is being left in the queue, so see if there are
                                any other tasks waiting for the data. */
                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList( &(pstQueueReg->stTasksWaitingToReceive));
                                    if(FALSE != boStatus)
                                    {
                                        /* The task waiting has a higher priority than this task. */
                                        OS_Queue__vYieldIfUsingPreemption();
                                    }
                                }
                            }
                            OS_Task__vExitCritical();
                            return (TRUE);
                        }
                        else
                        {
                            if(0UL == uxTicksToWait)
                            {
                                /* The queue was empty and no block time is specified (or
                                the block time has expired) so leave now. */
                                OS_Task__vExitCritical();
                                return (OS_QUEUE_EMPTY);
                            }
                            else if(FALSE == boEntryTimeSet)
                            {
                                /* The queue was empty and a block time was specified so
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
                    OS_Queue__vLock(pstQueueReg);

                    /* Update the timeout state to see if it has expired yet. */
                    boStatus = OS_Task__boCheckForTimeOut( &stTimeOut, &uxTicksToWait);
                    if(FALSE == boStatus)
                    {
                        boIsListEmpty = OS_Queue__boIsQueueEmpty(pstQueueReg);
                        if(FALSE != boIsListEmpty)
                        {
                            if(OS_QUEUE_IS_MUTEX == pstQueueReg->uxQueueType)
                            {
                                OS_Task__vEnterCritical();
                                {
                                    OS_Task__vPriorityInherit(pstQueueReg->pvMutexHolder);
                                }
                                OS_Task__vExitCritical();
                            }

                            OS_Task__vPlaceOnEventList(&(pstQueueReg->stTasksWaitingToReceive), uxTicksToWait);
                            OS_Queue__vUnlock(pstQueueReg);
                            boStatus = OS_Task__boResumeAll();
                            if(FALSE == boStatus)
                            {
                                OS_Adapt__vYieldWithinAPI();
                            }
                        }
                        else
                        {
                            /* Try again. */
                            OS_Queue__vUnlock(pstQueueReg);
                            (void) OS_Task__boResumeAll();
                        }
                    }
                    else
                    {
                        OS_Queue__vUnlock( pstQueueReg );
                        (void) OS_Task__boResumeAll();
                        return (OS_QUEUE_EMPTY);
                    }
                }
            }
        }
    }
    return (FALSE);
}

OS_Boolean_t OS_Queue__boPeek( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Queue__boGenericReceive(pvQueue, pvBuffer, uxTicksToWait, TRUE);
    return (boReturn);
}

OS_Boolean_t OS_Queue__boReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Queue__boGenericReceive(pvQueue, pvBuffer, uxTicksToWait, FALSE);
    return (boReturn);
}

OS_Boolean_t OS_Queue__boReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                   void * const pvBuffer,
                                   OS_Boolean_t* const pboHigherPriorityTaskWoken)
{
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueue;
    OS_Boolean_t xReturn;

    xReturn = FALSE;
    if(0UL != (OS_Pointer_t) pstQueueReg)
    {
        if((0UL != (OS_Pointer_t) pvBuffer) || (0UL == pstQueueReg->uxItemSize))
        {
            OS_UBase_t uxSavedInterruptStatus;
            uxSavedInterruptStatus = OS_Adapt__uxSetInterruptMaskFromISR();
            {
                /* Cannot block in an ISR, so check there is data available. */
                if(0UL < pstQueueReg->uxMessagesWaiting)
                {
                    OS_Queue__vCopyDataFromQueue(pstQueueReg, pvBuffer);
                    --(pstQueueReg->uxMessagesWaiting);

                    /* If the queue is locked the event list will not be modified.
                    Instead update the lock count so the task that unlocks the queue
                    will know that an ISR has removed data while the queue was
                    locked. */
                    if(OS_QUEUE_UNLOCKED == pstQueueReg->xRxLock)
                    {
                        OS_Boolean_t boIsListEmpty;
                        boIsListEmpty = OS_List__boIsEmpty(&( pstQueueReg->stTasksWaitingToSend));
                        if(FALSE == boIsListEmpty)
                        {
                            OS_Boolean_t boStatus;
                            boStatus = OS_Task__boRemoveFromEventList(&( pstQueueReg->stTasksWaitingToSend));
                            if(FALSE != boStatus)
                            {
                                /* The task waiting has a higher priority than us so
                                force a context switch. */
                                if(0UL != (OS_Pointer_t) pboHigherPriorityTaskWoken)
                                {
                                    *pboHigherPriorityTaskWoken = TRUE;
                                }
                            }
                        }
                    }
                    else
                    {
                        /* Increment the lock count so the task that unlocks the queue
                        knows that data was removed while it was locked. */
                        ++(pstQueueReg->xRxLock);
                    }

                    xReturn = TRUE;
                }
                else
                {
                    xReturn = FALSE;
                }
            }
            OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
        }
    }
    return (xReturn);
}

OS_Boolean_t OS_Queue__boAltGenericReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait,
                                       const OS_Boolean_t boJustPeeking)
{
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueue;
    OS_Boolean_t boEntryTimeSet = FALSE;
    OS_Task_TimeOut_t stTimeOut = {0UL, 0UL};

    if(0UL != (OS_Pointer_t) pstQueueReg)
    {
        if((0UL != (OS_Pointer_t) pvBuffer) || (0UL == pstQueueReg->uxItemSize))
        {
            OS_Task_eScheduler enSchedulerState;
            enSchedulerState = OS_Task__enGetSchedulerState();
            if((OS_Task_enScheduler_Suspended != enSchedulerState) || (0UL == uxTicksToWait))
            {
                /* This function relaxes the coding standard somewhat to allow return
                statements within the function itself.  This is done in the interest
                of execution time efficiency. */
                OS_Boolean_t boIsListEmpty;
                OS_Boolean_t boStatus;
                while(1UL)
                {
                    OS_Task__vEnterCritical();
                    {
                        /* Is there data in the queue now?  To be running the calling task
                        must be the highest priority task wanting to access the queue. */
                        if(0UL < pstQueueReg->uxMessagesWaiting)
                        {
                            /* Remember the read position in case the queue is only being
                            peeked. */
                            int8_t* ps8OriginalReadPosition;
                            ps8OriginalReadPosition = pstQueueReg->ps8ReadFrom;
                            OS_Queue__vCopyDataFromQueue(pstQueueReg, pvBuffer);

                            if(FALSE == boJustPeeking)
                            {
                                /* Actually removing data, not just peeking. */
                                --(pstQueueReg->uxMessagesWaiting);

                                if(OS_QUEUE_IS_MUTEX == pstQueueReg->uxQueueType)
                                {
                                    /* Record the information required to implement
                                    priority inheritance should it become necessary. */
                                    pstQueueReg->pvMutexHolder = OS_Task__pvGetCurrentTaskHandle();
                                }

                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToSend));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToSend));
                                    if(TRUE == boStatus)
                                    {
                                        OS_Queue__vYieldWithinAPI();
                                    }
                                }
                            }
                            else
                            {
                                /* The data is not being removed, so reset the read
                                pointer. */
                                pstQueueReg->ps8ReadFrom = ps8OriginalReadPosition;

                                /* The data is being left in the queue, so see if there are
                                any other tasks waiting for the data. */
                                boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
                                if(FALSE == boIsListEmpty)
                                {
                                    boStatus = OS_Task__boRemoveFromEventList( &(pstQueueReg->stTasksWaitingToReceive));
                                    if(FALSE != boStatus)
                                    {
                                        /* The task waiting has a higher priority than this task. */
                                        OS_Queue__vYieldWithinAPI();
                                    }
                                }
                            }
                            OS_Task__vExitCritical();
                            return (TRUE);
                        }
                        else
                        {
                            if(0UL == uxTicksToWait)
                            {
                                /* The queue was empty and no block time is specified (or
                                the block time has expired) so leave now. */
                                OS_Task__vExitCritical();
                                return (OS_QUEUE_EMPTY);
                            }
                            else if(FALSE == boEntryTimeSet)
                            {
                                /* The queue was empty and a block time was specified so
                                configure the timeout structure. */
                                OS_Task__vSetTimeOutState(&stTimeOut);
                                boEntryTimeSet = TRUE;
                            }
                        }
                    }
                    OS_Task__vExitCritical();

                    OS_Task__vEnterCritical();
                    {
                        /* Update the timeout state to see if it has expired yet. */
                        boStatus = OS_Task__boCheckForTimeOut( &stTimeOut, &uxTicksToWait);
                        if(FALSE == boStatus)
                        {
                            boIsListEmpty = OS_Queue__boIsQueueEmpty(pstQueueReg);
                            if(FALSE != boIsListEmpty)
                            {
                                if(OS_QUEUE_IS_MUTEX == pstQueueReg->uxQueueType)
                                {
                                    OS_Task__vEnterCritical();
                                    {
                                        OS_Task__vPriorityInherit(pstQueueReg->pvMutexHolder);
                                    }
                                    OS_Task__vExitCritical();
                                }

                                OS_Task__vPlaceOnEventList(&(pstQueueReg->stTasksWaitingToReceive), uxTicksToWait);
                                OS_Adapt__vYieldWithinAPI();
                            }
                        }
                        else
                        {
                            OS_Task__vExitCritical();
                            return (OS_QUEUE_EMPTY);
                        }
                    }
                    OS_Task__vExitCritical();
                }
            }
        }
    }
    return (FALSE);
}


OS_Boolean_t OS_Queue__boAltPeek( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Queue__boAltGenericReceive(pvQueue, pvBuffer, uxTicksToWait, TRUE);
    return (boReturn);
}

OS_Boolean_t OS_Queue__boAltReceive( OS_Queue_Handle_t pvQueue,
                                       void* const pvBuffer,
                                       OS_UBase_t uxTicksToWait)
{
    OS_Boolean_t boReturn;
    boReturn = OS_Queue__boAltGenericReceive(pvQueue, pvBuffer, uxTicksToWait, FALSE);
    return (boReturn);
}

