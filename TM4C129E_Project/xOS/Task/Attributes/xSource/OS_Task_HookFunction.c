/**
 *
 * @file OS_Task_TaskTag.c
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

void OS_Task__vSetApplicationTaskTag(OS_Task_Handle_t pvTaskArg,
                               OS_Task_HookFunction_t puxfHookFunctionArg)
{
    OS_Task_TCB_t *pstTCB;
    if(0UL == (OS_Pointer_t) pvTaskArg)
    {
        pstTCB = OS_Task__pstGetCurrentTCB();
    }
    else
    {
        pstTCB = (OS_Task_TCB_t*) pvTaskArg;
    }

    OS_Task__vEnterCritical();
    pstTCB->puxfTaskTag = puxfHookFunctionArg;
    OS_Task__vExitCritical();
}
OS_Task_HookFunction_t OS_Task__puxfGetApplicationTaskTag(OS_Task_Handle_t pvTaskArg)
{
    OS_Task_TCB_t *pstTCB;
    if(0UL == (OS_Pointer_t) pvTaskArg)
    {
        pstTCB = OS_Task__pstGetCurrentTCB();
    }
    else
    {
        pstTCB = (OS_Task_TCB_t *) pvTaskArg;
    }

    OS_Task__vEnterCritical();
    OS_Task_HookFunction_t puxfReturn;
    puxfReturn = pstTCB->puxfTaskTag;
    OS_Task__vExitCritical();

    return (puxfReturn);
}

OS_UBase_t OS_task__uxCallApplicationTaskTag(OS_Task_Handle_t pvTaskArg,
                                       void* pvParameterArg)
{
    OS_Task_TCB_t *pstTCB;
    if(0UL == (OS_Pointer_t) pvTaskArg)
    {
        pstTCB = OS_Task__pstGetCurrentTCB();
    }
    else
    {
        pstTCB = (OS_Task_TCB_t*) pvTaskArg;
    }

    OS_UBase_t uxReturn;
    if(0UL != (OS_Pointer_t) pstTCB->puxfTaskTag)
    {
        uxReturn = pstTCB->puxfTaskTag(pvParameterArg);
    }
    else
    {
        uxReturn = 0UL;
    }

    return (uxReturn);
}
