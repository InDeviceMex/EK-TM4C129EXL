/**
 *
 * @file Conversion_StringCompare.h
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
 * @verbatim 5 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_CONVERSION_STRING_XHEADER_CONVERSION_STRINGCOMPARE_H_
#define XUTILS_CONVERSION_CONVERSION_STRING_XHEADER_CONVERSION_STRINGCOMPARE_H_

#include <xUtils/Conversion/xHeader/Conversion_Enum.h>

CONV_nERROR CONV_enStringCompare(const char*  pcString1, const char* pcString2, Base_t* psxResultArg, UBase_t uxMaxSize);

#endif /* XUTILS_CONVERSION_CONVERSION_STRING_XHEADER_CONVERSION_STRINGCOMPARE_H_ */
