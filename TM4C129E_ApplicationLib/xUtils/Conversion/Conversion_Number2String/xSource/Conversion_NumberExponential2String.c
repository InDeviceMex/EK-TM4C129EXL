/**
 *
 * @file Conversion_NumberExponential2String.c
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
 * @verbatim 10 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberExponential2String.h>

#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFloat2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberLong2String.h>

CONV_nERROR Conv__enNumber2String_Exponential(CONV_OUT_t pvfOut, char* pcBufferOut, float64_t f64Value,
                                               UBase_t uxIndex, UBase_t uxMaxLenght, UBase_t* puxBufOutLenght,
                                               UBase_t uxWidth, UBase_t uxflags, UBase_t uxPrec)
{
    int64_t  s64ExponentialValue;
    UBase_t uxflagsTemp;
    boolean_t boNegative;
    UBase_t  uxMinWidth;
    size_t szStartIndex;
    boolean_t boTerminate;
    CONV_nERROR enErrorReg;

    szStartIndex = 0U;
    s64ExponentialValue = 0;
    uxMinWidth = 0UL;
    boTerminate = FALSE;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pvfOut) || (0UL == (uintptr_t) pcBufferOut) || (0UL == (uintptr_t) puxBufOutLenght))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        /* check for NaN and special f64Values*/
        if (f64Value < -DBL_MAX)
        {
            enErrorReg = Conv__enNumber2String_Float(pvfOut, pcBufferOut, f64Value, uxIndex, uxMaxLenght, puxBufOutLenght, uxWidth, uxflags, uxPrec);
            boTerminate = TRUE;
        }
        else if(f64Value > DBL_MAX)
        {
            enErrorReg = Conv__enNumber2String_Float(pvfOut, pcBufferOut, f64Value, uxIndex, uxMaxLenght, puxBufOutLenght, uxWidth, uxflags, uxPrec);
            boTerminate = TRUE;
        }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        CONV_FLOAT_UNION_t uFloatConversion;
        float64_t f64ValueTemp;
        float64_t f64Temp;
        float64_t f64Temp2;
        float64_t f64DoubleZ;
        float64_t f64DoubleZ2;
        float64_t f64DoubleDiv0;
        float64_t f64DoubleDiv1;
        float64_t f64DoubleDiv2;
        float64_t f64DoubleDiv3;
        uint64_t u64TempLong;
        uint64_t u64Temp;
        uint64_t u64Temp2;
        uint64_t u64TempShift;
        uint64_t u64TempShift2;
        int64_t  s64Exponential2;
        int64_t  s64Exponential2Temp;
        UBase_t uxFloatWidth;

        /* determine the sign*/
        if(0.0 > f64Value)
        {
            boNegative = TRUE;
            f64ValueTemp = 0.0;
            f64ValueTemp -= f64Value;
            f64Value = f64ValueTemp;
        }
        else
        {
            boNegative = FALSE;
        }

        /* default precision*/
        if (0UL == (uxflags & (UBase_t) CONV_enFLAGS_PRECISION))
        {
            uxPrec = CONV_DEFAULT_FLOAT_PRECISION;
        }

        uFloatConversion.FLOAT = (float64_t) f64Value;
        u64TempLong = uFloatConversion.UNSIGNED;
        u64TempLong >>= 52ULL;
        u64TempLong &= 0x07FFULL;
        s64Exponential2 = (int64_t) u64TempLong;
        s64Exponential2 -= 1023;           /* effectively log2*/

        u64Temp = uFloatConversion.UNSIGNED;
        u64TempShift = 1ULL;
        u64TempShift <<= 52ULL;
        u64TempShift -= 1ULL;
        u64Temp &= u64TempShift;

        u64TempShift2 = 1023ULL ;
        u64TempShift2 <<= 52ULL;

        u64Temp2 = u64Temp;
        u64Temp2 |= u64TempShift2;
        uFloatConversion.UNSIGNED = (uint64_t) u64Temp2;  /* drop the exponent so uFloatConversion.FLOAT is now in [1, 2)*/

        /* now approximate log10 from the log2 integer part and an expansion of ln around 1.5*/
        f64Temp = uFloatConversion.FLOAT;
        f64Temp -= 1.5;
        f64Temp *= 0.289529654602168;

        f64Temp2 = (float64_t) s64Exponential2;
        f64Temp2 *= 0.301029995663981;
        f64Temp2 += 0.1760912590558 ;
        f64Temp2 += f64Temp;
        s64ExponentialValue = (int64_t) (f64Temp2);

        /* now we want to compute 10^s64ExponentialValue but we want to be sure it won't overflow*/
        f64Temp = f64Temp2;
        f64Temp *= 3.321928094887362;
        f64Temp += 0.5;

        s64Exponential2Temp = (int64_t) (f64Temp);
        s64Exponential2Temp += 1023;
        uFloatConversion.UNSIGNED = (uint64_t) s64Exponential2Temp;
        uFloatConversion.UNSIGNED <<= 52ULL;

        f64Temp2 = f64Temp2;
        f64Temp2 *= 2.302585092994046;
        f64Temp = f64Temp;
        f64Temp *= 0.6931471805599453;

        f64DoubleZ = f64Temp2 - f64Temp;
        f64DoubleZ2 = f64DoubleZ * f64DoubleZ;

        /* compute exp(z) using continued fractions, see https://en.wikipedia.org/wiki/Exponential_function#Continued_fractions_for_ex*/
        f64DoubleDiv0 = f64DoubleZ2;
        f64DoubleDiv0 /= 14.0;
        f64DoubleDiv0 += 10.0;

        f64DoubleDiv1 = f64DoubleZ2;
        f64DoubleDiv1 /= f64DoubleDiv0;
        f64DoubleDiv1 += 6.0;

        f64DoubleDiv2 = f64DoubleZ2;
        f64DoubleDiv2 /= f64DoubleDiv1;
        f64DoubleDiv2 += 2.0;
        f64DoubleDiv2 -= f64DoubleZ;

        f64DoubleDiv3 = f64DoubleZ;
        f64DoubleDiv3 *= 2.0;
        f64DoubleDiv3 /= f64DoubleDiv2;
        f64DoubleDiv3 += 1.0;

        uFloatConversion.FLOAT *= f64DoubleDiv3;

        /* correct for rounding errors*/
        if (f64Value < uFloatConversion.FLOAT)
        {
          s64ExponentialValue--;
          uFloatConversion.FLOAT /= 10.0;
        }

        /* the exponent format is "%+03d" and largest f64Value is "307", so set aside 4-5 characters*/
        if((100 > s64ExponentialValue) && (-100 < s64ExponentialValue))
        {
            uxMinWidth = 4U;
        }
        else
        {
            uxMinWidth = 5U;
        }

        /* in "%g" mode, "uxPrec" is the number of *significant figures* not decimals*/
        if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_ADAPT_EXP))
        {
            /* do we want to fall-back to "%f" mode?*/
            if (1e-4 > f64Value)
            {
                /* we use one sigfig for the whole part*/
                if ((0U < uxPrec) && (0UL != (uxflags & (UBase_t) CONV_enFLAGS_PRECISION)))
                {
                    uxPrec -= 1U;
                }
            }
            else if(1e6 <= f64Value)
            {
                /* we use one sigfig for the whole part*/
                if ((0U < uxPrec) && (0UL != (uxflags & (UBase_t) CONV_enFLAGS_PRECISION)))
                {
                    uxPrec -= 1U;
                }
            }
            else
            {
                if ((int64_t) uxPrec > s64ExponentialValue)
                {
                    uxPrec -= (UBase_t) s64ExponentialValue;
                    uxPrec -= 1UL;
                }
                else
                {
                    uxPrec = 0U;
                }
                uxflags |= (UBase_t) CONV_enFLAGS_PRECISION;   /* make sure _ftoa respects precision*/
                /* no characters in exponent*/
                uxMinWidth = 0U;
                s64ExponentialValue = 0;
            }
        }

        /* will everything fit?*/
        uxFloatWidth = uxWidth;
        if (uxWidth > uxMinWidth)
        {
            /* we didn't fall-back so subtract the characters required for the exponent*/
            uxFloatWidth -= uxMinWidth;
        }
        else
        {
            /* not enough characters, so go back to default sizing*/
            uxFloatWidth = 0U;
        }
        if ((0UL != (uxflags & (UBase_t) CONV_enFLAGS_LEFT)) && (0U != uxMinWidth))
        {
            /* if we're padding on the right, DON'T pad the floating part*/
            uxFloatWidth = 0U;
        }

        /* rescale the float f64Value*/
        if (0LL != s64ExponentialValue)
        {
            if(0.0f < uFloatConversion.FLOAT)
            {
                f64Value /= uFloatConversion.FLOAT;
            }
            else if(0.0f > uFloatConversion.FLOAT)
            {
                f64Value /= uFloatConversion.FLOAT;
            }
        }

        /* output the floating part*/
        szStartIndex = (size_t) uxIndex;
        if(FALSE != boNegative)
        {
            f64ValueTemp = 0.0f;
            f64ValueTemp -= f64Value;
        }
        else
        {
            f64ValueTemp = f64Value;
        }
        uxflagsTemp = uxflags & ~((UBase_t) CONV_enFLAGS_ADAPT_EXP);

        enErrorReg = Conv__enNumber2String_Float(pvfOut, pcBufferOut, f64ValueTemp, uxIndex, uxMaxLenght, puxBufOutLenght, uxFloatWidth, uxflagsTemp, uxPrec);
    }

    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        uxIndex = *puxBufOutLenght;
        /* output the exponent part*/
        if (0U == uxMinWidth)
        {
            boTerminate = TRUE;
        }
    }

    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        /* output the exponential symbol*/
        char cCharTemp;
        uxflagsTemp = uxflags & (UBase_t) CONV_enFLAGS_UPPERCASE;
        if(0UL != uxflagsTemp)
        {
            cCharTemp = 'E';
        }
        else
        {
            cCharTemp = 'e';
        }
        enErrorReg = pvfOut(cCharTemp, pcBufferOut, uxIndex, uxMaxLenght);
    }

    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        int64_t s64Temp;
        uxIndex++;
        /* output the exponent f64Value*/
        if(0 > s64ExponentialValue)
        {
          s64Temp = 0;
          s64Temp -= s64ExponentialValue;
          boNegative = TRUE;
        }
        else
        {
          s64Temp = s64ExponentialValue;
          boNegative = FALSE;
        }
        uxflagsTemp = (UBase_t) CONV_enFLAGS_ZEROPAD | (UBase_t) CONV_enFLAGS_PLUS;
        enErrorReg = Conv__enNumber2String_Long(pvfOut, pcBufferOut, (UBase_t) s64Temp, uxIndex, uxMaxLenght, puxBufOutLenght,
                                                uxMinWidth-1U, uxflagsTemp, boNegative, (UBase_t) 10U, (UBase_t) 0U);
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        uxIndex = *puxBufOutLenght;
        /* might need to right-pad spaces*/
        if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_LEFT))
        {
            while (((uxIndex - szStartIndex) < uxWidth) && (CONV_enERROR_OK == enErrorReg))
            {
                enErrorReg = pvfOut(' ', pcBufferOut, uxIndex, uxMaxLenght);
                if(CONV_enERROR_OK == enErrorReg)
                {
                    uxIndex++;
                }
            }
        }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        *puxBufOutLenght = (UBase_t) uxIndex;
    }

    return (enErrorReg);
}
