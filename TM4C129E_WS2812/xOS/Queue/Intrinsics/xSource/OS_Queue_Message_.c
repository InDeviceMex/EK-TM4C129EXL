/**
 *
 * @file OS_Queue_Message_.c
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Message_.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

OS_UBase_t OS_Queue__uxMessagesWaiting(const OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn;

    uxReturn = 0UL;
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Queue_t* pstQueueReg;
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
    OS_UBase_t uxReturn;

    uxReturn = 0UL;
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Queue_t* pstQueueReg;
        pstQueueReg = (OS_Queue_t*) pvQueue;
        uxReturn = pstQueueReg->uxMessagesWaiting;
    }
    return (uxReturn);
}

OS_UBase_t OS_Queue__uxSpacesAvailable(const OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn;

    uxReturn = 0UL;
    if(0UL != (OS_Pointer_t) pvQueue)
    {
        OS_Queue_t* pstQueueReg;
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
