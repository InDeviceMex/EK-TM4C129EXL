/**
 *
 * @file Conversion_Wrapper.h
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
 * @verbatim 6 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_XHEADER_CONVERSION_WRAPPER_H_
#define XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_XHEADER_CONVERSION_WRAPPER_H_

#include <xUtils/Conversion/xHeader/Conversion_Enum.h>


#define CONV_DEFAULT_FLOAT_PRECISION ((UBase_t) 6U)
#define CONV_MAX_VALUE_FLOAT    (1e9)


/* determine the decimal exponent
 based on the algorithm by David Gay (https://www.ampl.com/netlib/fp/dtoa.c)*/
typedef union {
  uint64_t UNSIGNED;
  float64_t   FLOAT;
} CONV_FLOAT_UNION_t;

typedef CONV_nERROR (*CONV_FUNCTION_t) (char cCharacter, void* pvFuncArguments);
typedef CONV_nERROR (*CONV_OUT_t) (char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght);

typedef struct {
  CONV_FUNCTION_t  pvfFunction;
  void* pvArguments;
} CONV_OUT_WRAPPER_t;

CONV_nERROR Conv__enOutBuffer(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght);
CONV_nERROR Conv__enOutNull(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght);
CONV_nERROR Conv__enOutChar(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght);
CONV_nERROR Conv__enOutFunction(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght);

#endif /* XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_XHEADER_CONVERSION_WRAPPER_H_ */
