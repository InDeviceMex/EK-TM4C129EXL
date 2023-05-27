/**
 *
 * @file OS_Queue_Set.c
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
#include <xOS/Queue/xHeader/OS_Queue_Set.h>

#include <xOS/Queue/xHeader/OS_Queue_Receive.h>
#include <xOS/Queue/xHeader/OS_Queue_Send.h>
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Create.h>

OS_Queue_SetHandle_t OS_Queue__pvCreateSet(const OS_UBase_t uxEventQueueLengthArg)
{
    OS_Queue_SetHandle_t pxQueue;
    pxQueue = (OS_Queue_SetHandle_t) OS_Queue__pvGenericCreate(uxEventQueueLengthArg, (OS_UBase_t) sizeof(OS_Queue_t*), OS_Queue_enType_SET);
    return (pxQueue);
}

OS_Queue_SetMemberHandle_t OS_Queue__pvSelectFromSet(OS_Queue_SetHandle_t pvQueueSet,
                                               OS_UBase_t const uxTicksToWait)
{
    OS_Queue_SetMemberHandle_t pvReturn;
    pvReturn = (OS_Queue_SetMemberHandle_t) 0UL;
    (void) OS_Queue__boGenericReceive((OS_Queue_Handle_t) pvQueueSet, &pvReturn, uxTicksToWait, FALSE);
    return (pvReturn);
}

OS_Queue_SetMemberHandle_t OS_Queue__pvSelectFromSetFromISR(OS_Queue_SetHandle_t pvQueueSet)
{
    OS_Queue_SetMemberHandle_t pvReturn;
    pvReturn = (OS_Queue_SetMemberHandle_t) 0UL;
    (void) OS_Queue__boReceiveFromISR((OS_Queue_Handle_t) pvQueueSet, &pvReturn, (OS_Boolean_t*) 0UL);
    return (pvReturn);
}
