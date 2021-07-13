/**
 *
 * @file UART_BaudRate_Register.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_REGISTER_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_REGISTER_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

void UART__vSetBaudRateIntegerPart(UART_nMODULE enModule, uint32_t u32Integer);
uint32_t UART__u32GetBaudRateIntegerPart(UART_nMODULE enModule);

void UART__vSetBaudRateFractionalPart(UART_nMODULE enModule, uint32_t u32Fractional);
uint32_t UART__u32GetBaudRateFractionalPart(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_REGISTER_H_ */
