/**
 *
 * @file UART_Break.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BREAK_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BREAK_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

UART_nERROR UART__enSetBreakCharacterState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enGetBreakCharacterState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);

UART_nERROR UART__enSendBreakCharacter(UART_nMODULE enModuleArg);
UART_nERROR UART__enStopBreakCharacter(UART_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_XHEADER_UART_BREAK_H_ */
