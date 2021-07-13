/**
 *
 * @file UART_Stop.h
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_STOP_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_STOP_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nSTOP UART__enGetStopBits(UART_nMODULE enModule);
void UART__vSetStopBits(UART_nMODULE enModule, UART_nSTOP enStopBitsArg);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_STOP_H_ */
