/**
 *
 * @file OS_Queue_Mutex_.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Mutex_.h>

#include <xOS/Adapt/OS_Adapt.h>

void* OS_Queue__pvGetMutexHolder(OS_Queue_Handle_t pvSemaphore)
{
    void* pvReturn;
    pvReturn = (void*) 0UL;
    if(0UL != (OS_Pointer_t) pvSemaphore)
    {
        OS_Queue_t* pstSemaphore = (OS_Queue_t*) pvSemaphore;
        OS_Adapt__vEnterCritical();
        {
            if(OS_QUEUE_IS_MUTEX == (pstSemaphore)->uxQueueType)
            {
                pvReturn = (void*) (pstSemaphore)->pvMutexHolder;
            }
        }
        OS_Adapt__vExitCritical();
    }
    return (pvReturn);
}
