/**
 *
 * @file OS_Queue_Semaphore.c
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
 * @verbatim 17 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/xHeader/OS_Queue_Semaphore.h>

#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Create.h>

OS_Queue_Handle_t OS_Queue__pvCreateCountingSemaphore(const OS_UBase_t uxMaxCount,
                                                            const OS_UBase_t uxInitialCount)
{
    OS_Queue_Handle_t pvHandle;

    pvHandle = (OS_Queue_Handle_t) 0UL;
    if(0UL != uxMaxCount)
    {
        if(uxInitialCount <= uxMaxCount)
        {
            pvHandle = OS_Queue__pvGenericCreate(uxMaxCount,
                                                 OS_QUEUE_SEMAPHORE_ITEM_LENGTH,
                                                 OS_Queue_enType_COUNTING_SEMAPHORE);

            if(0UL != (OS_Pointer_t) pvHandle)
            {
                OS_Queue_t* pstHandle;
                pstHandle = (OS_Queue_t*) pvHandle;
                (pstHandle)->uxMessagesWaiting =  (OS_UBase_t) uxInitialCount;
            }
        }
    }
    return (pvHandle);
}


