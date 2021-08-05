/**
 *
 * @file OS_Task_ThreadLocalStoragePointers.c
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
 * @verbatim 29 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Attributes/xHeader/OS_Task_ThreadLocalStoragePointers.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

void OS_Task__vSetThreadLocalStoragePointer(OS_Task_Handle_TypeDef pvTaskToSet, uint32_t u32Index, void *pvValueArg)
{
    OS_TASK_TCB* pstTCB = (OS_TASK_TCB*) 0UL;

    if( u32Index < OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS )
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSet);
        pstTCB->pvThreadLocalStoragePointers[u32Index] = pvValueArg;
    }
}

void* OS_Task__pvGetThreadLocalStoragePointer(OS_Task_Handle_TypeDef pvTaskToQuery, uint32_t u32Index)
{
    void* pvReturn = (void*) 0UL;
    OS_TASK_TCB *pstTCB;

    if( u32Index < OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS )
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToQuery);
        pvReturn = pstTCB->pvThreadLocalStoragePointers[u32Index] ;
    }
    else
    {
        pvReturn = (void*) 0UL;
    }

    return (pvReturn);
}
