/**
 *
 * @file UART_LineControl.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_UART_LINECONTROL_UART_LINECONTROL_H_
#define XAPPLICATION_MCU_UART_LINECONTROL_UART_LINECONTROL_H_

#include <xApplication_MCU/UART/LineControl/BaudRate/UART_BaudRate.h>

UART_nSTATUS UART__enSetBaudRateAndLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthDataArg, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg, UBase_t uxBaudRateArg);
UART_nSTATUS UART__enSetBaudRateAndLineControlStructPointer(UART_nMODULE enModule, const UART_LINE_CONTROL_t* pstLineControl, UBase_t uxBaudRateArg);
UART_nSTATUS UART__enSetBaudRateAndLineControlStruct(UART_nMODULE enModule, const UART_LINE_CONTROL_t stLineControl, UBase_t uxBaudRateArg);

#endif /* XAPPLICATION_MCU_UART_LINECONTROL_UART_LINECONTROL_H_ */
