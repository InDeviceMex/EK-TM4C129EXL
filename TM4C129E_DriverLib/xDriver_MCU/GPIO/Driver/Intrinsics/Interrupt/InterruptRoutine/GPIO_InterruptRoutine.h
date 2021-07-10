/**
 *
 * @file GPIO_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOA.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOB.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOC.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOD.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOE.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOF.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOG.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOH.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOJ.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOK.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOL.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOM.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPION.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOP.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOQ.h>

void (*GPIO__pvfGetIRQVectorHandler(GPIO_nPORT enGPIOPort))(void);
void (**GPIO__pvfGetIRQVectorHandlerPointer(GPIO_nPORT enGPIOPort))(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTROUTINE_GPIO_INTERRUPTROUTINE_H_ */
