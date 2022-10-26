/**
 *
 * @file UART_BaudRate.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_BAUDRATE_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_BAUDRATE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetBaudRateIntegerPart(UART_nMODULE enModuleArg, UBase_t uxIntegerArg);
UART_nERROR UART__enGetBaudRateIntegerPart(UART_nMODULE enModuleArg, UBase_t* puxIntegerArg);

UART_nERROR UART__enSetBaudRateFractionalPart(UART_nMODULE enModuleArg, UBase_t uxFractionalArg);
UART_nERROR UART__enGetBaudRateFractionalPart(UART_nMODULE enModuleArg, UBase_t* puxFractionalArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_BAUDRATE_H_ */
