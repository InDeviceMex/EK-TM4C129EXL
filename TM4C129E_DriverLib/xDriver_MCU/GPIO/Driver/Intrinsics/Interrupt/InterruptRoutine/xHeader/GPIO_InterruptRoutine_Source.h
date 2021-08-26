/**
 *
 * @file GPIO_InterruptRoutine_Source.h
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void (**GPIO__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort,
                                            GPIO_nPIN_NUMBER enPinNumber))(void);
void (*GPIO__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort,
                                    GPIO_nPIN_NUMBER enPinNumber))(void);

void (**GPIO_DMA__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort))(void);
void (*GPIO_DMA__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort))(void);

void (*GPIO_SW__pvfGetIRQSourceHandler(GPIO_nPORT enGPIOPort))(void);
void (**GPIO_SW__pvfGetIRQSourceHandlerPointer(GPIO_nPORT enGPIOPort))(void);

void (*GPIO_SW__pvfGetIRQSourceHandler_PQ(GPIO_nPORT enGPIOPort,
                                         GPIO_nPIN_NUMBER enPinNumber))(void);
void (**GPIO_SW__pvfGetIRQSourceHandlerPointer_PQ(GPIO_nPORT enGPIOPort,
                                                 GPIO_nPIN_NUMBER enPinNumber))(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_SOURCE_H_ */
