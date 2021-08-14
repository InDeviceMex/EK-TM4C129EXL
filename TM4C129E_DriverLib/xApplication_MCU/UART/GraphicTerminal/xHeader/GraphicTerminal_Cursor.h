/**
 *
 * @file GraphicTerminal_Cursor.h
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

#ifndef XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_CURSOR_H_
#define XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_CURSOR_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>

void GraphTerm__vCursorToHome(UART_nMODULE enModule);
void GraphTerm__vHideCursor(UART_nMODULE enModule);
void GraphTerm__vSetCursorXY(UART_nMODULE enModule, uint32_t u32Column, uint32_t u32Row);
void GraphTerm__vSetCursorXYSecure(UART_nMODULE enModule, uint32_t u32Column, uint32_t u32Row, uint32_t u32ColumnMax, uint32_t u32RowMax);

#endif /* XDRIVER_MCU_UART_APP_GRAPHICTERMINAL_XHEADER_GRAPHICTERMINAL_CURSOR_H_ */
