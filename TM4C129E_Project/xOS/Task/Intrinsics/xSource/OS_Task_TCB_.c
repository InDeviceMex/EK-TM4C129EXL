/**
 *
 * @file OS_Task_TCB_.c
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
#include <xOS/Task/Intrinsics/xHeader/OS_Task_TCB_.h>

#include <stdlib.h>
#include <xOS/External/OS_External.h>

static OS_Task_TCB_t* volatile OS_Task_pstCurrentTCB = (OS_Task_TCB_t*) 0UL;

OS_Task_TCB_t* volatile* OS_Task__pstGetCurrentTCBAddress(void)
{
    return (&OS_Task_pstCurrentTCB);
}

OS_Task_TCB_t* OS_Task__pstGetCurrentTCB(void)
{
    return (OS_Task_pstCurrentTCB);
}

void OS_Task__vSetCurrentTCB(OS_Task_TCB_t* pstNewTCB)
{
    OS_Task_pstCurrentTCB = pstNewTCB;
}

OS_Task_Handle_t OS_Task__pvGetCurrentTaskHandle(void)
{
    OS_Task_Handle_t pvReturn;
    pvReturn = (OS_Task_Handle_t) OS_Task_pstCurrentTCB;
    return (pvReturn);
}

OS_Task_TCB_t* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_t pxHandle)
{
    OS_Task_TCB_t* osTCBReg;

    if(0UL == (OS_Pointer_t) pxHandle)
    {
        osTCBReg = OS_Task_pstCurrentTCB;
    }
    else
    {
        osTCBReg = (OS_Task_TCB_t*) pxHandle;
    }
    return (osTCBReg);
}

OS_Task_TCB_t* OS_Task__pstAllocateTCBAndStack(const OS_UBase_t uxStackDepthArg,
                             const OS_UBase_t* const puxStaticStackBuffer)
{
    OS_UBase_t *puxStackReg;

    #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        puxStackReg = (OS_UBase_t*) memalign(OS_ADAPT_BYTE_ALIGNMENT_MASK + 1UL,
                                             (size_t) uxStackDepthArg * sizeof(OS_UBase_t));
    #elif defined (__GNUC__ )
        puxStackReg = (OS_UBase_t*) malloc(uxStackDepthArg * sizeof(OS_UBase_t));
    #endif

    OS_Task_TCB_t *pstNewTCB;
    if(0UL != (OS_Pointer_t) puxStackReg)
    {
        #if defined (__TI_ARM__ ) || defined (__MSP430__ )
        pstNewTCB = (OS_Task_TCB_t*) memalign(8UL, (size_t) sizeof(OS_Task_TCB_t));
        #elif defined (__GNUC__ )
        pstNewTCB = (OS_Task_TCB_t*) malloc(sizeof(OS_Task_TCB_t));
        #endif

        if(0UL != (OS_Pointer_t) pstNewTCB)
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
        pstNewTCB = (OS_Task_TCB_t*) 0UL;
    }
    return (pstNewTCB);
}

void OS_Task__vCheckStackOverflow(void)
{
    volatile OS_UBase_t* puxTopOfStackReg;
    puxTopOfStackReg = OS_Task_pstCurrentTCB->puxTopOfStack;
    OS_UBase_t* puxStackReg;
    puxStackReg = OS_Task_pstCurrentTCB->puxStack;
    if( puxTopOfStackReg <= puxStackReg )
    {
        char* pcCurrentTCBName = OS_Task_pstCurrentTCB->pcTaskName;
        OS_External__vApplicationStackOverflowHook((OS_Task_Handle_t) OS_Task_pstCurrentTCB,
                                                    pcCurrentTCBName);
    }
}

void OS_Task__vInitialiseTCBVariables(OS_Task_TCB_t * const pstTCB,
                                      const char * pcTaskNameArg,
                                      OS_UBase_t uxPriorityArg)
{
    char* pcNamePointer;
    OS_UBase_t uxCount;
    uxCount = 0UL;
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

    if(uxPriorityArg >= OS_TASK_MAX_PRIORITIES)
    {
        uxPriorityArg = OS_TASK_MAX_PRIORITIES - 1UL;
    }

    pstTCB->uxPriorityTask = (OS_UBase_t) uxPriorityArg;
    pstTCB->uxBasePriority = (OS_UBase_t) uxPriorityArg;
    pstTCB->uxMutexesHeld = 0UL;

    OS_List__vInitItem(&(pstTCB->stGenericListItem));
    OS_List__vInitItem(&(pstTCB->stEventListItem));

    CDLinkedListItem_t* pstListItemReg;
    pstListItemReg = &(pstTCB->stGenericListItem);
    OS_List__vSetItemOwner(pstListItemReg, ( void*) pstTCB);

    pstListItemReg = &(pstTCB->stEventListItem);
    OS_List__vSetItemValue(pstListItemReg,
               OS_TASK_MAX_PRIORITIES - uxPriorityArg);
    OS_List__vSetItemOwner(pstListItemReg, ( void*) pstTCB);

    pstTCB->uxCriticalNesting = 0UL;
    pstTCB->puxfTaskTag = (OS_Task_HookFunction_t) 0UL;

    for( uxCount = 0UL;
         uxCount < (OS_UBase_t) OS_TASK_NUM_THREAD_LOCAL_STORAGE_POINTERS;
         uxCount++ )
    {
        pstTCB->pvThreadLocalStoragePointers[uxCount] = (void*) 0UL;
    }
    pstTCB->uxNotifiedValue = 0UL;
    pstTCB->enNotifyState = OS_Task_enNotifyState_NotWaitingNotification;
}

