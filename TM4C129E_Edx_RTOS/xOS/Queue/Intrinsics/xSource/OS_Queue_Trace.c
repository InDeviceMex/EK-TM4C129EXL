/**
 *
 * @file OS_Queue_Trace.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Trace.h>

OS_UBase_t OS_Queue__uxGetQueueNumber(OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;
    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        uxReturn = pstQueueReg->uxQueueNumber;
    }
    return (uxReturn);
}

void OS_Queue__vSetQueueNumber(OS_Queue_Handle_t pvQueue,
                               OS_UBase_t uxQueueNumberReg)
{
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;
    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        pstQueueReg->uxQueueNumber = uxQueueNumberReg;

    }
}

OS_UBase_t OS_Queue__uxGetQueueType(OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxReturn = 0UL;
    OS_Queue_t* pstQueueReg = (OS_Queue_t*) 0UL;
    if(0UL != (OS_UBase_t) pvQueue)
    {
        pstQueueReg = (OS_Queue_t*) pvQueue;
        uxReturn = pstQueueReg->uxQueueType;
    }
    return (uxReturn);
}
