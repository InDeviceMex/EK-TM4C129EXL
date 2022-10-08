/**
 *
 * @file Conversion_Enum.h
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
#ifndef XUTILS_CONVERSION_XHEADER_CONVERSION_ENUM_H_
#define XUTILS_CONVERSION_XHEADER_CONVERSION_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    CONV_enERROR_OK = (UBase_t) ERROR_OK,
    CONV_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    CONV_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    CONV_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    CONV_enERROR_OUT_OF_RANGE = (UBase_t) ERROR_OUT_OF_RANGE,
    CONV_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}CONV_nERROR;

typedef enum
{
    CONV_enBUFFER_SIZE_NUMBER = 32U,
    CONV_enBUFFER_SIZE_FLOAT = 32U,
}CONV_nBUFFER_SIZE;

typedef enum
{

    CONV_enFLAGS_ZEROPAD = ( (UBase_t) 1U << (UBase_t) 0U),
    CONV_enFLAGS_LEFT = ( (UBase_t) 1U << (UBase_t) 1U),
    CONV_enFLAGS_PLUS = ( (UBase_t) 1U << (UBase_t) 2U),
    CONV_enFLAGS_SPACE = ( (UBase_t) 1U << (UBase_t) 3U),
    CONV_enFLAGS_HASH = ( (UBase_t) 1U << (UBase_t) 4U),
    CONV_enFLAGS_UPPERCASE = ( (UBase_t) 1U << (UBase_t) 5U),
    CONV_enFLAGS_CHAR = ( (UBase_t) 1U << (UBase_t) 6U),
    CONV_enFLAGS_SHORT = ( (UBase_t) 1U << (UBase_t) 7U),
    CONV_enFLAGS_LONG = ( (UBase_t) 1U << (UBase_t) 8U),
    CONV_enFLAGS_LONG_LONG = ( (UBase_t) 1U << (UBase_t) 9U),
    CONV_enFLAGS_PRECISION = ( (UBase_t) 1U << (UBase_t) 10U),
    CONV_enFLAGS_ADAPT_EXP = ( (UBase_t) 1U << (UBase_t) 11U),

}CONV_nFLAGS;

typedef enum
{
    CONV_enSIGNED_POSITIVE = 0U,
    CONV_enSIGNED_NEGATIVE = 1U,
}CONV_nSIGNED;

#endif /* XUTILS_CONVERSION_XHEADER_CONVERSION_ENUM_H_ */
