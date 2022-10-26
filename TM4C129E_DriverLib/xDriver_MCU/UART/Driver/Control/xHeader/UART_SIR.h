/**
 *
 * @file UART_SIR.h
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
#ifndef XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_
#define XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetIrDAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetIrDAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSetIrDALowPowerState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetIrDALowPowerState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSetIrDAMode(UART_nMODULE enModuleArg, UART_nIRDA enModeArg);
UART_nERROR UART__enGetIrDAMode(UART_nMODULE enModuleArg, UART_nIRDA* penModeArg);

#endif /* XDRIVER_MCU_UART_DRIVER_CONTROL_XHEADER_UART_SIR_H_ */
