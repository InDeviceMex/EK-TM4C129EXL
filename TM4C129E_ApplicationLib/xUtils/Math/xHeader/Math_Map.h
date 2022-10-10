/**
 *
 * @file Math_Map.h
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

#ifndef XUTILS_MATH_XHEADER_MATH_MAP_H_
#define XUTILS_MATH_XHEADER_MATH_MAP_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    Math_enERROR_OK = (UBase_t) ERROR_OK,
    Math_enERROR_POINTER = (UBase_t) ERROR_POINTER,
    Math_enERROR_VALUE = (UBase_t) ERROR_VALUE,
    Math_enERROR_EMPTY = (UBase_t) ERROR_EMPTY,
    Math_enERROR_RANGE = (UBase_t) ERROR_RANGE,
    Math_enERROR_FULL = (UBase_t) ERROR_FULL,
    Math_enERROR_UNDEF = (UBase_t) ERROR_UNDEF,
}Math_nERROR;

Math_nERROR Math__enMapSigned(Base_t sxValueInput, Base_t* sxValueOutput, Base_t sxMaxValueInput, Base_t sxMinValueInput, Base_t sxMaxValueOutput, Base_t sxMinValueOutput);
Math_nERROR Math__enMapUnsigned(UBase_t uxValueInput, UBase_t* uxValueOutput, UBase_t uxMaxValueInput, UBase_t uxMinValueInput, UBase_t uxMaxValueOutput, UBase_t uxMinValueOutput);

#endif /* XUTILS_MATH_XHEADER_MATH_MAP_H_ */
