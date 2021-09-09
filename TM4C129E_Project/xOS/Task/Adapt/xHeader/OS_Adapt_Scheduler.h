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

#include <xOS/Task/Adapt/xHeader/OS_Adapt_Defines.h>

void OS_Adapt__vStartScheduler(OS_UBase_t uxUsPeriod);
void OS_Adapt__vEndScheduler(void);

#endif /* XOS_TASK_ADAPT_XHEADER_OS_ADAPT_SCHEDULER_H_ */
