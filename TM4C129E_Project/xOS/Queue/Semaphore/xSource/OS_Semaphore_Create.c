/**
 *
 * @file OS_Semaphore_Create.c
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
#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Create.h>
#include <xOS/Queue/Semaphore/xHeader/OS_Semaphore_Give.h>

#include <xOS/Queue/OS_Queue.h>
#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

OS_Boolean_t OS_Semaphore__boCreateBinary(OS_Semaphore_Handle_t* pvSemaphoreArg)
{
    OS_Boolean_t boResult = FALSE;
    OS_Semaphore_Handle_t pvSemaphoreReg = (OS_Semaphore_Handle_t) 0UL;
    pvSemaphoreReg = OS_Queue__pvGenericCreate(OS_SEMAPHORE_BINARY_QUEUE_LENGTH, OS_SEMAPHORE_QUEUE_ITEM_LENGTH, OS_Queue_enType_BINARY_SEMAPHORE);
    if(0UL != (OS_UBase_t) pvSemaphoreReg)
    {
        boResult = TRUE;
        *pvSemaphoreArg = pvSemaphoreReg;
        (void) OS_Semaphore__boGive(pvSemaphoreReg);
    }
    return (boResult);
}

OS_Semaphore_Handle_t OS_Semaphore__pvCreateBinary(void)
{
    OS_Semaphore_Handle_t pvResult = (OS_Semaphore_Handle_t) 0UL;
    pvResult = OS_Queue__pvGenericCreate(OS_SEMAPHORE_BINARY_QUEUE_LENGTH, OS_SEMAPHORE_QUEUE_ITEM_LENGTH, OS_Queue_enType_BINARY_SEMAPHORE);
    return (pvResult);
}

OS_Semaphore_Handle_t OS_Semaphore__pvCreateMutex(void)
{
    OS_Semaphore_Handle_t pvResult = (OS_Semaphore_Handle_t) 0UL;
    pvResult = OS_Queue__pvCreateMutex(OS_Queue_enType_MUTEX);
    return (pvResult);
}

OS_Semaphore_Handle_t OS_Semaphore__pvCreateRecursiveMutex(void)
{
    OS_Semaphore_Handle_t pvResult = (OS_Semaphore_Handle_t) 0UL;
    pvResult = OS_Queue__pvCreateMutex(OS_Queue_enType_RECURSIVE_MUTEX);
    return (pvResult);
}

OS_Task_Handle_t OS_Semaphore__pvGetMutexHolder(OS_Semaphore_Handle_t pvSemaphoreArg)
{
    OS_Task_Handle_t pvResult = (OS_Task_Handle_t) 0UL;
    pvResult = OS_Queue__pvGetMutexHolder(pvSemaphoreArg);
    return (pvResult);
}



OS_Semaphore_Handle_t OS_Semaphore__pvCreateCounting(const OS_UBase_t uxMaxCount,
                                                     const OS_UBase_t uxInitialCount)
{
    OS_Semaphore_Handle_t pvResult = (OS_Semaphore_Handle_t) 0UL;
    pvResult = OS_Queue__pvCreateCountingSemaphore(uxMaxCount, uxInitialCount);
    return (pvResult);
}
