/**
 *
 * @file Conversion_NumberFloat2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFormat.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Inversion.h>


#define FLOAT_PRECISION_MAX (14U)
CONV_nERROR Conv__enNumber2String_Float(CONV_OUT_t pvfOut, char* pcBufferOut, float64_t f64Value, UBase_t uxIndex,
                                        UBase_t uxMaxLenght, UBase_t* puxBufOutLenght, UBase_t uxWidth, UBase_t uxflags, UBase_t uxPrec)
{
    /* powers of 10*/
    const float64_t f64Pow10[FLOAT_PRECISION_MAX] =
    {
      1.0       , 10.0       , 100.0       , 1000.0       , 10000.0       , 100000.0       , 1000000.0      ,
      10000000.0, 100000000.0, 1000000000.0, 10000000000.0, 100000000000.0, 1000000000000.0, 10000000000000.0
    };
    char pvBufferIn[CONV_enBUFFER_SIZE_FLOAT];
    CONV_nERROR enErrorReg;
    boolean_t boTerminate;

    boTerminate = FALSE;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pvfOut) || (0UL == (uintptr_t) pcBufferOut) || (0UL == (uintptr_t) puxBufOutLenght))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        /* test for special values*/
        if (f64Value < -DBL_MAX)
        {
            enErrorReg = Conv__enOutInversion(pvfOut, pcBufferOut, "fni-", uxIndex, uxMaxLenght, 4U, puxBufOutLenght, uxWidth, uxflags);
            boTerminate = TRUE;
        }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        char* cFni = "fni";
        char* cFni_ = "fni+";
        char* cCorrect;
        UBase_t  uxLengthIn;

        if(f64Value > DBL_MAX)
        {
            if(0U != (uxflags & (UBase_t) CONV_enFLAGS_PLUS))
            {
                uxLengthIn = 4U;
                cCorrect = cFni_;
            }
            else
            {
                uxLengthIn = 3U;
                cCorrect = cFni;
            }
            enErrorReg = Conv__enOutInversion(pvfOut, pcBufferOut, cCorrect, uxIndex, uxMaxLenght, uxLengthIn, puxBufOutLenght, uxWidth, uxflags);
            boTerminate = TRUE;
        }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
      /*
       * test for very large values
       * standard printf behavior is to print EVERY s64ValueComplete number digit -- which could be 100s of characters overflowing your buffers == bad
       */
      if(f64Value < -CONV_MAX_VALUE_FLOAT)
      {
          enErrorReg = Conv__enNumber2String_Exponential(pvfOut, pcBufferOut, f64Value, uxIndex, uxMaxLenght, puxBufOutLenght, uxWidth, uxflags, uxPrec);
          boTerminate = TRUE;
      }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
      if(f64Value > CONV_MAX_VALUE_FLOAT)
      {
          enErrorReg = Conv__enNumber2String_Exponential(pvfOut, pcBufferOut, f64Value, uxIndex, uxMaxLenght, puxBufOutLenght, uxWidth, uxflags, uxPrec);
          boTerminate = TRUE;
      }
    }
    if((CONV_enERROR_OK == enErrorReg) && (FALSE == boTerminate))
    {
        float64_t f64Diff;
        float64_t f64ValueTemp;
        float64_t f64ValueTemp2;
        uint64_t u64ValueTemp;
        uint64_t u64Fractional;
        uint64_t u64DiffCompare;
        uint64_t u64DiffCompare2;
        UBase_t uxNegative;
        UBase_t uxCounter;
        int64_t s64ValueComplete;
        int64_t s64ValueTemp;
        size_t szLength;

        szLength = 0U;
        uxCounter = 0U;
        u64DiffCompare2 = 0U;
        u64DiffCompare = 0UL;
        uxNegative = 0U;
        /* test for uxNegative*/
        if(0.0 > f64Value )
        {
            uxNegative = 1U;
            f64ValueTemp = 0.0;
            f64ValueTemp -= f64Value;
            f64Value = f64ValueTemp;
        }

        /* set default precision, if not set explicitly*/
        if(0UL == (uxflags & (UBase_t) CONV_enFLAGS_PRECISION))
        {
            uxPrec = CONV_DEFAULT_FLOAT_PRECISION;
        }
        /* limit precision to FLOAT_PRECISION_MAX, cause a uxPrec >= FLOAT_PRECISION_MAX can lead to overflow errors*/
        while (((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength) && (FLOAT_PRECISION_MAX <= uxPrec))
        {
            pvBufferIn[szLength] = '0';
            szLength++;
            uxPrec--;
        }

        s64ValueComplete = (int64_t) f64Value;
        f64ValueTemp2 = (float64_t) s64ValueComplete;
        f64ValueTemp = f64Value;
        f64ValueTemp -= f64ValueTemp2;
        f64ValueTemp *= f64Pow10[uxPrec];

        u64Fractional = (uint64_t) f64ValueTemp;
        f64Diff = f64ValueTemp;
        f64Diff -= (float64_t) u64Fractional;

        if (0.5 < f64Diff)
        {
            u64Fractional++;
            /* handle rollover, e.g. case 0.99 with uxPrec 1 is 1.0*/
            if (u64Fractional >= (uint64_t) f64Pow10[uxPrec])
            {
                u64Fractional = 0U;
                s64ValueComplete++;
            }
        }
        else if (0.5 > f64Diff)
        {
        }
        else if ((0U == u64Fractional) || (0U != (u64Fractional & 1U)))
        {
            /* if halfway, round up if odd OR if last digit is 0*/
            u64Fractional++;
        }

        if (0U == uxPrec)
        {
            f64Diff = f64Value;
            f64Diff -= (float64_t) s64ValueComplete;
            if(0.5 > f64Diff)
            {
                u64DiffCompare = 0U;
            }
            else
            {
                u64DiffCompare = 1U;
            }

            if(0.5 < f64Diff)
            {
                u64DiffCompare2 = 1U;
            }
            else
            {
                u64DiffCompare2 = 0U;
            }

            if ((u64DiffCompare || u64DiffCompare2) && (0U != ((uint64_t) s64ValueComplete & 1UL)))
            {
                /* exactly 0.5 and ODD, then round up
                *1.5 -> 2, but 2.5 -> 2 * 1.5 */
                s64ValueComplete++;
            }
        }
        else
        {
            uxCounter = uxPrec;
            /* now do fractional part, as an unsigned number*/
            while ((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength)
            {
                uxCounter--;
                u64ValueTemp = u64Fractional;
                u64ValueTemp %= 10U;
                u64ValueTemp += 48U;
                pvBufferIn[szLength] = (char) u64ValueTemp;
                szLength++;
                u64Fractional /= 10U;
                if (0U == u64Fractional)
                {
                    break;
                }
            }
            /* add extra 0s */
            while (((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength) && (0U < uxCounter))
            {
                uxCounter--;
                pvBufferIn[szLength] = '0';
                szLength++;
            }
            if ((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength)
            {
                /* add decimal*/
                pvBufferIn[szLength] = '.';
                szLength++;
            }
        }

        /* do s64ValueComplete part, number is reversed*/
        while ((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength)
        {
            s64ValueTemp = s64ValueComplete;
            s64ValueTemp %= 10;
            s64ValueTemp += 48;
            pvBufferIn[szLength] = (char) s64ValueTemp;
            szLength++;
            s64ValueComplete /= 10;
            if (0 == s64ValueComplete)
            {
                break;
            }
        }

        /* pad leading zeros*/
        if ((0U == (uxflags & (UBase_t) CONV_enFLAGS_LEFT) ) && (0U != (uxflags & (UBase_t) CONV_enFLAGS_ZEROPAD)))
        {
            if ((0U != uxWidth) && ((0U != uxNegative) || (0U != (uxflags & ((UBase_t) CONV_enFLAGS_PLUS | (UBase_t) CONV_enFLAGS_SPACE)))))
            {
                uxWidth--;
            }
            while ((szLength < uxWidth) && ((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength))
            {
                pvBufferIn[szLength] = '0';
                szLength++;
            }
        }

        if ((size_t) CONV_enBUFFER_SIZE_FLOAT > szLength)
        {
            if (0U != uxNegative)
            {
              pvBufferIn[szLength] = '-';
              szLength++;
            }
            else if (0U != (uxflags & (UBase_t) CONV_enFLAGS_PLUS))
            {
              pvBufferIn[szLength] = '+';  /* ignore the space if the '+' exists*/
              szLength++;
            }
            else if (0U != (uxflags & (UBase_t) CONV_enFLAGS_SPACE))
            {
              pvBufferIn[szLength] = ' ';
              szLength++;
            }
        }
        enErrorReg = Conv__enOutInversion(pvfOut, pcBufferOut, pvBufferIn, uxIndex, uxMaxLenght, szLength, puxBufOutLenght, uxWidth, uxflags);
    }
    return (enErrorReg);
}

