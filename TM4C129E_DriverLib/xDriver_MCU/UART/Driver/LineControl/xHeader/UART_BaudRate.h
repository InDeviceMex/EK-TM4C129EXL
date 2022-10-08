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

#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BAUDRATE_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BAUDRATE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vSetBaudRateInteger(UART_nMODULE enModule, UBase_t uxInteger);
UBase_t UART__uxGetBaudRateInteger(UART_nMODULE enModule);

void UART__vSetBaudRateFractional(UART_nMODULE enModule, UBase_t uxFractional);
UBase_t UART__uxGetBaudRateFractional(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BAUDRATE_H_ */
