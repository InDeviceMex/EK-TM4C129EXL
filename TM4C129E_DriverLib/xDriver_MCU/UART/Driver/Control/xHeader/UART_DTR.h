/**
 *
 * @file UART_DTR.h
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
 * @verbatim 25 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_DTR_H_
#define XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_DTR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetDataTerminalReadyLevel(UART_nMODULE enModuleArg, UART_nLEVEL enLevelArg);
UART_nERROR UART__enGetDataTerminalReadyLevel(UART_nMODULE enModuleArg, UART_nLEVEL* penLevelArg);

#endif /* XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_DTR_H_ */
