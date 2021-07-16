/**
 *
 * @file OS_Task_TCB.c
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/xHeader/OS_Task_TCB.h>

#include <stdlib.h>
#include <xOS/Task/xHeader/OS_Task_Suspended.h>

static void OS_Task_vInitialiseTCBVariables( OS_TASK_TCB * const pstTCB, const char * pcTaskNameArg,
                                       uint32_t u32PriorityArg);

OS_TASK_TCB * volatile pstCurrentTCB = (OS_TASK_TCB*) 0UL;


OS_TASK_TCB* OS_Task__pstGetCurrentTCB(void)
{
    return (pstCurrentTCB);
}

void OS_Task__vSetCurrentTCB(OS_TASK_TCB* pstNewTCB)
{
    pstCurrentTCB = pstNewTCB;
}

OS_Task_Handle_TypeDef OS_Task__pvGetCurrentTaskHandle(void)
{
    OS_Task_Handle_TypeDef pvReturn = (OS_Task_Handle_TypeDef) 0UL;

    /* A critical section is not required as this is not called from
    an interrupt and the current TCB will always be the same for any
    individual execution thread. */
    pvReturn = pstCurrentTCB;

    return pvReturn;
}

OS_TASK_TCB* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_TypeDef pxHandle)
{
    OS_TASK_TCB* osTCBReg = (OS_TASK_TCB*) 0UL;
    if(0UL == (uint32_t) pxHandle)
    {
        osTCBReg = pstCurrentTCB;
    }
    else
    {
        osTCBReg = (OS_TASK_TCB*) pxHandle;
    }

    return osTCBReg;
}


OS_TASK_TCB* OS_Task__pstAllocateTCBAndStack(const uint32_t u32StackDepth)
{
    OS_TASK_TCB *pstNewTCB;
    uint32_t *pu32Stack;

    /* Allocate space for the stack used by the task being created. */
    #if defined (__TI_ARM__ )
    pu32Stack = (uint32_t*) memalign( (size_t) 4, (size_t) u32StackDepth * sizeof(int32_t));
    #elif defined (__GNUC__ )
    pu32Stack = (uint32_t*) malloc(u32StackDepth * sizeof(int32_t));
    #endif

    if( pu32Stack != NULL )
    {
        /* Allocate space for the TCB.  Where the memory comes from depends
        on the implementation of the port malloc function. */
        #if defined (__TI_ARM__ )
        pstNewTCB = (OS_TASK_TCB*) memalign( (size_t) 8, (size_t) sizeof(OS_TASK_TCB));
        #elif defined (__GNUC__ )
        pstNewTCB = (OS_TASK_TCB*) malloc(sizeof(OS_TASK_TCB));
        #endif

        if( pstNewTCB != NULL )
        {
            /* Store the stack location in the TCB. */
            pstNewTCB->pu32Stack = pu32Stack;
        }
        else
        {
            /* The stack cannot be used as the TCB was not created.  Free it
            again. */
            free( pu32Stack );
        }
    }
    else
    {
        pstNewTCB = (OS_TASK_TCB *) 0UL;
    }
    return pstNewTCB;
}


static void OS_Task__DeleteTCB(OS_TASK_TCB* pstTCB)
{
    /**TODO: check is task suspend need to be called here*/

    OS_Task__vTaskSuspendAll();
    free(pstTCB->pu32Stack);
    free(pstTCB);
    OS_Task__u32TaskResumeAll();
}


static void OS_Task_vInitialiseTCBVariables( OS_TASK_TCB * const pstTCB, const char * pcTaskNameArg,
                                       uint32_t u32PriorityArg)
{
    uint32_t u32Count = 0UL;
    char* pcNamePointer = (char*) 0UL;

    pcNamePointer = pstTCB->pcTaskName;
    while((0U != (uint8_t) *pcTaskNameArg) && (u32Count < (OS_TASK_MAX_TASK_NAME_LEN - 1UL) ))
    {
        *pcNamePointer = *pcTaskNameArg;
        pcNamePointer += 1UL;
        pcTaskNameArg += 1UL;
        u32Count++;
    }
    pstTCB->pcTaskName[u32Count] = (char) 0U;

    if(u32PriorityArg > OS_TASK_MAX_PRIORITIES)
    {
        u32PriorityArg = OS_TASK_MAX_PRIORITIES;
    }
    pstTCB->u32Priority = (uint32_t) u32PriorityArg;


    pstTCB->u32BasePriority = u32PriorityArg;
    pstTCB->u32MutexesHeld = 0UL;

    CDLinkedList_Item__vSetOwnerList(&(pstTCB->stGenericListItem), 0UL);
    CDLinkedList_Item__vSetOwnerList(&(pstTCB->stEventListItem), 0UL);

    /* Set the pstTCB as a link back from the ListItem_t.  This is so we can get
    back to the containing TCB from a generic item in a list. */
    CDLinkedList_Item__vSetData(&(pstTCB->stGenericListItem), pstTCB);

    /* Event lists are always in priority order. */
    CDLinkedList_Item__vSetValue(&(pstTCB->stEventListItem), (uint32_t) OS_TASK_MAX_PRIORITIES - ( uint32_t ) u32PriorityArg);
    CDLinkedList_Item__vSetData(&(pstTCB->stEventListItem), pstTCB);

    pstTCB->u32CriticalNesting = 0UL;

    pstTCB->u32RunTimeCounter = 0UL;


    for( u32Count = 0; u32Count < (uint32_t) OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS; u32Count++ )
    {
        pstTCB->pvThreadLocalStoragePointers[ u32Count ] = NULL;
    }

        pstTCB->u32NotifiedValue = 0;
        pstTCB->enNotifyState = OS_Task_enNotifyValue_NotWaitingNotification;
}



