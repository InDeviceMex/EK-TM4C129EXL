/**
 *
 * @file UART_Modem.h
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
 * @verbatim 22 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_MODEM_H_
#define XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_MODEM_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enIsClearToSendAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);
UART_nERROR UART__enIsDataSetReadyAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);
UART_nERROR UART__enIsDataCarrierDetectAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);
UART_nERROR UART__enIsRingIndicatorAsserted(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);

#endif /* XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_MODEM_H_ */
