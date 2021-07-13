/**
 *
 * @file UART_InterruptVector.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vEnInterruptVector(UART_nMODULE enModule, UART_nPRIORITY enUARTPriority);
void UART__vDisInterruptVector(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_ */
