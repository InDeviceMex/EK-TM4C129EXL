/**
 *
 * @file OS_Task_Create.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_CREATE_H_
#define XOS_TASK_XHEADER_OS_TASK_CREATE_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

uint32_t OS_Task__u32TaskGenericCreate( OS_Task_Function_Typedef pfvTaskCodeArg, const char * const pcNameArg,
                                        const uint32_t u32StackDepthArg, void * const pvParametersArg, uint32_t u32PriorityArg,
                                        OS_Task_Handle_TypeDef * const pvCreatedTask );

#endif /* XOS_TASK_XHEADER_OS_TASK_CREATE_H_ */
