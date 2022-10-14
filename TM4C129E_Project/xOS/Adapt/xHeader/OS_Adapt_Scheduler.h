/**
 *
 * @file OS_Adapt_Scheduler.h
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
 * @verbatim 9 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_ADAPT_XHEADER_OS_ADAPT_SCHEDULER_H_
#define XOS_TASK_ADAPT_XHEADER_OS_ADAPT_SCHEDULER_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>
#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

extern OS_Task_TCB_t* volatile* OS_Adapt_ppstCurrentTCB;

void OS_Adapt_vStartFirstTask(void);
void OS_Adapt_vSVCHandler(void);
void OS_Adapt_vPendSVHandler(void);
void OS_Adapt__vStartScheduler(OS_UBase_t uxUsPeriod);
void OS_Adapt__vEndScheduler(void);

#endif /* XOS_TASK_ADAPT_XHEADER_OS_ADAPT_SCHEDULER_H_ */
