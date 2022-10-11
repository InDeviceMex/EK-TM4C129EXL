/**
 *
 * @file OS_Queue_Mutex.c
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
 * @verbatim 17 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Mutex.h>

#include <xOS/Queue/xHeader/OS_Queue_Send.h>
#include <xOS/Queue/xHeader/OS_Queue_Receive.h>

#include <stdlib.h>
#include <xOS/Adapt/OS_Adapt.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB.h>

OS_Queue_Handle_t OS_Queue__pvCreateMutex(const OS_Queue_nType enQueueTypeArg)
{
    OS_Queue_t* pstNewQueue;

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    pstNewQueue = (OS_Queue_t*) memalign(OS_ADAPT_BYTE_ALIGNMENT_MASK + 1UL,
                                               sizeof(OS_Queue_t));
#elif defined (__GNUC__ )
    pstNewQueue = (OS_Queue_t*) malloc(sizeof(OS_Queue_t));
#endif

    if(0UL != (OS_Pointer_t) pstNewQueue)
    {
        OS_List_t* pstListReg;
        /* Information required for priority inheritance. */
        pstNewQueue->pvMutexHolder = (void*) 0UL;
        pstNewQueue->uxQueueType = OS_QUEUE_IS_MUTEX;

        /* Queues used as a mutex no data is actually copied into or out
        of the queue. */
        pstNewQueue->ps8WriteTo = (int8_t*) 0UL;
        pstNewQueue->ps8ReadFrom = (int8_t*) 0UL;

        /* Each mutex has a length of 1 (like a binary semaphore) and
        an item size of 0 as nothing is actually copied into or out
        of the mutex. */
        pstNewQueue->uxMessagesWaiting = (OS_UBase_t) 0UL;
        pstNewQueue->uxLength = 1UL;
        pstNewQueue->uxItemSize = (OS_UBase_t) 0UL;
        pstNewQueue->xRxLock = OS_QUEUE_UNLOCKED;
        pstNewQueue->xTxLock = OS_QUEUE_UNLOCKED;

        pstNewQueue->enQueueTypeTrace = enQueueTypeArg;
        pstNewQueue->pstQueueSetContainer = (OS_Queue_t*) 0UL;

        pstListReg = &(pstNewQueue->stTasksWaitingToSend);
        OS_List__vInit(pstListReg);
        pstListReg = &(pstNewQueue->stTasksWaitingToReceive);
        OS_List__vInit(pstListReg);

        (void) OS_Queue__boGenericSend(pstNewQueue, (const void*) 0UL, 0UL, OS_Queue_enPos_SEND_TO_BACK);
    }

    return (pstNewQueue);
}

OS_Boolean_t OS_Queue__boGiveMutexRecursive(OS_Queue_Handle_t pvMutex)
{
    OS_Queue_t * const pstMutex = (OS_Queue_t *) pvMutex;
    OS_Boolean_t boReturn;

    boReturn = FALSE;
    if(0UL != (OS_Pointer_t) pstMutex)
    {
        /* If this is the task that holds the mutex then pvMutexHolder will not
        change outside of this task.  If this task does not hold the mutex then
        pvMutexHolder can never coincidentally equal the tasks handle, and as
        this is the only condition we are interested in it does not matter if
        pvMutexHolder is accessed simultaneously by another task.  Therefore no
        mutual exclusion is required to test the pvMutexHolder variable. */
        OS_Task_Handle_t pvTaskHandle;
        pvTaskHandle = OS_Task__pvGetCurrentTaskHandle();
        if( pstMutex->pvMutexHolder == pvTaskHandle)
        {
            /* uxRecursiveCallCount cannot be zero if pvMutexHolder is equal to
            the task handle, therefore no underflow check is required.  Also,
            uxRecursiveCallCount is only modified by the mutex holder, and as
            there can only be one, no mutual exclusion is required to modify the
            uxRecursiveCallCount member. */
            ( pstMutex->uxRecursiveCallCount )--;

            /* Have we unwound the call count? */
            if(0UL == pstMutex->uxRecursiveCallCount)
            {
                /* Return the mutex.  This will automatically unblock any other
                task that might be waiting to access the mutex. */
                (void) OS_Queue__boGenericSend(pstMutex, (const void *) 0UL,
                                            OS_QUEUE_MUTEX_GIVE_BLOCK_TIME,
                                            OS_Queue_enPos_SEND_TO_BACK);
            }
            boReturn = TRUE;
        }
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boTakeMutexRecursive(OS_Queue_Handle_t pvMutex,
                                            OS_UBase_t uxTicksToWait)
{
    OS_Queue_t* const pstMutex = (OS_Queue_t*) pvMutex;
    OS_Boolean_t boReturn;

    boReturn = FALSE;
    if(0UL != (OS_Pointer_t) pstMutex)
    {
        OS_Task_Handle_t pvTaskHandle;
        pvTaskHandle = OS_Task__pvGetCurrentTaskHandle();
        if( pstMutex->pvMutexHolder == pvTaskHandle )
        {
            (pstMutex->uxRecursiveCallCount)++;
            boReturn = TRUE;
        }
        else
        {
            boReturn = OS_Queue__boGenericReceive(pstMutex, (void*) 0UL, uxTicksToWait, FALSE);

            /* pdPASS will only be returned if the mutex was successfully
            obtained.  The calling task may have entered the Blocked state
            before reaching here. */
            if(TRUE == boReturn)
            {
                (pstMutex->uxRecursiveCallCount)++;
            }
        }
    }
    return (boReturn);
}
