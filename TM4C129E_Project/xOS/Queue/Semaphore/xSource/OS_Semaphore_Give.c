/**
 *
 * @file OS_Semaphore_Give.c
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
#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Give.h>

#include <xOS/Queue/OS_Queue.h>

OS_Boolean_t OS_Semaphore__boGive(OS_Semaphore_Handle_t pvSemaphoreArg)
{
    OS_Boolean_t boResult = FALSE;
    boResult = OS_Queue__boGenericSend((OS_Queue_Handle_t) pvSemaphoreArg, (void*) NULL, OS_SEMAPHORE_BLOCK_TIME, OS_Queue_enPos_SEND_TO_BACK);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boAltGive(OS_Semaphore_Handle_t pvSemaphoreArg)
{
    OS_Boolean_t boResult = FALSE;
    boResult = OS_Queue__boAltGenericSend((OS_Queue_Handle_t) pvSemaphoreArg, (void*) NULL, OS_SEMAPHORE_BLOCK_TIME, OS_Queue_enPos_SEND_TO_BACK);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boGiveFromISR(OS_Semaphore_Handle_t pvSemaphoreArg,
                                         OS_Boolean_t* const pboHigherPriorityTaskWoken)
{
    OS_Boolean_t boResult = FALSE;
    boResult = OS_Queue__boGiveFromISR((OS_Queue_Handle_t) pvSemaphoreArg, pboHigherPriorityTaskWoken);
    return (boResult);
}

OS_Boolean_t OS_Semaphore__boGiveRecursive(OS_Semaphore_Handle_t pvSemaphoreArg)
{
    OS_Boolean_t boResult = FALSE;
    boResult = OS_Queue__boGiveMutexRecursive((OS_Queue_Handle_t) pvSemaphoreArg);
    return (boResult);
}



