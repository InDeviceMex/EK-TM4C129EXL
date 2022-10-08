/**
 *
 * @file OS_Task_Priority.c
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
#include <xOS/Task/xHeader/OS_Task_Priority.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

OS_UBase_t OS_Task__uxPriorityGet(OS_Task_Handle_t psTaskArg)
{
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxReturn = 0UL;

    OS_Task__vEnterCritical();
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        uxReturn = pstTCB->uxPriorityTask;
    }
    OS_Task__vExitCritical();

    return (uxReturn);
}

OS_UBase_t OS_Task__uxPriorityGetFromISR(OS_Task_Handle_t psTaskArg)
{
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxSavedInterruptState = 0UL;
    OS_UBase_t uxReturn = 0UL;

    uxSavedInterruptState = OS_Adapt__uxSetInterruptMaskFromISR();
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);
        uxReturn = pstTCB->uxPriorityTask;
    }
    OS_Adapt__vClearInterruptMaskFromISR(uxSavedInterruptState);

    return (uxReturn);
}


void OS_Task__vPrioritySet(OS_Task_Handle_t psTaskArg, OS_UBase_t uxNewPriority)
{
    OS_List_t* pstReadyList = (OS_List_t*) 0UL;
    OS_Task_TCB_t *pstTCB = (OS_Task_TCB_t*) 0UL;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxCurrentBasePriority = 0UL;
    OS_UBase_t uxPriorityUsedOnEntry = 0UL;
    OS_UBase_t uxEventValue = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boYieldRequired = FALSE;
    OS_Boolean_t boIsListOwner = FALSE;

    if(OS_TASK_MAX_PRIORITIES <= uxNewPriority)
    {
        uxNewPriority = OS_TASK_MAX_PRIORITIES - 1UL;
    }

    OS_Task__vEnterCritical();
    {
        pstTCB = OS_Task__pstGetTCBFromHandle(psTaskArg);

        uxCurrentBasePriority = pstTCB->uxBasePriority;
        if(uxCurrentBasePriority != uxNewPriority)
        {
            pstCurrentTCB = OS_Task__pstGetCurrentTCB();
            if(uxNewPriority > uxCurrentBasePriority)
            {
                if(pstTCB != pstCurrentTCB)
                {
                    if( uxNewPriority >= pstCurrentTCB->uxPriorityTask )
                    {
                        boYieldRequired = TRUE;
                    }
                }
            }
            else if(pstTCB == pstCurrentTCB)
            {
                boYieldRequired = TRUE;
            }
            uxPriorityUsedOnEntry = pstTCB->uxPriorityTask;

            if( pstTCB->uxBasePriority == pstTCB->uxPriorityTask )
            {
                pstTCB->uxPriorityTask = (OS_UBase_t) uxNewPriority;
            }
            pstTCB->uxBasePriority = (OS_UBase_t) uxNewPriority;

            uxEventValue = OS_List__uxGetItemValue(&(pstTCB->stEventListItem));
            uxEventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == uxEventValue)
            {
                OS_List__vSetItemValue(&(pstTCB->stEventListItem),
                                       OS_TASK_MAX_PRIORITIES - uxNewPriority);
            }

            pstReadyList = OS_Task__pstGetReadyTasksLists(uxPriorityUsedOnEntry);
            boIsListOwner = OS_List__boIsContainedWithin(pstReadyList,
                                                         &(pstTCB->stGenericListItem));
            if(FALSE != boIsListOwner)
            {
                uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vAdaptResetReadyPriority(uxPriorityUsedOnEntry);
                }
                OS_Task__vAddTaskToReadyList(pstTCB);
            }

            if(TRUE == boYieldRequired)
            {
                OS_Task__vYieldIfUsingPreemption();
            }
            (void) uxPriorityUsedOnEntry;
        }
    }
    OS_Task__vExitCritical();

}

void OS_Task__vPriorityInherit(OS_Task_Handle_t const pvMutexHolderArg)
{
    OS_List_t* pstReadyList = (OS_List_t*) 0UL;
    OS_Task_TCB_t* const pstTCB = (OS_Task_TCB_t*) pvMutexHolderArg;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxEventValue = 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_Boolean_t boIsListOwner = FALSE;

    if(0UL != (OS_UBase_t) pvMutexHolderArg)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if( pstTCB->uxPriorityTask < pstCurrentTCB->uxPriorityTask )
        {
            uxEventValue = OS_List__uxGetItemValue(&(pstTCB->stEventListItem));
            uxEventValue &= OS_TASK_EVENT_LIST_ITEM_VALUE_IN_USE;
            if(0UL == uxEventValue)
            {
                OS_List__vSetItemValue(&(pstTCB->stEventListItem),
                           OS_TASK_MAX_PRIORITIES - pstCurrentTCB->uxPriorityTask);
            }

            pstReadyList = OS_Task__pstGetReadyTasksLists(pstTCB->uxPriorityTask);
            boIsListOwner = OS_List__boIsContainedWithin(pstReadyList,
                                                         &(pstTCB->stGenericListItem));
            if(FALSE != boIsListOwner)
            {
                uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                if(0UL == uxListSize)
                {
                    OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
                }
                pstTCB->uxPriorityTask = pstCurrentTCB->uxPriorityTask;
                OS_Task__vAddTaskToReadyList(pstTCB);
            }
            else
            {
                pstTCB->uxPriorityTask = pstCurrentTCB->uxPriorityTask;
            }
        }
    }
}

OS_Boolean_t OS_Task__boPriorityDisinherit(OS_Task_Handle_t const pvMutexHolderArg)
{
    OS_Task_TCB_t* const pstTCB = (OS_Task_TCB_t*) pvMutexHolderArg;
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;
    OS_UBase_t uxListSize = 0UL;
    OS_UBase_t uxPriorityReg = 0UL;
    OS_Boolean_t boReturn = FALSE;

    if(0UL != (UBase_t) pvMutexHolderArg)
    {
        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
        if(pstTCB == pstCurrentTCB)
        {
            if(0UL != pstTCB->uxMutexesHeld)
            {
                (pstTCB->uxMutexesHeld )--;
                if( pstTCB->uxPriorityTask != pstTCB->uxBasePriority )
                {
                    if( 0UL == pstTCB->uxMutexesHeld)
                    {
                        uxListSize = OS_List__uxRemove(&(pstTCB->stGenericListItem));
                        if(0UL == uxListSize)
                        {
                            OS_Task__vResetReadyPriority(pstTCB->uxPriorityTask);
                        }
                        pstTCB->uxPriorityTask = pstTCB->uxBasePriority;

                        uxPriorityReg = OS_TASK_MAX_PRIORITIES;
                        uxPriorityReg -= pstTCB->uxPriorityTask;
                        OS_List__vSetItemValue(&(pstTCB->stEventListItem), uxPriorityReg);
                        OS_Task__vAddTaskToReadyList(pstTCB);
                        boReturn = TRUE;
                    }
                }
            }
        }
    }
    return (boReturn);
}


void* OS_Task__pvIncrementMutexHeldCount(void)
{
    OS_Task_TCB_t *pstCurrentTCB = (OS_Task_TCB_t*) 0UL;

    pstCurrentTCB = OS_Task__pstGetCurrentTCB();
    if(0UL != (OS_UBase_t) pstCurrentTCB)
    {
        (pstCurrentTCB->uxMutexesHeld)++;
    }

    return (pstCurrentTCB);
}
