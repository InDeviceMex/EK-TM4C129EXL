/**
 *
 * @file OS_Queue_Message.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Message.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

OS_UBase_t OS_Queue__uxMessagesWaiting(const OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;

    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        OS_Task__vEnterCritical();
        {
            uxReturn = pstQueueReg->uxMessagesWaiting;
        }
        OS_Task__vExitCritical();
    }
    return (uxReturn);
}

OS_UBase_t OS_Queue__uxMessagesWaitingFromISR(const OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;

    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        uxReturn = pstQueueReg->uxMessagesWaiting;
    }
    return (uxReturn);
}

OS_UBase_t OS_Queue__uxSpacesAvailable(const OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;

    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        OS_Task__vEnterCritical();
        {
            uxReturn = pstQueueReg->uxLength;
            uxReturn -= pstQueueReg->uxMessagesWaiting;
        }
        OS_Task__vExitCritical();
        }
    return (uxReturn);
}



