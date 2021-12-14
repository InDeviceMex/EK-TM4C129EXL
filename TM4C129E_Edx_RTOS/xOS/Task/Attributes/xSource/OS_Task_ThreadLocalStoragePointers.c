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

void OS_Task__vSetThreadLocalStoragePointer(OS_Task_Handle_t pvTaskToSet,
                                            OS_UBase_t uxIndex,
                                            void *pvValueArg)
{
    OS_Task_TCB_t* pstTCB = (OS_Task_TCB_t*) 0UL;

    if( uxIndex < OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS )
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToSet);
        pstTCB->pvThreadLocalStoragePointers[uxIndex] = pvValueArg;
    }
}

void* OS_Task__pvGetThreadLocalStoragePointer(OS_Task_Handle_t pvTaskToQuery,
                                              OS_UBase_t uxIndex)
{
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    void* pvReturn = (void*) 0UL;

    if( uxIndex < OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS )
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(pvTaskToQuery);
        pvReturn = pstTCB->pvThreadLocalStoragePointers[uxIndex] ;
    }
    else
    {
        pvReturn = (void*) 0UL;
    }

    return (pvReturn);
}
