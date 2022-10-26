/**
 *
 * @file UART_Propierties.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_
#define XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enIsMultiDropSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg);
UART_nERROR UART__enIsSmartCardSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg);
UART_nERROR UART__enIsModemSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg);
UART_nERROR UART__enIsModemExtendedSupported(UART_nMODULE enModuleArg, UART_nBOOLEAN* pboStatusArg);

#endif /* XDRIVER_MCU_UART_DRIVER_XHEADER_UART_PROPIERTIES_H_ */
