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

UART_nERROR UART__enSetReceiveFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL enFifoLevelArg);
UART_nERROR UART__enGetReceiveFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL* penFifoLevelArg);

UART_nERROR UART__enSetTransmitFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL enFifoLevelArg);
UART_nERROR UART__enGetTransmitFifoLevel(UART_nMODULE enModuleArg, UART_nFIFO_LEVEL* penFifoLevelArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_FIFO_H_ */
