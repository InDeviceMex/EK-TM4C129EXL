/**
 *
 * @file SCB_InterruptRegisterIRQSource_HardFault.h
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
 * @verbatim 18 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTREGISTER_XHEADER_SCB_INTERRUPTREGISTERIRQSOURCE_HARDFAULT_H_
#define XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTREGISTER_XHEADER_SCB_INTERRUPTREGISTERIRQSOURCE_HARDFAULT_H_

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Defines.h>

void SCB_HardFault__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                                  SCB_nHARD_BIT enInterruptParam);

#endif /* XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTREGISTER_XHEADER_SCB_INTERRUPTREGISTERIRQSOURCE_HARDFAULT_H_ */
