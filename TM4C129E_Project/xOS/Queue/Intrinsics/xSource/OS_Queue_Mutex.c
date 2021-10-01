/**
 *
 * @file OS_Queue_Mutex.c
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
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Mutex.h>

#include <xOS/Adapt/OS_Adapt.h>

void* OS_Queue__pvGetMutexHolder(OS_Queue_Handle_TypeDef pvSemaphore)
{
    OS_Queue_TypeDef* pstSemaphore = (OS_Queue_TypeDef*) 0UL;
    void* pvReturn = (void*) 0UL;

    if(0UL != (OS_UBase_t) pvSemaphore)
    {
        pstSemaphore = (OS_Queue_TypeDef*) pvSemaphore;
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
