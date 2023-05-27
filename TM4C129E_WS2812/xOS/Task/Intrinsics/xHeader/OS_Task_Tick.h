/**
 *
 * @file OS_Task_Tick.h
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
 * @verbatim 28 nov. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TICK_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TICK_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

OS_UBase_t OS_Task__uxGetTickCount_NotSafe(void);
void OS_Task__vSetTickCount(OS_UBase_t uxValueArg);
void OS_Task__vIncreaseTickCount(void);
OS_UBase_t OS_Task__uxGetPendedTicks(void);
void OS_Task__vSetPendedTicks(OS_UBase_t uxValueArg);
void OS_Task__vIncreasePendedTicks(void);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_TICK_H_ */
