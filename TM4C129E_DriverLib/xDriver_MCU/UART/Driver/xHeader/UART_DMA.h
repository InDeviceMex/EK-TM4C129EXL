/**
 *
 * @file UART_DMA.h
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
 * @verbatim 7 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetReceiveDMAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetReceiveDMAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSetReceiveDMADisableOnError(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetReceiveDMADisableOnError(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSetTransmitDMAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetTransmitDMAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_ */
