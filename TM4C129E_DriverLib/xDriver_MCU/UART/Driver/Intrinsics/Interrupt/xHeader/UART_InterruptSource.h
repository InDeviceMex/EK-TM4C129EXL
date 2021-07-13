/**
 *
 * @file UART_InterruptSource.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vEnInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt);
void UART__vDisInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt);
void UART__vClearInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt);
UART_nINT_STATUS UART__enStatusInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt);

#endif /* XDRIVER_MCU_UART_DRIVER_INTRINSICS_INTERRUPT_XHEADER_UART_INTERRUPTSOURCE_H_ */
