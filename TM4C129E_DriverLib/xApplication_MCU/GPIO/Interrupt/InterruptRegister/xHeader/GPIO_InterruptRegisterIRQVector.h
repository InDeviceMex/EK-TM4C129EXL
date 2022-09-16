/**
 *
 * @file GPIO_InterruptRegisterIRQVector.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_
#define XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Defines.h>

void GPIO__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), GPIO_nPORT enPort);
void GPIO_PQ__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),
                                        GPIO_nPORT enPort,
                                        GPIO_nPIN enPinNumber);

void GPIO__vRegisterAll_IRQVectorHandler(void);

#endif /* XAPPLICATION_MCU_GPIO_INTERRUPT_INTERRUPTREGISTER_XHEADER_GPIO_INTERRUPTREGISTERIRQVECTOR_H_ */
