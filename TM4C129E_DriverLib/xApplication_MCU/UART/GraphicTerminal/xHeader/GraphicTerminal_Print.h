/**
 *
 * @file GraphicTerminal_Print.h
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_PRINT_H_
#define XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_PRINT_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>
#include <stdarg.h>

UBase_t GraphTerm__uxPrintf(UART_nMODULE enModule, UBase_t uxColumn, UBase_t uxRow, const char* pcFormat, ... );

void GraphTerm__vSetFontColor(UART_nMODULE enModule, UBase_t uxRedColor,UBase_t uxGreenColor,UBase_t uxBlueColor);
#endif /* XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_PRINT_H_ */
