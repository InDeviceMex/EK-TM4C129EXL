/**
 *
 * @file OS_Task_Deleted.h
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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELETED_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELETED_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_Task_List_Typedef* OS_Task__pstGetTasksWaitingTermination(void);
uint32_t OS_Task__u32GetTasksDeleted(void);
void OS_Task__vSetTasksDeleted(uint32_t u32ValueArg);
void OS_Task__vIncreaseTasksDeleted(void);
void OS_Task__vDecreaseTasksDeleted(void);

void OS_Task__vInitialiseDeletedTaskLists(void);


#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELETED_H_ */
