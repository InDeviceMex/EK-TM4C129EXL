/**
 *
 * @file OS_Task_Scheduler.h
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
 * @verbatim 16 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_XHEADER_OS_TASK_SCHEDULER_H_
#define XOS_TASK_XHEADER_OS_TASK_SCHEDULER_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_Task__vSetTickCount(uint32_t u32ValueArg);
uint32_t OS_Task__u32GetTickCount(void);

uint32_t OS_Task__u32GetSchedulerSuspended(void);
void OS_Task__vSetSchedulerSuspended(uint32_t u32ValueArg);
void OS_Task__vIncreaseSchedulerSuspended(void);

uint32_t OS_Task__u32GetSchedulerRunning(void);
void OS_Task__vSetSchedulerRunning(uint32_t u32ValueArg);
void OS_Task__vIncreaseSchedulerRunning(void);

uint32_t OS_Task__u32TaskIncrementTick(void);


void OS_Task__vSwitchContext(void);

void OS_Task__vStartScheduler(uint32_t u32UsPeriod);
void OS_Task__vEndScheduler( void );

#endif /* XOS_TASK_XHEADER_OS_TASK_SCHEDULER_H_ */
