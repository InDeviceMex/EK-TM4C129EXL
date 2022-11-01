/**
 *
 * @file OS_Queue_Messages.c
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
 * @verbatim 3 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Messages.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Lock_.h>
#include <xOS/Queue/xHeader/OS_Queue_Lock.h>
#include <xOS/Task/xHeader/OS_Task_Event.h>


void OS_Queue__vWaitForMessageRestricted(OS_Queue_Handle_t pvQueue,
                                         OS_UBase_t uxTicksToWait,
                                         const OS_Boolean_t boWaitIndefinitely)
{

    /* This function should not be called by application code hence the
    'Restricted' in its name.  It is not part of the public API.  It is
    designed for use by kernel code, and has special calling requirements.
    It can result in vListInsert() being called on a list that can only
    possibly ever have one item in it, so the list will be fast, but even
    so it should be called with the scheduler locked and not from a critical
    section. */

    /* Only do anything if there are no messages in the queue.  This function
    will not actually cause the task to block, just place it on a blocked
    list.  It will not block until the scheduler is unlocked - at which
    time a yield will be performed.  If an item is added to the queue while
    the queue is locked, and the calling task blocks on the queue, then the
    calling task will be immediately unblocked when the queue is unlocked. */
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Queue_t * pstQueueReg;
        pstQueueReg = ( OS_Queue_t * ) pvQueue;
        OS_Queue__vLock(pstQueueReg);
        if(0UL == pstQueueReg->uxMessagesWaiting)
        {
            /* There is nothing in the queue, block for the specified period. */
            OS_Task__vPlaceOnEventListRestricted(&(pstQueueReg->stTasksWaitingToReceive), uxTicksToWait, boWaitIndefinitely);
        }
        OS_Queue__vUnlock(pstQueueReg);
    }
}

