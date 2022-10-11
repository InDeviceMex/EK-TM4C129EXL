/**
 *
 * @file Conversion_NumberFormat.h
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
 * @verbatim 7 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFORMAT_H_
#define XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFORMAT_H_

#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Wrapper.h>

CONV_nERROR Conv__enNumber2String_Format(CONV_OUT_t pvfOut, char* pcBufferOut, char* pcBufferIn,
                                         UBase_t uxIndex, UBase_t uxMaxLenght, UBase_t uxBufInLenght, UBase_t* puxBufOutLenght,
                                         UBase_t uxWidth, UBase_t uxflags, boolean_t boNegative, UBase_t uxBase, UBase_t uxPrec);

#endif /* XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFORMAT_H_ */
