/**
 *
 * @file OS_Queue_Notify.c
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
#include <xOS/Queue/xHeader/OS_Queue_Notify.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Data.h>
#include <xOS/Task/xHeader/OS_Task_Event.h>

OS_Boolean_t OS_Queue__boNotifyQueueSetContainer(const OS_Queue_t * const pstQueue,
                                                 const OS_Queue_nPos enCopyPosition)
{
    OS_Queue_t* pstQueueSetContainerReg = (OS_Queue_t*) 0UL;
    OS_UBase_t uxMessagesWaitingReg = 0UL;
    OS_Boolean_t boReturn = FALSE;
    OS_Boolean_t boListEmpty = FALSE;
    OS_Boolean_t boRemoved = FALSE;
    uint8_t u8LengthReg = 0U;

    /* This function must be called form a critical section. */
    if(0UL != (OS_UBase_t) pstQueue)
    {
        pstQueueSetContainerReg = pstQueue->pstQueueSetContainer;
        if(0UL != (OS_UBase_t) pstQueueSetContainerReg)
        {
            uxMessagesWaitingReg = pstQueueSetContainerReg->uxMessagesWaiting;
            u8LengthReg = pstQueueSetContainerReg->u8Length;
            if(uxMessagesWaitingReg < u8LengthReg)
            {
                /* The data copied is the handle of the queue that contains data. */
                boReturn = OS_Queue__boCopyDataToQueue(pstQueueSetContainerReg,
                                                       &pstQueue,
                                                       enCopyPosition);

                if(OS_QUEUE_UNLOCKED == pstQueueSetContainerReg->xTxLock)
                {
                    boListEmpty = OS_List__boIsEmpty(&(pstQueueSetContainerReg->stTasksWaitingToReceive));
                    if(FALSE == boListEmpty)
                    {
                        boRemoved = OS_Task__boRemoveFromEventList(&(pstQueueSetContainerReg->stTasksWaitingToReceive));
                        if(FALSE != boRemoved)
                        {
                            /* The task waiting has a higher priority. */
                            boReturn = TRUE;
                        }
                    }
                }
                else
                {
                    (pstQueueSetContainerReg->xTxLock)++;
                }
            }
        }
    }
    return (boReturn);
}
