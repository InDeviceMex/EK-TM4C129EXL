/**
 *
 * @file OS_Task_HookFunction.h
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

#ifndef XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_HOOKFUNCTION_H_
#define XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_HOOKFUNCTION_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vSetHookFunction(OS_Task_Handle_TypeDef pvTaskArg,
                               OS_Task_HookFunction_Typedef puxfHookFunctionArg);
OS_Task_HookFunction_Typedef OS_Task__puxfGetHookFunction(OS_Task_Handle_TypeDef pvTaskArg);
OS_UBase_t OS_task__uxCallHookFunction(OS_Task_Handle_TypeDef pvTaskArg,
                                      void* pvParameterArg);

#endif /* XOS_TASK_ATTRIBUTES_XHEADER_OS_TASK_HOOKFUNCTION_H_ */
