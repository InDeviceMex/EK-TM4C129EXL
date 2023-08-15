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
    OS_Boolean_t boResult;
    boResult = FALSE;
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Adapt__vEnterCritical();
        {
            OS_UBase_t uxLengthReg = pvQueue->uxLength;
            OS_UBase_t uxLength2Reg = pvQueue->uxLength - 1UL;
            OS_UBase_t uxTotalLenght = (OS_UBase_t) uxLengthReg;
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
                OS_List_t* pstListReg = &(pvQueue->stTasksWaitingToSend);
                OS_Boolean_t boEmptyList = OS_List__boIsEmpty(pstListReg);
                if(FALSE == boEmptyList)
                {
                    pstListReg = &(pvQueue->stTasksWaitingToSend);
                    OS_Boolean_t boRemoveItem = OS_Task__boRemoveFromEventList(pstListReg);
                    if(TRUE == boRemoveItem)
                    {
                        OS_Queue__vYieldIfUsingPreemption();
                    }
                }
            }
            else
            {
                /* Ensure the event queues start in the correct state. */
                OS_List_t* pstListReg = &(pvQueue->stTasksWaitingToSend);
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

OS_Boolean_t OS_Queue__boReset(OS_Queue_Handle_t pvQueueHandle)
{
    OS_Boolean_t boResult;
    boResult = OS_Queue__boGenericReset(pvQueueHandle, FALSE);
    return (boResult);

}
