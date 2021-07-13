/**
 *
 * @file UART_DMA.h
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
#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vSetDMARx(UART_nMODULE enModule, UART_nDMA enDMAEnableArg);
UART_nDMA UART__enGetDMARx(UART_nMODULE enModule);

void UART__vSetDMATx(UART_nMODULE enModule, UART_nDMA enDMAEnableArg);
UART_nDMA UART__enGetDMATx(UART_nMODULE enModule);

void UART__vSetDMADisableOnError(UART_nMODULE enModule, UART_nDMA enDMAEnableArg);
UART_nDMA UART__enGetDMADisableOnError(UART_nMODULE enModule);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_DMA_H_ */
