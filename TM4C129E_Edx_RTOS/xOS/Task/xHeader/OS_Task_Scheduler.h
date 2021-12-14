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

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxGetTickCount(void);
OS_UBase_t OS_Task__uxGetTickCountFromISR(void);

OS_Boolean_t OS_Task__boIncrementTick(void);
void OS_Task__vSwitchContext(void);
void OS_Task__vStartScheduler(OS_UBase_t uxUsPeriod);
void OS_Task__vEndScheduler( void );

void OS_Task__vSetStepTick(const OS_UBase_t uxTicksToJump);

#endif /* XOS_TASK_XHEADER_OS_TASK_SCHEDULER_H_ */
