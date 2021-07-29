/**
 *
 * @file OS_Task_HookFunction.c
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
#include <xOS/Task/Attributes/xHeader/OS_Task_HookFunction.h>

#include <xOS/Task/Intrinsics/OS_Task_Intrinsics.h>

void OS_Task__vSetHookFunction(OS_Task_Handle_TypeDef pvTaskArg, OS_Task_HookFunction_Typedef pu32fHookFunctionArg)
{
    OS_TASK_TCB *pstTCB = (OS_TASK_TCB*) 0UL;
    OS_TASK_TCB *pstTCBCurrent = (OS_TASK_TCB*) 0UL;

    /* If pvTaskArg is NULL then it is the task hook of the calling task that is
    getting set. */
    if(0UL == (uint32_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_TASK_TCB*) pvTaskArg;
    }

    /* Save the hook function in the TCB.  A critical section is required as
    the value can be accessed from an interrupt. */
    OS_Task__vEnterCritical();
    pstTCB->pu32fHookFunction = pu32fHookFunctionArg;
    OS_Task__vExitCritical();
}
OS_Task_HookFunction_Typedef OS_Task__pu32fGetHookFunction(OS_Task_Handle_TypeDef pvTaskArg)
{
    OS_TASK_TCB *pstTCB;
    OS_TASK_TCB *pstTCBCurrent = (OS_TASK_TCB*) 0UL;
    OS_Task_HookFunction_Typedef pu32fReturn = (OS_Task_HookFunction_Typedef) 0UL;

    /* If pvTaskArg is NULL then we are setting our own task hook. */
    if(0UL == (uint32_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_TASK_TCB *) pvTaskArg;
    }

    /* Save the hook function in the TCB.  A critical section is required as
    the value can be accessed from an interrupt. */
    OS_Task__vEnterCritical();
    {
        pu32fReturn = pstTCB->pu32fHookFunction;
    }
    OS_Task__vExitCritical();

    return (pu32fReturn);
}

uint32_t OS_task__u32CallHookFunction(OS_Task_Handle_TypeDef pvTaskArg, void* pvParameterArg)
{
    OS_TASK_TCB *pstTCB;
    OS_TASK_TCB *pstTCBCurrent = (OS_TASK_TCB*) 0UL;
    uint32_t u32Return = 0UL;

    /* If pvTaskArg is NULL then we are calling our own task hook. */
    if(0UL == (uint32_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_TASK_TCB*) pvTaskArg;
    }

    if(0UL != (uint32_t) pstTCB->pu32fHookFunction)
    {
        u32Return = pstTCB->pu32fHookFunction(pvParameterArg);
    }

    return (u32Return);
}
