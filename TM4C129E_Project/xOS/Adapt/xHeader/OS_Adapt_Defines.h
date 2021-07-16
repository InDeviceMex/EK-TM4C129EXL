/**
 *
 * @file OS_Adapt_Defines.h
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
 * @verbatim 15 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_ADAPT_XHEADER_OS_ADAPT_DEFINES_H_
#define XOS_ADAPT_XHEADER_OS_ADAPT_DEFINES_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>

#define OS_ADAPT_MAX_DELAY ((uint32_t) 0xFFFFFFFFUL)

#define OS_ADAPT_SYSCALL_INTERRUPT_PRIORITY (7UL)
#define OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY (5UL)
#define OS_ADAPT_MIN_SYSCALL_INTERRUPT_PRIORITY (OS_ADAPT_SYSCALL_INTERRUPT_PRIORITY - 5UL)

#define OS_ADAPT_YIELD()    SCB_PendSV__vSetPending()
#define OS_ADAPT_YIELD_WITHIN_API()    SCB_PendSV__vSetPending()
#define OS_ADAPT_END_SWITCHING_ISR(u32SwitchRequired)    OS_Adapt__vEndSwitchingISR(u32SwitchRequired)
#define OS_ADAPT_YIELD_FROM_ISR(u32Switch) OS_ADAPT_END_SWITCHING_ISR(u32Switch)

#define OS_ADAPT_DISABLE_INTERRUPTS() MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY)

#define OS_ADAPT_ENABLE_INTERRUPTS() MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) 0UL)

#define OS_ADAPT_IS_INTERRUPT_ACTIVE ( (uint32_t) SCB_ISR__enGetVectorActive())

#define OS_ADAPT_SET_INTERRUPT_MASK_FROM_ISR()    MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) OS_ADAPT_MAX_SYSCALL_INTERRUPT_PRIORITY)
#define OS_ADAPT_CLEAR_INTERRUPT_MASK_FROM_ISR(MASK)    MCU__enSetBasePriorityInterrupt((MCU_nPRIORITY) MASK)



/* Store/clear the ready priorities in a bit map. */
#define OS_ADAPT_RECORD_READY_PRIORITY(u32Priority, u32ReadyPriorities ) (u32ReadyPriorities) |= ((uint32_t) 1UL << (uint32_t)(u32Priority) )
#define OS_ADAPT_RESET_READY_PRIORITY(u32Priority, u32ReadyPriorities ) (u32ReadyPriorities) &= ~((uint32_t) 1UL << (uint32_t)(u32Priority) )

/*-----------------------------------------------------------*/

#define OS_ADAPT_GET_HIGHEST_PRIORITY(u32TopPriority, u32ReadyPriorities ) u32TopPriority = ( 31 - __clz( ( u32ReadyPriorities ) ) )

#endif /* XOS_ADAPT_XHEADER_OS_ADAPT_DEFINES_H_ */
