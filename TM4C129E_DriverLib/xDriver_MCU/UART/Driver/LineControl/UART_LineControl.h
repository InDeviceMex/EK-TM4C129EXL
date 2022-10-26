/**
 *
 * @file UART_LineControl.h
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

#ifndef XDRIVER_MCU_UART_DRIVER_LINECONTROL_UART_LINECONTROL_H_
#define XDRIVER_MCU_UART_DRIVER_LINECONTROL_UART_LINECONTROL_H_

#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Break.h>
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Fifo.h>
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Length.h>
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Parity.h>
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Stop.h>

UART_nERROR UART__enSetLineControl(UART_nMODULE enModuleArg, UART_nLENGTH enDataLengthArg,
                           UART_nSTATE enFifoStateArg, UART_nSTOP enStopBitsArg,
                           UART_nPARITY enParityTypeArg, UART_nFIFO_LEVEL enTransmitFifoLevelArg,
                           UART_nFIFO_LEVEL enReceiveFifoLevelArg);
UART_nERROR UART__enSetLineControlStructure(UART_nMODULE enModuleArg, const UART_LINE_CONTROL_t stLineControlArg);
UART_nERROR UART__enSetLineControlStructurePointer(UART_nMODULE enModuleArg, const UART_LINE_CONTROL_t* pstLineControlArg);

#endif /* XDRIVER_MCU_UART_DRIVER_LINECONTROL_UART_LINECONTROL_H_ */
