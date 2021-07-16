/**
 *
 * @file OS_Task_Delayed.h
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

#ifndef XOS_TASK_XHEADER_OS_TASK_DELAYED_H_
#define XOS_TASK_XHEADER_OS_TASK_DELAYED_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_Task__vAddCurrentTaskToDelayedList(const uint32_t u32TimeToWake);

void OS_Task__vSwitchDelayedLists(void);
void OS_Task__vInitialiseDelayedTaskLists(void);

OS_Task_List_Typedef* OS_Task__pstGetDelayedTaskListPointer(void);

/**TODO: check if this getter and setter need to be here*/
uint32_t OS_Task__u32GetNextTaskUnblockTime(void);
void OS_Task__vSetNextTaskUnblockTime(uint32_t u32ValueArg);

#endif /* XOS_TASK_XHEADER_OS_TASK_DELAYED_H_ */
