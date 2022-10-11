/**
 *
 * @file Conversion_NumberLong2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberLong2String.h>

#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberLongLong2String.h>


CONV_nERROR Conv__enNumber2String_Long(CONV_OUT_t pvfOut, char* pcBufferOut, UBase_t uxValue, UBase_t uxIndex,
                                       UBase_t uxMaxLenght, UBase_t* puxBufOutLenght, UBase_t uxWidth, UBase_t uxflags,
                                       boolean_t boNegative, UBase_t uxBase, UBase_t uxPrec)
{
    CONV_nERROR enErrorReg;
    enErrorReg =  Conv__enNumber2String_LongLong(pvfOut, pcBufferOut, (uint64_t) uxValue, uxIndex,
                                                 uxMaxLenght, puxBufOutLenght, uxWidth, uxflags,
                                                 boNegative, (uint64_t) uxBase, uxPrec);
    return (enErrorReg);
}

