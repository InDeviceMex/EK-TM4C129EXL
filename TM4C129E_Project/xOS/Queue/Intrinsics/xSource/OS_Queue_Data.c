/**
 *
 * @file OS_Queue_Data.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Data.h>

#include <xOS/Task/xHeader/OS_Task_Priority.h>
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringCopy.h>

OS_Boolean_t OS_Queue__boCopyDataToQueue(OS_Queue_t* const pstQueue,
                                         const void *pvItemToQueue,
                                         const OS_Queue_nPos enPosition)
{
    OS_Boolean_t boReturn = FALSE;
    size_t szItemSizeReg = 0UL;

    if(0UL == pstQueue->uxItemSize)
    {
        if(OS_QUEUE_IS_MUTEX == pstQueue->uxQueueType)
        {
            /* The mutex is no longer being held. */
            boReturn = OS_Task__boPriorityDisinherit((void*) pstQueue->pvMutexHolder);
            pstQueue->pvMutexHolder = (void*) 0UL;
        }
    }
    else if(OS_Queue_enPos_SEND_TO_BACK == enPosition)
    {
        szItemSizeReg = pstQueue->uxItemSize;
        (void) CONV_enMemoryCopy((void*) pstQueue->ps8WriteTo,
                      pvItemToQueue,
                      (size_t) szItemSizeReg);

        pstQueue->ps8WriteTo += pstQueue->uxItemSize;
        if(pstQueue->ps8WriteTo >= pstQueue->ps8Tail)
        {
            pstQueue->ps8WriteTo = pstQueue->ps8Head;
        }
    }
    else
    {
        szItemSizeReg = pstQueue->uxItemSize;
        (void) CONV_enMemoryCopy((void*) pstQueue->ps8ReadFrom,
                      pvItemToQueue,
                      (size_t) szItemSizeReg);

        pstQueue->ps8ReadFrom -= pstQueue->uxItemSize;
        if(pstQueue->ps8ReadFrom < pstQueue->ps8Head)
        {
            pstQueue->ps8ReadFrom = pstQueue->ps8Tail;
            pstQueue->ps8ReadFrom -= pstQueue->uxItemSize;
        }

        if(OS_Queue_enPos_OVERWRITE == enPosition)
        {
            if(0UL < pstQueue->uxMessagesWaiting)
            {
                /* An item is not being added but overwritten, so subtract
                one from the recorded number of items in the queue so when
                one is added again below the number of recorded items remains
                correct. */
                --(pstQueue->uxMessagesWaiting);
            }
        }
    }

    ++(pstQueue->uxMessagesWaiting);

    return (boReturn);
}

void OS_Queue__vCopyDataFromQueue(OS_Queue_t* const pstQueue,
                                  void* const pvBuffer)
{
    if(0UL != pstQueue->uxItemSize)
    {
        pstQueue->ps8ReadFrom += pstQueue->uxItemSize;
        if(pstQueue->ps8ReadFrom >= pstQueue->ps8Tail)
        {
            pstQueue->ps8ReadFrom = pstQueue->ps8Head;
        }
        (void) CONV_enMemoryCopy((void*) pvBuffer,
                      (void*) pstQueue->ps8ReadFrom,
                      (size_t) pstQueue->uxItemSize);
    }
}
