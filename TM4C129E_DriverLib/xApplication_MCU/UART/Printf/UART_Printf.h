/**
 *
 * @file UART_Printf.h
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
 * @verbatim 28 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_UART_PRINTF_UART_PRINTF_H_
#define XAPPLICATION_MCU_UART_PRINTF_UART_PRINTF_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>
#include <stdarg.h>

UBase_t UART__uxPrintf(UART_nMODULE enModule,const char* pcFormat, ... );
UBase_t UART__uxvsPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList);

typedef UART_nERROR (*UART_enCustomPrintHandler_t)(UART_nMODULE enModuleArg, const uint8_t* pu8DataArg, UBase_t* puxCount);


UART_nERROR UART__enSetCustomPrintfHandle(UART_nMODULE enModuleArg, UART_enCustomPrintHandler_t penFunctionHandlerArg);
UBase_t UART__uxCustomPrintf(UART_nMODULE enModule,const char* pcFormat, ... );
UBase_t UART__uxvsCustomPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList);

#endif /* XAPPLICATION_MCU_UART_PRINTF_UART_PRINTF_H_ */
