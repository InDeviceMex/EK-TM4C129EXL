/**
 *
 * @file Conversion_NumberLongLong2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberLongLong2String.h>

#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFormat.h>

CONV_nERROR Conv__enNumber2String_LongLong(CONV_OUT_t pvfOut, char* pcBufferOut, uint64_t u64Value, UBase_t uxIndex,
                                           UBase_t uxMaxLenght, UBase_t* puxBufOutLenght, UBase_t uxWidth, UBase_t uxflags,
                                           boolean_t boNegative, uint64_t u64Base, UBase_t uxPrec)
{
    uint8_t pu8Buffer[CONV_enBUFFER_SIZE_NUMBER];
    uint64_t u64TempReg;
    char cDigit;
    uint8_t u8DigitTemp;
    UBase_t  uxLength;
    CONV_nERROR enErrorReg;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pvfOut) || (0UL == (uintptr_t) pcBufferOut ))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        uxLength = 0U;
        /* no hash for 0 values*/
        if (0ULL == u64Value) { uxflags &= ~(UBase_t) CONV_enFLAGS_HASH; }

        /* write if precision != 0 and value is != 0*/
        if ((0U == (uxflags & (UBase_t) CONV_enFLAGS_PRECISION)) || (0ULL != u64Value))
        {
            u8DigitTemp = 0U;
            do
            {
                u64TempReg = u64Value;
                u64TempReg %= u64Base;
                cDigit = (char) (u64TempReg);
                if(10U > (uint8_t) cDigit)
                {
                    u8DigitTemp = (uint8_t) '0';
                }
                else
                {
                    if(0U != (uxflags & (UBase_t) CONV_enFLAGS_UPPERCASE))
                    {
                        u8DigitTemp = (uint8_t) 'A';
                    }
                    else
                    {
                        u8DigitTemp = (uint8_t) 'a' ;
                    }
                    u8DigitTemp -= (uint8_t) 10;
                }

                pu8Buffer[uxLength] = u8DigitTemp + (uint8_t) cDigit ;
                uxLength++;
                u64Value /= u64Base;
            } while ((0UL != u64Value) && ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxLength));
        }

        enErrorReg = Conv__enNumber2String_Format(pvfOut, pcBufferOut, (char*)pu8Buffer, uxIndex, uxMaxLenght, uxLength, puxBufOutLenght, uxWidth, uxflags, boNegative, (UBase_t) u64Base, uxPrec);
    }
    return (enErrorReg);
}

