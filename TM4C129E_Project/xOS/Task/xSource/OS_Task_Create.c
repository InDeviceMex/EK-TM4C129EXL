/**
 *
 * @file OS_Task_Create.c
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
#include <xOS/Task/xHeader/OS_Task_Create.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

#include <xOS/Task/Adapt/xHeader/OS_Adapt_Stack.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

static void OS_Task__vInitialiseTaskLists( void );


OS_UBase_t OS_Task__uxTaskGenericCreate(OS_Task_Function_Typedef pfvTaskCodeArg,
                                        const char * const pcNameArg,
                                        OS_UBase_t uxStackDepthArg,
                                        void * const pvParametersArg,
                                        OS_UBase_t uxPriorityArg,
                                        OS_Task_Handle_TypeDef * const pvCreatedTask,
                                        OS_UBase_t* const puxStaticStackBuffer)
{
    OS_Task_TCB_TypeDef * pstNewTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef * pstCurrentTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t *puxTopOfStackReg = (OS_UBase_t*) 0UL;
    OS_UBase_t uxCurrentNumberOfTask = 0UL;
    OS_UBase_t uxReturn = 1UL;
    OS_Boolean_t boSchedulerRunning = FALSE;

    if(0UL != (OS_UBase_t) pfvTaskCodeArg)
    {
        if(OS_TASK_MAX_PRIORITIES > uxPriorityArg)
        {
            uxStackDepthArg &= ~OS_ADAPT_BYTE_ALIGNMENT_MASK;
            pstNewTCB = OS_Task__pstAllocateTCBAndStack(uxStackDepthArg, puxStaticStackBuffer);

            if(0UL != (OS_UBase_t) pstNewTCB)
            {
                if(0UL ==(OS_ADAPT_BYTE_ALIGNMENT_MASK &
                         (OS_UBase_t) pstNewTCB->puxStack))
                {
                    pstNewTCB->puxEndOfStack = pstNewTCB->puxStack;
                    pstNewTCB->puxEndOfStack += uxStackDepthArg;
                    pstNewTCB->puxEndOfStack -= 1UL;

                    puxTopOfStackReg = pstNewTCB->puxEndOfStack;
                    OS_Task__vInitialiseTCBVariables(pstNewTCB,
                                                     pcNameArg,
                                                     uxPriorityArg);

                    pstNewTCB->puxTopOfStack = OS_Adapt__puxInitialiseStack(
                            puxTopOfStackReg,
                            (void (*)( void * pvParameters )) pfvTaskCodeArg,
                            (void*) pvParametersArg);

                    if(0UL != (OS_UBase_t) pvCreatedTask)
                    {
                        *pvCreatedTask = (OS_Task_Handle_TypeDef) pstNewTCB;
                    }

                    OS_Task__vEnterCritical();
                    {
                        OS_Task__vIncreaseCurrentNumberOfTasks();
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if(0UL == (OS_UBase_t) pstCurrentTCB )
                        {
                            OS_Task__vSetCurrentTCB(pstNewTCB);
                            uxCurrentNumberOfTask = OS_Task__uxGetCurrentNumberOfTasks();
                            if(1UL == uxCurrentNumberOfTask)
                            {
                                OS_Task__vInitialiseTaskLists();
                            }
                        }
                        else
                        {
                            boSchedulerRunning = OS_Task__boGetSchedulerRunning();
                            if(FALSE == boSchedulerRunning)
                            {
                                if( pstCurrentTCB->uxPriorityTask <= uxPriorityArg )
                                {
                                    OS_Task__vSetCurrentTCB(pstNewTCB);
                                }
                            }
                        }
                        OS_Task__vIncreaseTaskNumber();
                        pstNewTCB->uxTCBNumber = (OS_UBase_t) OS_Task__uxGetTaskNumber();
                        OS_Task__vAddTaskToReadyList(pstNewTCB);
                        uxReturn = 1UL;
                    }
                    OS_Task__vExitCritical();
                }
                else
                {
                    uxReturn = 2UL;
                }
            }
            else
            {
                uxReturn = 3UL;
            }

            if(1UL == uxReturn)
            {
                boSchedulerRunning = OS_Task__boGetSchedulerRunning();
                if(FALSE != boSchedulerRunning)
                {
                    if( pstCurrentTCB->uxPriorityTask < uxPriorityArg )
                    {
                        OS_Task__vYieldIfUsingPreemption();
                    }
                }
            }
        }
    }
    return (uxReturn);
}


static void OS_Task__vInitialiseTaskLists( void )
{
    OS_Task__vInitialiseReadyTaskLists();
    OS_Task__vInitialiseDelayedTaskLists();
    OS_Task__vInitialiseDeletedTaskLists();
    OS_Task__vInitialiseSuspendedTaskLists();
}
