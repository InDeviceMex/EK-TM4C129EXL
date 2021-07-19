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

#ifndef XOS_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_
#define XOS_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_

#include <xOS/Adapt/xHeader/OS_Adapt_Defines.h>

void OS_Adapt__vYield(void);
void OS_Adapt__vYieldWithinAPI(void);
void OS_Adapt__vYieldFromISR(uint32_t u32Switch);
void OS_Adapt__vEndSwitchingISR( uint32_t u32SwitchRequired);

void OS_Adapt__vDisableInterrupts(void);
void OS_Adapt__vEnableInterrupts(void);
uint32_t OS_Adapt__u32IsInterruptActive(void);
void OS_Adapt__vClearInterruptMaskFromISR(uint32_t u32Mask);
void OS_Adapt__vSetInterruptMaskFromISR(void);

#endif /* XOS_ADAPT_XHEADER_OS_ADAPT_INTERRUPT_H_ */
