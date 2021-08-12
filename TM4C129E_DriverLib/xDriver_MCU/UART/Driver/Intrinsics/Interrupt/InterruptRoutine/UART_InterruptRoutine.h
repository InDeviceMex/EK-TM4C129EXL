/**
 *
 * @file UART_InterruptRoutine.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_UART_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_UART_INTERRUPTROUTINE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module2.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module3.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module4.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module5.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module6.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module7.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>

void (*UART__pvfGetIRQVectorHandler(UART_nMODULE enUARTModule))(void);
void (**UART__pvfGetIRQVectorHandlerPointer(UART_nMODULE enUARTModule))(void);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_UART_INTERRUPTROUTINE_H_ */
