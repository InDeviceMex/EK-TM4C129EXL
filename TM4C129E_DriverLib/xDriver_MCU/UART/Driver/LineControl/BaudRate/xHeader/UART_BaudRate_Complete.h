/**
 *
 * @file UART_BaudRate_Complete.h
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
#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_COMPLETE_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_COMPLETE_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

UART_nSTATUS UART__enSetBaudRate(UART_nMODULE enModule, uint32_t u32BaudRateArg);
uint32_t UART__u32GetBaudRate(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_BAUDRATE_XHEADER_UART_BAUDRATE_COMPLETE_H_ */
