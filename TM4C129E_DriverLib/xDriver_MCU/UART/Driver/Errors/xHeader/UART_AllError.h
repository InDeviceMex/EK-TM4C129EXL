/**
 *
 * @file UART_AllError.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_ERRORS_XHEADER_UART_ALLERROR_H_
#define XDRIVER_MCU_UART_DRIVER_ERRORS_XHEADER_UART_ALLERROR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>

uint32_t UART__u32GetErrorState(UART_nMODULE enModule);
void UART__vClearErrorState(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_ERRORS_XHEADER_UART_ALLERROR_H_ */
