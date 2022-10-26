/**
 *
 * @file UART_SMART.h
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SMART_H_
#define XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SMART_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetSmartCardState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetSmartCardState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SMART_H_ */
