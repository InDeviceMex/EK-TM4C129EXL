/**
 *
 * @file Conversion_String2UInteger.h
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_CONVERSION_STRING2NUMBER_XHEADER_CONVERSION_STRING2UINTEGER_H_
#define XUTILS_CONVERSION_CONVERSION_STRING2NUMBER_XHEADER_CONVERSION_STRING2UINTEGER_H_

#include <xUtils/Conversion/xHeader/Conversion_Enum.h>

CONV_nERROR Conv__enString2UInteger(const char** pcString, uint64_t* pu64NumUnsigned, UBase_t* puxLength);

#endif /* XUTILS_CONVERSION_CONVERSION_STRING2NUMBER_XHEADER_CONVERSION_STRING2UINTEGER_H_ */
