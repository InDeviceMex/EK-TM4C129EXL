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

UART_nERROR UART__enSetMultiDropState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetMultiDropState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSetSelfAddress(UART_nMODULE enModuleArg, UBase_t uxAddressArg);
UART_nERROR UART__enGetSelfAddress(UART_nMODULE enModuleArg, UBase_t* puxAddressArg);

UART_nERROR UART__enSetSelfAddressMask(UART_nMODULE enModuleArg, UBase_t uxAddressMaskArg);
UART_nERROR UART__enGetSelfAddressMask(UART_nMODULE enModuleArg, UBase_t* puxAddressMaskArg);

UART_nERROR UART__enSetSelfAddressWithMask(UART_nMODULE enModuleArg, UBase_t uxAddressArg, UBase_t uxAddressMaskArg);
UART_nERROR UART__enGetSelfAddressWithMask(UART_nMODULE enModuleArg, UBase_t* puxAddressArg, UBase_t* puxAddressMaskArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_9BITADDRESS_H_ */
