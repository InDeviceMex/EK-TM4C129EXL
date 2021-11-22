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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELAYED_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELAYED_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_List_t* OS_Task__pstGetOverflowDelayedTaskList(void);
OS_List_t* OS_Task__pstGetDelayedTaskList(void);

OS_UBase_t OS_Task__uxGetNextTaskUnblockTime(void);
void OS_Task__vSetNextTaskUnblockTime(OS_UBase_t uxValueArg);

OS_UBase_t OS_Task__uxGetNumOfOverflows(void);
void OS_Task__vSetNumOfOverflows(OS_UBase_t uxValueArg);

void OS_Task__vResetNextTaskUnblockTime(void);
void OS_Task__vInitialiseDelayedTaskLists(void);
void OS_Task__vSwitchDelayedLists(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_DELAYED_H_ */
