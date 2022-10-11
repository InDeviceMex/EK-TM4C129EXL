/**
 *
 * @file OS_Semaphore_Take.c
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
 * @verbatim 20 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Take.h>

#include <xOS/Queue/OS_Queue.h>

OS_Boolean_t OS_Semaphore__boTake(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime)
{
    OS_Boolean_t boResult;
    boResult = OS_Queue__boGenericReceive((OS_Queue_Handle_t) pvSemaphoreArg, (void*) NULL, uxBlockTime, FALSE);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boAltTake(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime)
{
    OS_Boolean_t boResult;
    boResult = OS_Queue__boAltGenericReceive((OS_Queue_Handle_t) pvSemaphoreArg, (void*) NULL, uxBlockTime, FALSE);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boTakeFromISR(OS_Semaphore_Handle_t pvSemaphoreArg,
                                         OS_Boolean_t* const pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boResult;
    boResult = OS_Queue__boReceiveFromISR((OS_Queue_Handle_t) pvSemaphoreArg, (void*) NULL, pboHigherPriorityTaskWoken);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boTakeRecursive(OS_Semaphore_Handle_t pvSemaphoreArg, OS_UBase_t uxBlockTime)
{
    OS_Boolean_t boResult;
    boResult = OS_Queue__boTakeMutexRecursive((OS_Queue_Handle_t) pvSemaphoreArg, uxBlockTime);
    return (boResult);
}
