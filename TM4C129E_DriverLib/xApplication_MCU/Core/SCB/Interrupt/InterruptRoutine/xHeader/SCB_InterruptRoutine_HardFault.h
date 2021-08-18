/**
 *
 * @file SCB_InterruptRoutine_HardFault.h
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
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_HARDFAULT_H_
#define XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_HARDFAULT_H_

__attribute__((naked))
void HardFault__vIRQVectorHandler(void);

#endif /* XAPPLICATION_MCU_CORE_SCB_INTERRUPT_INTERRUPTROUTINE_XHEADER_SCB_INTERRUPTROUTINE_HARDFAULT_H_ */
