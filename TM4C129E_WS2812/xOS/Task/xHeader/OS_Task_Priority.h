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

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxPriorityGet(OS_Task_Handle_t psTaskArg);
OS_UBase_t OS_Task__uxPriorityGetFromISR(OS_Task_Handle_t psTaskArg);
void OS_Task__vPrioritySet(OS_Task_Handle_t psTaskArg, OS_UBase_t uxNewPriority);

void OS_Task__vPriorityInherit(OS_Task_Handle_t const pvMutexHolderArg);
OS_Boolean_t OS_Task__boPriorityDisinherit(OS_Task_Handle_t const pvMutexHolderArg);

void* OS_Task__pvIncrementMutexHeldCount(void);

#endif /* XOS_TASK_XHEADER_OS_TASK_PRIORITY_H_ */
