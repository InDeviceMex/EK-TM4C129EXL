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

#ifndef XOS_TASK_XHEADER_OS_TASK_DELETED_H_
#define XOS_TASK_XHEADER_OS_TASK_DELETED_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_Task__vDelete(OS_Task_Handle_TypeDef pvTaskToDelete);

void OS_Task__vInitialiseDeletedTaskLists(void);
void OS_Task__vCheckTasksWaitingTermination(void);

#endif /* XOS_TASK_XHEADER_OS_TASK_DELETED_H_ */
