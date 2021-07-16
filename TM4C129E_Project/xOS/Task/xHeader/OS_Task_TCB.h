/**
 *
 * @file OS_Task_TCB.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_TCB_H_
#define XOS_TASK_XHEADER_OS_TASK_TCB_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

OS_TASK_TCB* OS_Task__pstAllocateTCBAndStack(const uint32_t u32StackDepth);

OS_TASK_TCB* OS_Task__pstGetCurrentTCB(void);
void OS_Task__vSetCurrentTCB(OS_TASK_TCB* pstNewTCB);

OS_Task_Handle_TypeDef OS_Task__pvGetCurrentTaskHandle(void);

OS_TASK_TCB* OS_Task__pstGetTCBFromHandle(OS_Task_Handle_TypeDef pxHandle);

void OS_Task__DeleteTCB(OS_TASK_TCB* pstTCB);

#endif /* XOS_TASK_XHEADER_OS_TASK_TCB_H_ */
