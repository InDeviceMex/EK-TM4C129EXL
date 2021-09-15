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

void OS_Task__vSetHookFunction(OS_Task_Handle_TypeDef pvTaskArg,
                               OS_Task_HookFunction_Typedef puxfHookFunctionArg)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstTCBCurrent = (OS_Task_TCB_TypeDef*) 0UL;

    if(0UL == (OS_UBase_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_Task_TCB_TypeDef*) pvTaskArg;
    }

    OS_Task__vEnterCritical();
    pstTCB->puxfHookFunction = puxfHookFunctionArg;
    OS_Task__vExitCritical();
}
OS_Task_HookFunction_Typedef OS_Task__puxfGetHookFunction(OS_Task_Handle_TypeDef pvTaskArg)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstTCBCurrent = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_HookFunction_Typedef puxfReturn = (OS_Task_HookFunction_Typedef) 0UL;

    if(0UL == (OS_UBase_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_Task_TCB_TypeDef *) pvTaskArg;
    }

    OS_Task__vEnterCritical();
    puxfReturn = pstTCB->puxfHookFunction;
    OS_Task__vExitCritical();

    return (puxfReturn);
}

OS_UBase_t OS_task__uxCallHookFunction(OS_Task_Handle_TypeDef pvTaskArg,
                                       void* pvParameterArg)
{
    OS_Task_TCB_TypeDef *pstTCB = (OS_Task_TCB_TypeDef*) 0UL;
    OS_Task_TCB_TypeDef *pstTCBCurrent = (OS_Task_TCB_TypeDef*) 0UL;
    OS_UBase_t uxReturn = 0UL;

    if(0UL == (OS_UBase_t) pvTaskArg)
    {
        pstTCBCurrent = OS_Task__pstGetCurrentTCB();
        pstTCB = pstTCBCurrent;
    }
    else
    {
        pstTCB = (OS_Task_TCB_TypeDef*) pvTaskArg;
    }

    if(0UL != (OS_UBase_t) pstTCB->puxfHookFunction)
    {
        uxReturn = pstTCB->puxfHookFunction(pvParameterArg);
    }

    return (uxReturn);
}
