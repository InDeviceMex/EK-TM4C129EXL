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
 * @verbatim 20 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB.h>

#include <stdlib.h>
#include <xOS/External/OS_External.h>

OS_TASK_TCB *volatile OS_Task_pstCurrentTCB = (OS_TASK_TCB*) 0UL;

OS_TASK_TCB *volatile * OS_Task__pstGetCurrentTCBAddress(void)
{
    return (&OS_Task_pstCurrentTCB);
}

OS_TASK_TCB* OS_Task__pstGetCurrentTCB(void)
{
    return (OS_Task_pstCurrentTCB);
}

void OS_Task__vSetCurrentTCB(OS_TASK_TCB* pstNewTCB)
{
    OS_Task_pstCurrentTCB = pstNewTCB;
}

OS_Task_Handle_TypeDef OS_Task__pvGetCurrentTaskHandle(void)
{
    OS_Task_Handle_TypeDef pvReturn = (OS_Task_Handle_TypeDef) 0UL;

    /* A critical section is not required as this is not called from
    an interrupt and the current TCB will always be the same for any
    individual execution thread. */
    pvReturn = (OS_Task_Handle_TypeDef) OS_Task_pstCurrentTCB;

    return (pvReturn);
}

OS_TASK_TCB* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_TypeDef pxHandle)
{
    OS_TASK_TCB* osTCBReg = (OS_TASK_TCB*) 0UL;
    if(0UL == (uint32_t) pxHandle)
    {
        osTCBReg = OS_Task_pstCurrentTCB;
    }
    else
    {
        osTCBReg = (OS_TASK_TCB*) pxHandle;
    }

    return (osTCBReg);
}

OS_TASK_TCB* OS_Task__pstAllocateTCBAndStack(const uint32_t u32StackDepth)
{
    OS_TASK_TCB *pstNewTCB = (OS_TASK_TCB*) 0UL;
    uint32_t *pu32StackReg = (uint32_t*) 0UL;

    /* Allocate space for the stack used by the task being created. */
    #if defined (__TI_ARM__ )
    pu32StackReg = (uint32_t*) memalign( (size_t) 4, (size_t) u32StackDepth * sizeof(int32_t));
    #elif defined (__GNUC__ )
    pu32Stack = (uint32_t*) malloc(u32StackDepth * sizeof(int32_t));
    #endif

    if( pu32StackReg != NULL )
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
            pstNewTCB->pu32Stack = pu32StackReg;
        }
        else
        {
            /* The stack cannot be used as the TCB was not created.  Free it
            again. */
            free(pu32StackReg);
        }
    }
    else
    {
        pstNewTCB = (OS_TASK_TCB *) 0UL;
    }
    return (pstNewTCB);
}

void OS_Task__vCheckStackOverflow(void)
{
    volatile uint32_t* pu32TopOfStackReg =  (uint32_t*) 0UL;
    uint32_t* pu32StackReg = (uint32_t*) 0UL;
    char* pcCurrentTCBName = (char*) 0UL;
    /* Is the currently saved stack pointer within the stack limit? */
    pu32TopOfStackReg = OS_Task_pstCurrentTCB->pu32TopOfStack;
    pu32StackReg = OS_Task_pstCurrentTCB->pu32Stack;
    if( pu32TopOfStackReg <= pu32StackReg )
    {
        pcCurrentTCBName = OS_Task_pstCurrentTCB->pcTaskName;
        OS_External__vApplicationStackOverflowHook( ( OS_Task_Handle_TypeDef ) OS_Task_pstCurrentTCB, pcCurrentTCBName );
    }
}

void OS_Task__vInitialiseTCBVariables( OS_TASK_TCB * const pstTCB, const char * pcTaskNameArg,
                                       uint32_t u32PriorityArg)
{
    uint32_t u32Count = 0UL;
    char* pcNamePointer = (char*) 0UL;
    CDLinkedListItem_TypeDef* stListItemReg = (CDLinkedListItem_TypeDef*) 0UL;

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
    pstTCB->u32PriorityTask = (uint32_t) u32PriorityArg;


    pstTCB->u32BasePriority = (uint32_t) u32PriorityArg;
    pstTCB->u32MutexesHeld = 0UL;

    CDLinkedList_Item__vSetOwnerList(&(pstTCB->stGenericListItem), ( void*) 0UL);
    CDLinkedList_Item__vSetOwnerList(&(pstTCB->stEventListItem), ( void*) 0UL);

    /* Set the pstTCB as a link back from the ListItem_t.  This is so we can get
    back to the containing TCB from a generic item in a list. */
    stListItemReg = &(pstTCB->stGenericListItem);
    CDLinkedList_Item__vSetData(stListItemReg, ( void*) pstTCB);

    /* Event lists are always in priority order. */
    stListItemReg = &(pstTCB->stEventListItem);
    CDLinkedList_Item__vSetValue(stListItemReg, (uint32_t) OS_TASK_MAX_PRIORITIES - ( uint32_t ) u32PriorityArg);
    CDLinkedList_Item__vSetData(stListItemReg, pstTCB);

    pstTCB->u32CriticalNesting = 0UL;

    for( u32Count = 0UL; u32Count < (uint32_t) OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS; u32Count++ )
    {
        pstTCB->pvThreadLocalStoragePointers[ u32Count ] = (void*) 0UL;
    }

        pstTCB->u32NotifiedValue = 0UL;
        pstTCB->enNotifyState = OS_Task_enNotifyValue_NotWaitingNotification;
}
