/**
 *
 * @file UART_SIR.h
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_
#define XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vSetSIR(UART_nMODULE enModule, UART_nSIR enSirArg);
UART_nSIR UART__enGetSIR(UART_nMODULE enModule);
void UART__vSetSIRLowPower(UART_nMODULE enModule, UART_nSIR_LP enSirLPArg);
UART_nSIR_LP UART__enGetSIRLowPower(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_ */
