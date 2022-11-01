/**
 *
 * @file OS_Task_Scheduler_.h
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
 * @verbatim 30 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SCHEDULER__H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SCHEDULER__H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_Task_Handle_t* OS_Task__pvGetIdleTaskHandle(void);

OS_UBase_t OS_Task__uxGetSchedulerSuspended(void);
void OS_Task__vSetSchedulerSuspended(OS_UBase_t uxValueArg);
void OS_Task__vIncreaseSchedulerSuspended(void);

OS_Boolean_t OS_Task__boGetSchedulerRunning(void);
void OS_Task__vSetSchedulerRunning(OS_Boolean_t boValueArg);

OS_Task_eScheduler OS_Task__enGetSchedulerState(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_SCHEDULER__H_ */
