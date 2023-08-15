/**
 *
 * @file OS_Queue_CoRoutine.c
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
#include <xOS/Queue/xHeader/OS_Queue_CoRoutine.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Full.h>
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Data.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Delayed.h>
#include <xOS/CoRoutine/xHeader/OS_CoRoutine_Event.h>
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringCopy.h>

#include <xOS/Adapt/OS_Adapt.h>

OS_UBase_t OS_Queue__boCoRoutineSend(OS_Queue_Handle_t pvQueue,
                                    const void* pvItemToQueue,
                                    OS_UBase_t uxTicksToWait)
{
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueue;

    /* If the queue is already full we may have to block.  A critical section
    is required to prevent an interrupt removing something from the queue
    between the check to see if the queue is full and blocking on the queue. */
    OS_UBase_t uxReturn;
    uxReturn = 0UL;
    OS_Adapt__vDisableInterrupts();
    {
        OS_Boolean_t boIsQueueFull = OS_Queue__boIsQueueFull(pstQueueReg);
        if(FALSE != boIsQueueFull)
        {
            /* The queue is full - do we want to block or just leave without
            posting? */
            if(0UL < uxTicksToWait)
            {
                /* As this is called from a coroutine we cannot block directly, but
                return indicating that we need to block. */
                OS_CoRoutine__vAddToDelayedList(uxTicksToWait, &(pstQueueReg->stTasksWaitingToSend));
                OS_Adapt__vEnableInterrupts();
                return (OS_QUEUE_BLOCKED);
            }
            else
            {
                OS_Adapt__vEnableInterrupts();
                return((OS_UBase_t) OS_QUEUE_FULL);
            }
        }
    }
    OS_Adapt__vEnableInterrupts();

    OS_Adapt__vDisableInterrupts();
    {
        OS_UBase_t uxTempValue = pstQueueReg->uxLength;
        if(pstQueueReg->uxMessagesWaiting < uxTempValue)
        {
            /* There is room in the queue, copy the data into the queue. */
            (void) OS_Queue__boCopyDataToQueue(pstQueueReg, pvItemToQueue, OS_Queue_enPos_SEND_TO_BACK);
            uxReturn = (OS_UBase_t) TRUE;

            /* Were any co-routines waiting for data to become available? */
            OS_Boolean_t boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToReceive));
            if(FALSE ==  boIsListEmpty)
            {
                /* In this instance the co-routine could be placed directly
                into the ready list as we are within a critical section.
                Instead the same pending ready list mechanism is used as if
                the event were caused from within an interrupt. */
                OS_Boolean_t boStatus = OS_CoRoutine__boRemoveFromEventList(&(pstQueueReg->stTasksWaitingToReceive));
                if(FALSE != boStatus)
                {
                    /* The co-routine waiting has a higher priority so record
                    that a yield might be appropriate. */
                    uxReturn = OS_QUEUE_YIELD;
                }
            }
        }
        else
        {
            uxReturn = (OS_UBase_t) OS_QUEUE_FULL;
        }
    }
    OS_Adapt__vEnableInterrupts();

    return (uxReturn);
}


OS_UBase_t OS_Queue__uxCoRoutineReceive(OS_Queue_Handle_t pvQueue,
                                        void *pvBuffer,
                                        OS_UBase_t uxTicksToWait)
{
    OS_Queue_t* const pstQueueReg = (OS_Queue_t*) pvQueue;

    /* If the queue is already empty we may have to block.  A critical section
    is required to prevent an interrupt adding something to the queue
    between the check to see if the queue is empty and blocking on the queue. */
    OS_UBase_t uxReturn;
    uxReturn = 0UL;
    OS_Adapt__vDisableInterrupts();
    {
        if(0UL == pstQueueReg->uxMessagesWaiting)
        {
            /* There are no messages in the queue, do we want to block or just
            leave with nothing? */
            if(0UL < uxTicksToWait)
            {
                /* As this is a co-routine we cannot block directly, but return
                indicating that we need to block. */
                OS_CoRoutine__vAddToDelayedList(uxTicksToWait, &(pstQueueReg->stTasksWaitingToReceive));
                OS_Adapt__vEnableInterrupts();
                return (OS_QUEUE_BLOCKED);
            }
            else
            {
                OS_Adapt__vEnableInterrupts();
                return ((OS_UBase_t) OS_QUEUE_FULL);
            }
        }
    }
    OS_Adapt__vEnableInterrupts();

    OS_Adapt__vDisableInterrupts();
    {
        if(0UL < pstQueueReg->uxMessagesWaiting)
        {
            /* Data is available from the queue. */
            pstQueueReg->ps8ReadFrom += pstQueueReg->uxItemSize;
            if( pstQueueReg->ps8ReadFrom >= pstQueueReg->ps8Tail )
            {
                pstQueueReg->ps8ReadFrom = pstQueueReg->ps8Head;
            }
            --( pstQueueReg->uxMessagesWaiting );
            (void) CONV_enMemoryCopy((void*) pvBuffer, (void*) (pstQueueReg->ps8ReadFrom), (size_t) pstQueueReg->uxItemSize);

            uxReturn = (OS_UBase_t) TRUE;

            /* Were any co-routines waiting for space to become available? */
            OS_Boolean_t boIsListEmpty = OS_List__boIsEmpty(&(pstQueueReg->stTasksWaitingToSend));
            if(FALSE == boIsListEmpty)
            {
                /* In this instance the co-routine could be placed directly
                into the ready list as we are within a critical section.
                Instead the same pending ready list mechanism is used as if
                the event were caused from within an interrupt. */
                OS_Boolean_t boStatus;
                boStatus = OS_CoRoutine__boRemoveFromEventList(&( pstQueueReg->stTasksWaitingToSend));
                if(FALSE != boStatus)
                {
                    uxReturn = OS_QUEUE_YIELD;
                }
            }
        }
        else
        {
            uxReturn = (OS_UBase_t) FALSE;
        }
    }
    OS_Adapt__vEnableInterrupts();

    return (uxReturn);
}

OS_Boolean_t OS_Queue__boCoRoutineSendFromISR(OS_Queue_Handle_t pvQueue,
                                              const void *pvItemToQueue,
                                              OS_Boolean_t boCoRoutinePreviouslyWoken)
{
    OS_Queue_t* const pstQueueReg = (OS_Queue_t*) pvQueue;

    /* Cannot block within an ISR so if there is no space on the queue then
    exit without doing anything. */
    OS_Boolean_t boReturn;
    boReturn = boCoRoutinePreviouslyWoken;
    if(pstQueueReg->uxMessagesWaiting < pstQueueReg->uxLength)
    {
        OS_Queue__boCopyDataToQueue(pstQueueReg, pvItemToQueue, OS_Queue_enPos_SEND_TO_BACK);

        /* We only want to wake one co-routine per ISR, so check that a
        co-routine has not already been woken. */
        if(FALSE == boCoRoutinePreviouslyWoken)
        {
            OS_Boolean_t boIsListEmpty = OS_List__boIsEmpty(&( pstQueueReg->stTasksWaitingToReceive));
            if(FALSE  == boIsListEmpty )
            {
                OS_Boolean_t boStatus = OS_CoRoutine__boRemoveFromEventList(&( pstQueueReg->stTasksWaitingToReceive));
                if(FALSE != boStatus)
                {
                    boReturn = TRUE;
                }
            }
        }
    }

    return (boReturn);
}

OS_Boolean_t OS_Queue__boCoRoutineReceiveFromISR(OS_Queue_Handle_t pvQueue,
                                                 void *pvBuffer,
                                                 OS_Boolean_t* pboCoRoutineWoken)
{
    OS_Queue_t * const pstQueueReg = (OS_Queue_t*) pvQueue;

    /* We cannot block from an ISR, so check there is data available. If
    not then just leave without doing anything. */
    OS_Boolean_t boReturn;
    if(0UL < pstQueueReg->uxMessagesWaiting)
    {
        /* Copy the data from the queue. */
        pstQueueReg->ps8ReadFrom += pstQueueReg->uxItemSize;
        if( pstQueueReg->ps8ReadFrom >= pstQueueReg->ps8Tail )
        {
            pstQueueReg->ps8ReadFrom = pstQueueReg->ps8Head;
        }
        --(pstQueueReg->uxMessagesWaiting);
        ( void ) CONV_enMemoryCopy((void*) pvBuffer, (void*) pstQueueReg->ps8ReadFrom, (size_t) pstQueueReg->uxItemSize);

        if(FALSE == (*pboCoRoutineWoken))
        {
            OS_Boolean_t boIsListEmpty = OS_List__boIsEmpty(&( pstQueueReg->stTasksWaitingToSend));
            if(FALSE == boIsListEmpty )
            {
                OS_Boolean_t boStatus = OS_CoRoutine__boRemoveFromEventList(&( pstQueueReg->stTasksWaitingToSend));
                if(FALSE != boStatus)
                {
                    *pboCoRoutineWoken = TRUE;
                }
            }
        }

        boReturn = TRUE;
    }
    else
    {
        boReturn = FALSE;
    }

    return (boReturn);
}
