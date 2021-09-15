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

OS_Task_TCB_TypeDef* volatile OS_Task_pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;

OS_Task_TCB_TypeDef* volatile* OS_Task__pstGetCurrentTCBAddress(void)
{
    return (&OS_Task_pstCurrentTCB);
}

OS_Task_TCB_TypeDef* OS_Task__pstGetCurrentTCB(void)
{
    return (OS_Task_pstCurrentTCB);
}

void OS_Task__vSetCurrentTCB(OS_Task_TCB_TypeDef* pstNewTCB)
{
    OS_Task_pstCurrentTCB = pstNewTCB;
}

OS_Task_Handle_TypeDef OS_Task__pvGetCurrentTaskHandle(void)
{
    OS_Task_Handle_TypeDef pvReturn = (OS_Task_Handle_TypeDef) 0UL;

    pvReturn = (OS_Task_Handle_TypeDef) OS_Task_pstCurrentTCB;
    return (pvReturn);
}

OS_Task_TCB_TypeDef* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_TypeDef pxHandle)
{
    OS_Task_TCB_TypeDef* osTCBReg = (OS_Task_TCB_TypeDef*) 0UL;

    if(0UL == (OS_UBase_t) pxHandle)
    {
        osTCBReg = OS_Task_pstCurrentTCB;
    }
    else
    {
        osTCBReg = (OS_Task_TCB_TypeDef*) pxHandle;
    }
    return (osTCBReg);
}

OS_Task_TCB_TypeDef* OS_Task__pstAllocateTCBAndStack(const OS_UBase_t uxStackDepth,
                                                     OS_UBase_t* const puxStaticStackBuffer)
{
    OS_Task_TCB_TypeDef *pstNewTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t *puxStackReg = (OS_UBase_t*) 0UL;

    #if defined (__TI_ARM__ )
        puxStackReg = (OS_UBase_t*) memalign(OS_ADAPT_BYTE_ALIGNMENT_MASK + 1UL,
                                             (size_t) uxStackDepth * sizeof(OS_UBase_t));
    #elif defined (__GNUC__ )
    puxStackReg = (OS_UBase_t*) malloc(uxStackDepth * sizeof(OS_UBase_t));
    #endif

    if(0UL != (OS_UBase_t) puxStackReg)
    {
        #if defined (__TI_ARM__ )
        pstNewTCB = (OS_Task_TCB_TypeDef*) memalign(8UL, (size_t) sizeof(OS_Task_TCB_TypeDef));
        #elif defined (__GNUC__ )
        pstNewTCB = (OS_Task_TCB_TypeDef*) malloc(sizeof(OS_Task_TCB_TypeDef));
        #endif

        if(0UL != (OS_UBase_t) pstNewTCB)
        {
            pstNewTCB->puxStack = puxStackReg;
        }
        else
        {
            free(puxStackReg);
        }
    }
    else
    {
        pstNewTCB = (OS_Task_TCB_TypeDef*) 0UL;
    }
    return (pstNewTCB);
}

void OS_Task__vCheckStackOverflow(void)
{
    volatile OS_UBase_t* puxTopOfStackReg =  (OS_UBase_t*) 0UL;
    OS_UBase_t* puxStackReg = (OS_UBase_t*) 0UL;
    char* pcCurrentTCBName = (char*) 0UL;

    puxTopOfStackReg = OS_Task_pstCurrentTCB->puxTopOfStack;
    puxStackReg = OS_Task_pstCurrentTCB->puxStack;
    if( puxTopOfStackReg <= puxStackReg )
    {
        pcCurrentTCBName = OS_Task_pstCurrentTCB->pcTaskName;
        OS_External__vApplicationStackOverflowHook((OS_Task_Handle_TypeDef) OS_Task_pstCurrentTCB,
                                                    pcCurrentTCBName);
    }
}

void OS_Task__vInitialiseTCBVariables(OS_Task_TCB_TypeDef * const pstTCB,
                                      const char * pcTaskNameArg,
                                      OS_UBase_t uxPriorityArg)
{
    CDLinkedListItem_TypeDef* pstListItemReg = (CDLinkedListItem_TypeDef*) 0UL;
    char* pcNamePointer = (char*) 0UL;
    OS_UBase_t uxCount = 0UL;

    pcNamePointer = pstTCB->pcTaskName;
    while((0U != (uint8_t) *pcTaskNameArg) &&
          (uxCount < (OS_TASK_MAX_TASK_NAME_LEN - 1UL)))
    {
        *pcNamePointer = *pcTaskNameArg;
        pcNamePointer += 1UL;
        pcTaskNameArg += 1UL;
        uxCount++;
    }
    pstTCB->pcTaskName[uxCount] = (char) 0U;

    if(uxPriorityArg > OS_TASK_MAX_PRIORITIES)
    {
        uxPriorityArg = OS_TASK_MAX_PRIORITIES;
    }

    pstTCB->uxPriorityTask = (OS_UBase_t) uxPriorityArg;
    pstTCB->uxBasePriority = (OS_UBase_t) uxPriorityArg;
    pstTCB->uxMutexesHeld = 0UL;

    OS_List__vInitItem(&(pstTCB->stGenericListItem));
    OS_List__vInitItem(&(pstTCB->stEventListItem));

    pstListItemReg = &(pstTCB->stGenericListItem);
    OS_List__vSetItemOwner(pstListItemReg, ( void*) pstTCB);

    pstListItemReg = &(pstTCB->stEventListItem);
    OS_List__vSetItemValue(pstListItemReg,
               OS_TASK_MAX_PRIORITIES - uxPriorityArg);
    OS_List__vSetItemOwner(pstListItemReg, ( void*) pstTCB);

    pstTCB->uxCriticalNesting = 0UL;
    pstTCB->puxfHookFunction = (OS_Task_HookFunction_Typedef) 0UL;

    for( uxCount = 0UL;
         uxCount < (OS_UBase_t) OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS;
         uxCount++ )
    {
        pstTCB->pvThreadLocalStoragePointers[uxCount] = (void*) 0UL;
    }
    pstTCB->uxNotifiedValue = 0UL;
    pstTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
}
