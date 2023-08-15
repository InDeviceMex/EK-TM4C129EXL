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
    OS_Boolean_t boReturn;
    boReturn = FALSE;
    if(0UL != (OS_Pointer_t) pstQueue)
    {
        OS_Task__vEnterCritical();
        {
            OS_UBase_t uxTempValue = pstQueue->uxLength;
            boReturn = (uxTempValue == pstQueue->uxMessagesWaiting) ? TRUE : FALSE;
        }
        OS_Task__vExitCritical();
    }
    return (boReturn);
}

OS_Boolean_t OS_Queue__boIsQueueFullFromISR(const OS_Queue_Handle_t* const pstQueue)
{
    OS_Boolean_t boReturn;
    boReturn = FALSE;
    if(0UL != (OS_Pointer_t) pstQueue)
    {
        const OS_Queue_t* pstQueueReg = (const OS_Queue_t*) pstQueue;
        OS_UBase_t uxTempValue = pstQueueReg->uxLength;
        boReturn = (uxTempValue  == pstQueueReg->uxMessagesWaiting) ? TRUE : FALSE;
    }
    return (boReturn);
}
