/**
 *
 * @file Conversion_Float2String.h
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_
#define XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_

#include <xUtils/Conversion/xHeader/Conversion_Enum.h>

CONV_nERROR Conv__enFloat2String(float64_t f64Number, uint8_t u8Positive, uint8_t u8Padding0, Base_t sxEnteros, Base_t sxDecimals, char* pcConv, uint8_t* pu8StringLength);

#endif /* XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_ */
