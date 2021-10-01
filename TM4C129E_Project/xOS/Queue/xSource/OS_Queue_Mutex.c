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

#include <stdlib.h>
#include <xOS/Adapt/OS_Adapt.h>
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB.h>

OS_Queue_Handle_TypeDef OS_Queue__pvCreateMutex(const OS_Queue_nType enQueueTypeArg)
{
    OS_Queue_TypeDef* pstNewQueue = (OS_Queue_TypeDef*) 0UL;
    OS_List_TypeDef* pstListReg = (OS_List_TypeDef*) 0UL;

#if defined (__TI_ARM__ )
    pstNewQueue = (OS_Queue_TypeDef*) memalign(OS_ADAPT_BYTE_ALIGNMENT_MASK + 1UL,
                                               sizeof(OS_Queue_TypeDef));
#elif defined (__GNUC__ )
    pstNewQueue = (OS_Queue_TypeDef*) malloc(sizeof(OS_Queue_TypeDef));
#endif

    if(0UL != (OS_UBase_t) pstNewQueue)
    {
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
        pstNewQueue->u8Length = (uint8_t) 1U;
        pstNewQueue->uxItemSize = (OS_UBase_t) 0UL;
        pstNewQueue->xRxLock = OS_QUEUE_UNLOCKED;
        pstNewQueue->xTxLock = OS_QUEUE_UNLOCKED;

        pstNewQueue->enQueueTypeTrace = enQueueTypeArg;
        pstNewQueue->pstQueueSetContainer = (OS_Queue_TypeDef*) 0UL;

        pstListReg = &(pstNewQueue->stTasksWaitingToSend);
        OS_List__vInit(pstListReg);
        pstListReg = &(pstNewQueue->stTasksWaitingToReceive);
        OS_List__vInit(pstListReg);

        (void) OS_Queue__xGenericSend(pstNewQueue, NULL, 0UL, OS_Queue_enPos_SEND_TO_BACK);
    }

    return (pstNewQueue);
}

OS_Boolean_t OS_Queue__boGiveMutexRecursive(OS_Queue_Handle_TypeDef pvMutex)
{
    OS_Queue_TypeDef * const pstMutex = (OS_Queue_TypeDef *) pvMutex;
    OS_Task_Handle_TypeDef pvTaskHandle = (OS_Task_Handle_TypeDef) 0UL;
    OS_Boolean_t boReturn = FALSE;

    if(0UL != (OS_UBase_t) pstMutex)
    {
        /* If this is the task that holds the mutex then pvMutexHolder will not
        change outside of this task.  If this task does not hold the mutex then
        pvMutexHolder can never coincidentally equal the tasks handle, and as
        this is the only condition we are interested in it does not matter if
        pvMutexHolder is accessed simultaneously by another task.  Therefore no
        mutual exclusion is required to test the pvMutexHolder variable. */
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
                (void) OS_Queue__xGenericSend(pstMutex, NULL,
                                            OS_QUEUE_MUTEX_GIVE_BLOCK_TIME,
                                            OS_Queue_enPos_SEND_TO_BACK );
            }
            boReturn = TRUE;
        }
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boTakeMutexRecursive(OS_Queue_Handle_TypeDef pvMutex,
                                            OS_UBase_t uxTicksToWait)
{
    OS_Queue_TypeDef* const pstMutex = (OS_Queue_TypeDef*) pvMutex;
    OS_Task_Handle_TypeDef pvTaskHandle = (OS_Task_Handle_TypeDef) 0UL;
    OS_Boolean_t boReturn = FALSE;

    if(0UL != (OS_UBase_t) pstMutex)
    {
        pvTaskHandle = OS_Task__pvGetCurrentTaskHandle();
        if( pstMutex->pvMutexHolder == pvTaskHandle )
        {
            (pstMutex->uxRecursiveCallCount)++;
            boReturn = TRUE;
        }
        else
        {
            boReturn = OS_Queue__boGenericReceive(pstMutex, NULL, uxTicksToWait, FALSE);

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
