/**
 *
 * @file SYSCTL_InterruptRoutine.h
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
 * @verbatim 16 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTERRUPT_INTERRUPTROUTINE_SYSCTL_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTERRUPT_INTERRUPTROUTINE_SYSCTL_INTERRUPTROUTINE_H_

#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector.h>
#include <xDriver_MCU/SYSCTL/Driver/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>

void (*SYSCTL__pvfGetIRQVectorHandler(void))(void);
void (**SYSCTL__pvfGetIRQVectorHandlerPointer(void))(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTERRUPT_INTERRUPTROUTINE_SYSCTL_INTERRUPTROUTINE_H_ */
