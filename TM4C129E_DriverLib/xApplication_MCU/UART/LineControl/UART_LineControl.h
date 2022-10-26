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


UART_nERROR UART__enSetLineControl_BaudRate(UART_nMODULE enModuleArg,
                                            UART_nLENGTH enLengthDataArg,
                                            UART_nSTATE enFifoEnable,
                                            UART_nSTOP enStopBitsArg,
                                            UART_nPARITY enParityTypeArg,
                                            UBase_t uxBaudRateArg);
UART_nERROR UART__enSetLineControlStructure_BaudRate(UART_nMODULE enModuleArg,
                                             const UART_LINE_CONTROL_t stLineControl,
                                             UBase_t uxBaudRateArg);
UART_nERROR UART__enSetLineControlStructurePointer_BaudRate(UART_nMODULE enModuleArg,
                                                const UART_LINE_CONTROL_t* pstLineControl,
                                                UBase_t uxBaudRateArg);

#endif /* XAPPLICATION_MCU_UART_LINECONTROL_UART_LINECONTROL_H_ */
