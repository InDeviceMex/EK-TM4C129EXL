/**
 *
 * @file OS_Queue_Reset.c
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Reset.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Interrupt.h>
#include <xOS/Task/xHeader/OS_Task_Event.h>
#include <xOS/Adapt/OS_Adapt.h>

OS_Boolean_t OS_Queue__boGenericReset(OS_Queue_Handle_t pvQueueHandle,
                                      OS_Boolean_t boNewQueue)
{
    OS_Queue_t * const pvQueue = (OS_Queue_t *) pvQueueHandle;
    OS_List_t* pstListReg = (OS_List_t*) 0UL;
    OS_UBase_t uxLengthReg = 0UL;
    OS_UBase_t uxLength2Reg = 0UL;
    OS_UBase_t uxTotalLenght = 0UL;
    OS_Boolean_t boEmptyList = FALSE;
    OS_Boolean_t boRemoveItem = FALSE;
    OS_Boolean_t boResult = FALSE;

    if((OS_Queue_t*) 0UL != pvQueue)
    {
        OS_Adapt__vEnterCritical();
        {
            uxLengthReg = pvQueue->uxLength;
            uxLength2Reg = pvQueue->uxLength - 1UL;
            uxTotalLenght = (OS_UBase_t) uxLengthReg;
            uxTotalLenght *= pvQueue->uxItemSize;
            pvQueue->ps8Tail = pvQueue->ps8Head;
            pvQueue->ps8Tail += uxTotalLenght;

            pvQueue->uxMessagesWaiting = (OS_UBase_t) 0UL;
            pvQueue->ps8WriteTo = pvQueue->ps8Head;

            uxTotalLenght = uxLength2Reg;
            uxTotalLenght *= pvQueue->uxItemSize;
            pvQueue->ps8ReadFrom = pvQueue->ps8Head;
            pvQueue->ps8ReadFrom += uxTotalLenght;

            pvQueue->xRxLock = OS_QUEUE_UNLOCKED;
            pvQueue->xTxLock = OS_QUEUE_UNLOCKED;

            if(FALSE == boNewQueue)
            {
                pstListReg = &(pvQueue->stTasksWaitingToSend);
                boEmptyList = OS_List__boIsEmpty(pstListReg);
                if(FALSE == boEmptyList)
                {
                    pstListReg = &(pvQueue->stTasksWaitingToSend);
                    boRemoveItem = OS_Task__boRemoveFromEventList(pstListReg);
                    if(TRUE == boRemoveItem)
                    {
                        OS_Queue__vYieldIfUsingPreemption();
                    }
                }
            }
            else
            {
                /* Ensure the event queues start in the correct state. */
                pstListReg = &(pvQueue->stTasksWaitingToSend);
                OS_List__vInit(pstListReg);
                pstListReg = &(pvQueue->stTasksWaitingToReceive);
                OS_List__vInit(pstListReg);
            }
            boResult = TRUE;
        }
        OS_Adapt__vExitCritical();

    }
    return (boResult);
}
