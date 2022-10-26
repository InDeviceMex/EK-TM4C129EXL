/**
 *
 * @file UART_FifoTx.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_FIFOTX_H_
#define XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_FIFOTX_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enIsTransmitFifoEmpty(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);
UART_nERROR UART__enIsTransmitFifoFull(UART_nMODULE enModuleArg, UART_nBOOLEAN* penStateArg);

#endif /* XDRIVER_MCU_UART_DRIVER_FLAGS_XHEADER_UART_FIFOTX_H_ */
