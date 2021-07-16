/**
 *
 * @file OS_Task_Priority.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_PRIORITY_H_
#define XOS_TASK_XHEADER_OS_TASK_PRIORITY_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_Task__vRecordReadyPriority(uint32_t u32PriorityArg);
void OS_Task__vResetReadyPriority(uint32_t u32PriorityArg);
uint32_t OS_Task__u32GetHighestPriority(void);

#endif /* XOS_TASK_XHEADER_OS_TASK_PRIORITY_H_ */
