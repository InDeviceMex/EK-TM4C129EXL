/**
 *
 * @file OS_Queue_Set_.c
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Set_.h>

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Critical.h>

OS_Boolean_t OS_Queue__boRemoveFromSet(OS_Queue_SetMemberHandle_t pvfQueueOrSemaphore, OS_Queue_SetHandle_t pvfQueueSet)
{
    OS_Queue_t* const pvfQueueOrSemaphoreReg = (OS_Queue_t*) pvfQueueOrSemaphore;
    OS_Boolean_t boReturn;

    boReturn = FALSE;
    if(0UL !=  (OS_Pointer_t) pvfQueueOrSemaphoreReg)
    {
        if(pvfQueueSet != pvfQueueOrSemaphoreReg->pstQueueSetContainer)
        {
            /* The queue was not a member of the set. */
            boReturn = FALSE;
        }
        else if(0UL != pvfQueueOrSemaphoreReg->uxMessagesWaiting)
        {
            /* It is dangerous to remove a queue from a set when the queue is
            not empty because the queue set will still hold pending events for
            the queue. */
            boReturn = FALSE;
        }
        else
        {
            OS_Task__vEnterCritical();
            {
                /* The queue is no longer contained in the set. */
                pvfQueueOrSemaphoreReg->pstQueueSetContainer = (OS_Queue_t*) 0UL;
            }
            OS_Task__vExitCritical();
            boReturn = TRUE;
        }
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boAddToSet(OS_Queue_SetMemberHandle_t pvfQueueOrSemaphore, OS_Queue_SetHandle_t pvfQueueSet)
{
    OS_Queue_t* const pvfQueueOrSemaphoreReg = (OS_Queue_t*) pvfQueueOrSemaphore;
    OS_Boolean_t boReturn;

    boReturn = FALSE;
    if(0UL !=  (OS_Pointer_t) pvfQueueOrSemaphoreReg)
    {
        OS_Task__vEnterCritical();
        {
            if(0UL != (OS_Pointer_t) pvfQueueOrSemaphoreReg->pstQueueSetContainer)
            {
                /* Cannot add a queue/semaphore to more than one queue set. */
                boReturn = FALSE;
            }
            else if(0UL != pvfQueueOrSemaphoreReg->uxMessagesWaiting)
            {
                /* Cannot add a queue/semaphore to a queue set if there are already
                items in the queue/semaphore. */
                boReturn = FALSE;
            }
            else
            {
                pvfQueueOrSemaphoreReg->pstQueueSetContainer = (OS_Queue_t*) pvfQueueSet;
                boReturn = TRUE;
            }
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}




