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
 * @verbatim 21 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CREATE_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CREATE_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

uint32_t OS_Task__u32GetTaskNumber(void);
void OS_Task__vSetTaskNumber(uint32_t u32ValueArg);
void OS_Task__vIncreaseTaskNumber(void);

uint32_t OS_Task__u32GetCurrentNumberOfTasks(void);
void OS_Task__vIncreaseCurrentNumberOfTasks(void);
void OS_Task__vDecreaseCurrentNumberOfTasks(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CREATE_H_ */
