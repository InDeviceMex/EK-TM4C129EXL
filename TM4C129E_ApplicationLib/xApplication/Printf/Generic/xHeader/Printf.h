/*
 * PRINTF.h
 *
 *  Created on: 15 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_APP_PRINTF_H_
#define HEADER_APP_PRINTF_H_

#include <stdarg.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Wrapper.h>

/* internal conv flag definitions*/
UBase_t vsnprintf__uxUserGeneric(CONV_OUT_t pvfOut, char* pcBuffer, const UBase_t uxMaxLength, const char* pcFormat, va_list vaList);
UBase_t printf__uxUser(const char* pcFormat, ...);
UBase_t sprintf__uxUser(char* pcBuffer, const char* pcFormat, ...);
UBase_t  snprintf__uxUser(char* pcBuffer, UBase_t uxCount, const char* pcFormat, ...);
UBase_t vprintf__uxUser(const char* pcFormat, va_list vaList);
UBase_t vsprintf__uxUser(char* pcBuffer, const char* pcFormat, va_list vaList);
UBase_t vsnprintf__uxUser(char* pcBuffer, const UBase_t uxCount, const char* pcFormat, va_list vaList);
UBase_t fctprintf__uxUser(CONV_nERROR (*pvfFunctionOut) (char cCharacter, void* pvPrintArguments), void* pvPrintArguments, const char* pcFormat, ...);

#endif /* HEADER_APP_PRINTF_H_ */
