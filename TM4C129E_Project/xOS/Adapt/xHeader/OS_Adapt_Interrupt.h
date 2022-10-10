/**
 *
 * @file OS_Adapt_Interrupt.h
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

#ifndef XOS_TASK_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_
#define XOS_TASK_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_

#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

void OS_Adapt__vYield(void);
void OS_Adapt__vYieldWithinAPI(void);
void OS_Adapt__vYieldFromISR(OS_Boolean_t boSwitch);
void OS_Adapt__vEndSwitchingISR(OS_Boolean_t boSwitchRequired);

void OS_Adapt__vDisableInterrupts(void);
void OS_Adapt__vEnableInterrupts(void);
OS_Boolean_t OS_Adapt__boIsInterruptActive(void);
void OS_Adapt__vClearInterruptMaskFromISR(OS_UBase_t uxMaskArg);
OS_UBase_t OS_Adapt__uxSetInterruptMaskFromISR(void);

#endif /* XOS_TASK_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_ */
