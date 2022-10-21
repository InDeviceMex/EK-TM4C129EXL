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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_UART_LINECONTROL_BAUDRATE_UART_BAUDRATE_H_
#define XAPPLICATION_MCU_UART_LINECONTROL_BAUDRATE_UART_BAUDRATE_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>

UART_nERROR UART__enSetBaudRate(UART_nMODULE enModule, UBase_t uxBaudRateArg);
UBase_t UART__uxGetBaudRate(UART_nMODULE enModule);

#endif /* XAPPLICATION_MCU_UART_LINECONTROL_BAUDRATE_UART_BAUDRATE_H_ */
