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
 * @verbatim 17 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_TASK_XHEADER_OS_TASK_INTERRUPT_H_
#define XOS_TASK_XHEADER_OS_TASK_INTERRUPT_H_

#include <xOS/Task/xHeader/OS_Task_Defines.h>

void OS_Task__vYield(void);
void OS_Task__vYieldWithinAPI(void);
void OS_Task__vYieldFromISR(uint32_t u32Switch);
void OS_Task__vEndSwitchingISR( uint32_t u32SwitchRequired);
void OS_Task__vDisableInterrupts(void);
void OS_Task__vEnableInterrupts(void);
uint32_t OS_Task__u32IsInterruptActive(void);
uint32_t OS_Task__u32SetInterruptMaskFromISR(void);
void OS_Task__vClearInterruptMaskFromISR(uint32_t u32Mask);

#endif /* XOS_TASK_XHEADER_OS_TASK_INTERRUPT_H_ */
