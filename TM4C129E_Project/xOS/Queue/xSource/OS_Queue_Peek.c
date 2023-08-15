/**
 *
 * @file OS_Queue_Peek.c
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
#include <xOS/Queue/xHeader/OS_Queue_Peek.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Data.h>
#include <xOS/Adapt/OS_Adapt.h>

OS_Boolean_t OS_Queue__boPeekFromISR(OS_Queue_Handle_t pvQueue,  void* const pvBuffer)
{
    OS_Boolean_t boReturn;
    boReturn = FALSE;
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Queue_t* pstQueueReg = (OS_Queue_t*) pvQueue;
        if((0UL != (OS_Pointer_t) pvBuffer) || (0UL == pstQueueReg->uxItemSize))
        {
            if(0UL != pstQueueReg->uxItemSize)
            {
                OS_UBase_t uxSavedInterruptStatus = OS_Adapt__uxSetInterruptMaskFromISR();
                {
                    /* Cannot block in an ISR, so check there is data available. */
                    if(0UL < pstQueueReg->uxMessagesWaiting)
                    {
                        /* Remember the read position so it can be reset as nothing is
                        actually being removed from the queue. */
                        int8_t* ps8OriginalReadPosition = pstQueueReg->ps8ReadFrom;
                        OS_Queue__vCopyDataFromQueue(pstQueueReg, pvBuffer);
                        pstQueueReg->ps8ReadFrom = ps8OriginalReadPosition;

                        boReturn = TRUE;
                    }
                    else
                    {
                        boReturn = FALSE;
                    }
                }
                OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptStatus);
            }
        }
    }
    return (boReturn);
}


