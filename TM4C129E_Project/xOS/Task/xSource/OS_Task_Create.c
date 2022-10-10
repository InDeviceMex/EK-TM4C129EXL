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

#include <xOS/Adapt/xHeader/OS_Adapt_Stack.h>
#include <xOS/Task/xHeader/OS_Task_Ready.h>

static void OS_Task__vInitialiseTaskLists( void );


OS_UBase_t OS_Task__uxGenericCreate(OS_Task_Function_t pvfTaskCodeArg,
                                        const char * const pcNameArg,
                                        OS_UBase_t uxStackDepthArg,
                                        void * const pvParametersArg,
                                        OS_UBase_t uxPriorityArg,
                                        OS_Task_Handle_t * const pvCreatedTask,
                                        const OS_UBase_t* const puxStaticStackBuffer)
{
    OS_UBase_t uxReturn;

    uxReturn = 1UL;
    if(0UL != (OS_Pointer_t) pvfTaskCodeArg)
    {
        if(OS_TASK_MAX_PRIORITIES > uxPriorityArg)
        {
            OS_Task_TCB_t * pstCurrentTCB;
            OS_Task_TCB_t * pstNewTCB;
            OS_Boolean_t boSchedulerRunning;

            uxStackDepthArg &= ~OS_ADAPT_BYTE_ALIGNMENT_MASK;
            pstNewTCB = OS_Task__pstAllocateTCBAndStack(uxStackDepthArg, puxStaticStackBuffer);

            if(0UL != (OS_Pointer_t) pstNewTCB)
            {
                if(0UL ==(OS_ADAPT_BYTE_ALIGNMENT_MASK &
                         (OS_UBase_t) pstNewTCB->puxStack))
                {
                    OS_UBase_t *puxTopOfStackReg;

                    pstNewTCB->puxEndOfStack = pstNewTCB->puxStack;
                    pstNewTCB->puxEndOfStack += uxStackDepthArg;
                    pstNewTCB->puxEndOfStack -= 1UL;

                    puxTopOfStackReg = pstNewTCB->puxEndOfStack;
                    OS_Task__vInitialiseTCBVariables(pstNewTCB,
                                                     pcNameArg,
                                                     uxPriorityArg);

                    pstNewTCB->puxTopOfStack = OS_Adapt__puxInitialiseStack(
                            puxTopOfStackReg,
                            (void (*)(void *pvParametersArgument)) pvfTaskCodeArg,
                            (void*) pvParametersArg);

                    if(0UL != (OS_Pointer_t) pvCreatedTask)
                    {
                        *pvCreatedTask = (OS_Task_Handle_t) pstNewTCB;
                    }

                    OS_Task__vEnterCritical();
                    {
                        OS_Task__vIncreaseCurrentNumberOfTasks();
                        pstCurrentTCB = OS_Task__pstGetCurrentTCB();
                        if(0UL == (OS_UBase_t) pstCurrentTCB )
                        {
                            OS_UBase_t uxCurrentNumberOfTask;

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

OS_UBase_t OS_Task__uxCreate(OS_Task_Function_t pvfTaskCodeArg,
                                        const char * const pcNameArg,
                                        OS_UBase_t uxStackDepthArg,
                                        void * const pvParametersArg,
                                        OS_UBase_t uxPriorityArg,
                                        OS_Task_Handle_t * const pvCreatedTask)
{
    OS_UBase_t uxReturn;
    uxReturn = OS_Task__uxGenericCreate(pvfTaskCodeArg, pcNameArg, uxStackDepthArg, pvParametersArg,
                                        uxPriorityArg, pvCreatedTask, (const OS_UBase_t*) 0UL);
    return (uxReturn);
}


OS_UBase_t OS_Task__uxCreateRestricted(OS_Task_Parameters_t* pstTaskParametersArg, OS_Task_Handle_t* const pxCreatedTask)
{
    const char * const pcNameReg = pstTaskParametersArg->pcName;
    void * const pvParametersReg = pstTaskParametersArg->pvParameters;
    const OS_UBase_t* const puxStaticStackBuffer = pstTaskParametersArg->puxStackBuffer;
    OS_Task_Function_t pvfTaskCodeReg;
    OS_UBase_t uxStackDepthReg;
    OS_UBase_t uxPriorityReg;
    OS_UBase_t uxReturn;

    pvfTaskCodeReg = pstTaskParametersArg->pvfTaskCode;
    uxStackDepthReg = pstTaskParametersArg->uxStackDepth;
    uxPriorityReg = pstTaskParametersArg->uxPriority;
    uxReturn = OS_Task__uxGenericCreate(pvfTaskCodeReg, pcNameReg, uxStackDepthReg, pvParametersReg, uxPriorityReg, pxCreatedTask, puxStaticStackBuffer);
    return (uxReturn);
}

static void OS_Task__vInitialiseTaskLists( void )
{
    OS_Task__vInitialiseReadyTaskLists();
    OS_Task__vInitialiseDelayedTaskLists();
    OS_Task__vInitialiseDeletedTaskLists();
    OS_Task__vInitialiseSuspendedTaskLists();
}
