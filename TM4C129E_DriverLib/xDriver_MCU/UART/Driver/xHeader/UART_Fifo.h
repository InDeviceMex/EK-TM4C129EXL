/**
 *
 * @file UART_Fifo.h
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_FIFO_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_FIFO_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

void UART__vSetFifoRxLevel(UART_nMODULE enModule, UART_nFIFO_LEVEL enFifoLevelArg);
UART_nFIFO_LEVEL UART__enGetFifoRxLevel(UART_nMODULE enModule);

void UART__vSetFifoTxLevel(UART_nMODULE enModule, UART_nFIFO_LEVEL enFifoLevelArg);
UART_nFIFO_LEVEL UART__enGetFifoTxLevel(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_FIFO_H_ */
