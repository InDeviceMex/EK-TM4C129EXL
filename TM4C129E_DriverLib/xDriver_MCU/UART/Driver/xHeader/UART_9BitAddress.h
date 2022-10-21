/**
 *
 * @file UART_9BitAddress.h
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
#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_9BITADDRESS_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_9BITADDRESS_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void UART__vSet9BitMode(UART_nMODULE enModule, UART_nSTATE en9BitArg);
UART_nSTATE UART__enGet9BitMode(UART_nMODULE enModule);

void UART__vSetSelfAddress(UART_nMODULE enModule, UBase_t  uxAddressArg);
UBase_t UART__uxGetSelfAddress(UART_nMODULE enModule);

void UART__vSetSelfAddressMask(UART_nMODULE enModule, UBase_t  uxAddressMaskArg);
UBase_t UART__uxGetSelfAddressMask(UART_nMODULE enModule);

void UART__vSetSelfAddressWithMask(UART_nMODULE enModule, UBase_t  uxAddressArg,
                                   UBase_t  uxAddressMaskArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_9BITADDRESS_H_ */
