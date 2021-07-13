/**
 *
 * @file UART_ClockConfig.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_CLOCKCONFIG_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_CLOCKCONFIG_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vSetClockConfig(UART_nMODULE enModule, UART_nCLOCK enClock);
UART_nCLOCK UART__enGetClockConfig(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_CLOCKCONFIG_H_ */
