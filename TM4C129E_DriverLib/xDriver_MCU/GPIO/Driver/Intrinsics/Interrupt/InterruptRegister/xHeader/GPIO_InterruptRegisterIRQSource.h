/**
 *
 * @file GPIO_InterruptRegisterIRQSource.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                     GPIO_nPORT enPort, GPIO_nPINMASK enPin);
void GPIO_DMA__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), GPIO_nPORT enPort);
void GPIO_SW__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), GPIO_nPORT enPort);
void GPIO_SW__vRegisterIRQSourceHandler_PQ(void (*pfIrqSourceHandler) (void),
                                           GPIO_nPORT enPort, GPIO_nPIN enPinNumber);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_ */
