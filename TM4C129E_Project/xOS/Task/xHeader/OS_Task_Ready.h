/**
 *
 * @file OS_Task_Ready.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_READY_H_
#define XOS_TASK_XHEADER_OS_TASK_READY_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vSelectHighestPriorityTask(void);
void OS_Task__vResetReadyPriority(OS_UBase_t uxPrioritArg);

void OS_Task__vAddTaskToReadyList(OS_Task_TCB_TypeDef* pstTCBArg);

#endif /* XOS_TASK_XHEADER_OS_TASK_READY_H_ */
