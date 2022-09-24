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

GPIO_nERROR GPIO__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                   GPIO_nPORT enPort,
                                                   GPIO_nPINMASK enPinMask);
GPIO_nERROR GPIO__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                     GPIO_nPORT enPort,
                                                     GPIO_nPIN enPin);

GPIO_nERROR GPIO_DMA__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                   GPIO_nPORT enPort,
                                                   GPIO_nPINMASK enPinMask);
GPIO_nERROR GPIO_DMA__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                 GPIO_nPORT enPort,
                                                 GPIO_nPIN enPin);

GPIO_nERROR GPIO_PQ__enRegisterIRQSourceHandlerByMask(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      GPIO_nPORT enPort,
                                                      GPIO_nPINMASK enPinMask);
GPIO_nERROR GPIO_PQ__enRegisterIRQSourceHandlerByNumber(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                        GPIO_nPORT enPort,
                                                        GPIO_nPIN enPin);

GPIO_nERROR GPIO_SW__enRegisterIRQSourceHandler(GPIO_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                 GPIO_nPORT enPort);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERIRQSOURCE_H_ */
