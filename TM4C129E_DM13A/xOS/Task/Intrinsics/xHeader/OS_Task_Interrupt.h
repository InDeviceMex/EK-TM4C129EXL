/**
 *
 * @file OS_Task_Interrupt.h
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

#ifndef XOS_TASK_INTRINSICS_XHEADER_OS_TASK_INTERRUPT_H_
#define XOS_TASK_INTRINSICS_XHEADER_OS_TASK_INTERRUPT_H_

#include <xOS/Task/Intrinsics/xHeader/OS_Task_Defines.h>

void OS_Task__vYield(void);
void OS_Task__vYieldWithinAPI(void);
void OS_Task__vYieldIfUsingPreemption(void);
void OS_Task__vYieldFromISR(OS_Boolean_t boSwitch);
void OS_Task__vEndSwitchingISR(OS_Boolean_t boSwitchRequired);
void OS_Task__vDisableInterrupts(void);
void OS_Task__vEnableInterrupts(void);
OS_Boolean_t OS_Task__boIsInterruptActive(void);
OS_UBase_t OS_Task__uxSetInterruptMaskFromISR(void);
void OS_Task__vClearInterruptMaskFromISR(OS_UBase_t uxMask);

#endif /* XOS_TASK_INTRINSICS_XHEADER_OS_TASK_INTERRUPT_H_ */
