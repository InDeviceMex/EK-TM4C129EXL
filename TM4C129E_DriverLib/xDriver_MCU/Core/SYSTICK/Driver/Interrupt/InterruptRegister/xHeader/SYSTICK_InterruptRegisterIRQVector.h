/**
 *
 * @file SYSTICK_InterruptRegisterIRQVector.h
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_

void SYSTICK__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void));

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSTICK_INTERRUPTREGISTERIRQVECTOR_H_ */
