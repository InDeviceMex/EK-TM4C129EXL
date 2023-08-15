/**
 *
 * @file OS_Queue_Lock.c
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
 * @verbatim 4 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Lock.h>

#include <xOS/Queue/xHeader/OS_Queue_Notify.h>
#include <xOS/Task/OS_Task.h>

void OS_Queue__vUnlock(OS_Queue_t* const pstQueue)
{
    /* THIS FUNCTION MUST BE CALLED WITH THE SCHEDULER SUSPENDED. */

    /* The lock counts contains the number of extra data items placed or
    removed from the queue while the queue was locked.  When a queue is
    locked items can be added or removed, but the event lists cannot be
    updated. */
    OS_Task__vEnterCritical();
    {
        /* See if data was added to the queue while it was locked. */
        while(OS_QUEUE_LOCKED_UNMODIFIED < pstQueue->xTxLock)
        {
            /* Data was posted while the queue was locked.  Are any tasks
            blocked waiting for data to become available? */
            if(0UL != (OS_Pointer_t) pstQueue->pstQueueSetContainer)
            {
                OS_Boolean_t boNotifySet = OS_Queue__boNotifyQueueSetContainer(pstQueue,
                                              OS_Queue_enPos_SEND_TO_BACK);
                if(TRUE == boNotifySet)
                {
                    /* The queue is a member of a queue set, and posting to
                    the queue set caused a higher priority task to unblock.
                    A context switch is required. */
                    OS_Task__vMissedYield();
                }
            }
            else
            {
                /* Tasks that are removed from the event list will get added to
                the pending ready list as the scheduler is still suspended. */
                OS_List_t* pstWaitingToReceiveList = &(pstQueue->stTasksWaitingToReceive);
                OS_Boolean_t boListEmpty = OS_List__boIsEmpty(pstWaitingToReceiveList);
                if(FALSE == boListEmpty)
                {
                    OS_Boolean_t boEventList = OS_Task__boRemoveFromEventList(pstWaitingToReceiveList);
                    if(FALSE != boEventList)
                    {
                        /* The task waiting has a higher priority so record that a
                        context switch is required. */
                        OS_Task__vMissedYield();
                    }
                }
                else
                {
                    break;
                }
            }
            --(pstQueue->xTxLock);
        }
        pstQueue->xTxLock = OS_QUEUE_UNLOCKED;
    }
    OS_Task__vExitCritical();

    /* Do the same for the Rx lock. */
    OS_Task__vEnterCritical();
    {
        while(OS_QUEUE_LOCKED_UNMODIFIED < pstQueue->xRxLock)
        {
            OS_List_t* pstWaitingToSendList = &(pstQueue->stTasksWaitingToSend);
            OS_Boolean_t boListEmpty = OS_List__boIsEmpty(pstWaitingToSendList);
            if(FALSE == boListEmpty)
            {
                OS_Boolean_t boEventList = OS_Task__boRemoveFromEventList(pstWaitingToSendList);
                if(FALSE != boEventList)
                {
                    OS_Task__vMissedYield();
                }
                --(pstQueue->xRxLock);
            }
            else
            {
                break;
            }
        }
        pstQueue->xRxLock = OS_QUEUE_UNLOCKED;
    }
    OS_Task__vExitCritical();
}
