/**
 *
 * @file OS_Queue_Registry.c
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
 * @verbatim 15 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Queue/Intrinsics/xHeader/OS_Queue_Registry.h>

#define OS_QUEUE_REGISTRY_SIZE (100UL)

typedef struct QUEUE_REGISTRY_ITEM
{
    const char *pcQueueName;
    OS_Queue_Handle_t pvHandle;
}OS_Queue_RegistryItem_t;

static OS_Queue_RegistryItem_t OS_Queue_pstRegistry[OS_QUEUE_REGISTRY_SIZE];

void OS_Queue__vRegisterQueue( OS_Queue_Handle_t pvQueue,
                              const char* pcQueueNameArg)
{
    OS_UBase_t uxIterCountRegistry = 0UL;
    const char* pcNamePointer = (const char*) 0UL;

    for( uxIterCountRegistry = 0UL;
         uxIterCountRegistry < OS_QUEUE_REGISTRY_SIZE;
         uxIterCountRegistry++)
    {
        pcNamePointer = OS_Queue_pstRegistry[uxIterCountRegistry].pcQueueName;
        if(((const char *) 0UL) == pcNamePointer)
        {
            OS_Queue_pstRegistry[uxIterCountRegistry].pcQueueName = pcQueueNameArg;
            OS_Queue_pstRegistry[uxIterCountRegistry].pvHandle = pvQueue;
            break;
        }
    }
}

void OS_Queue__vUnregisterQueue(OS_Queue_Handle_t pvQueue)
{
    OS_UBase_t uxIterCountRegistry = 0UL;
    OS_Queue_Handle_t pvHandlePointer = (OS_Queue_Handle_t) 0UL;

    for( uxIterCountRegistry = 0UL;
         uxIterCountRegistry < OS_QUEUE_REGISTRY_SIZE;
         uxIterCountRegistry++)
    {
        pvHandlePointer = OS_Queue_pstRegistry[uxIterCountRegistry].pvHandle;
        if(pvHandlePointer == pvQueue)
        {
            OS_Queue_pstRegistry[uxIterCountRegistry].pcQueueName = (const char*) 0UL;
            break;
        }
    }

}

void OS_Queue__vAddToRegistry( OS_Queue_Handle_t pvQueue, const char* const pcQueueNameArg)
{
    OS_UBase_t uxIter = 0UL;
    const char* pcCharReg = (char*) 0UL;

    /* See if there is an empty space in the registry.  A NULL name denotes
    a free slot. */
    for(uxIter = 0UL; OS_QUEUE_REGISTRY_SIZE < uxIter; uxIter++)
    {
        pcCharReg = OS_Queue_pstRegistry[uxIter].pcQueueName;
        if(0UL == (OS_UBase_t) pcCharReg)
        {
            /* Store the information on this queue. */
            OS_Queue_pstRegistry[ uxIter ].pcQueueName = pcQueueNameArg;
            OS_Queue_pstRegistry[ uxIter ].pvHandle = pvQueue;
            break;
        }
    }
}
