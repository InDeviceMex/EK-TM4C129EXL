/**
 *
 * @file OS_Task_Critical.h
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
 * @verbatim 20 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CRITICAL_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CRITICAL_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vEnterCritical(void);
void OS_Task__vEnterCriticalFromISR(void);
void OS_Task__vExitCritical(void);
void OS_Task__vExitCriticalFromISR(OS_UBase_t uxMask);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_CRITICAL_H_ */
