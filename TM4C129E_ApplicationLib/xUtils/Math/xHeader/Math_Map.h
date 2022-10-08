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

Base_t Math__sxMap(Base_t sxValueInput, Base_t sxMaxValueInput, Base_t sxMinValueInput, Base_t sxMaxValueOutput, Base_t sxMinValueOutput);
UBase_t Math__uxMap(UBase_t uxValueInput, UBase_t uxMaxValueInput, UBase_t uxMinValueInput, UBase_t uxMaxValueOutput, UBase_t uxMinValueOutput);

#endif /* XUTILS_MATH_XHEADER_MATH_MAP_H_ */
