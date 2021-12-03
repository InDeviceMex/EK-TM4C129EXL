/**
 *
 * @file OS_Queue_Full.c
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
 * @verbatim 1 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Full.h>
#include <xOS/Task/OS_Task.h>

OS_Boolean_t OS_Queue__boIsQueueFull(const OS_Queue_t* pstQueue)
{
    OS_Boolean_t boReturn = FALSE;
    OS_UBase_t uxTempValue = 0UL;

    if(0UL != (OS_UBase_t) pstQueue)
    {
        OS_Task__vEnterCritical();
        {
            uxTempValue = pstQueue->uxLength;
            if(uxTempValue == pstQueue->uxMessagesWaiting)
            {
                boReturn = TRUE;
            }
            else
            {
                boReturn = FALSE;
            }
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boIsQueueFullFromISR(const OS_Queue_Handle_t* const pstQueue)
{
    OS_Boolean_t boReturn = FALSE;
    OS_UBase_t uxTempValue = 0UL;
    const OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;

    if(0UL != (OS_UBase_t) pstQueue)
    {
        pstQueueReg = (const OS_Queue_t*) pstQueue;
        uxTempValue = pstQueueReg->uxLength;
        if(uxTempValue  == pstQueueReg->uxMessagesWaiting)
        {
            boReturn = TRUE;
        }
        else
        {
            boReturn = FALSE;
        }
    }
    return (boReturn);
}
