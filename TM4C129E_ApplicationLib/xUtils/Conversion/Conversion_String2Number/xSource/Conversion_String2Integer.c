/**
 *
 * @file Conversion_String2Integer.c
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
 * @verbatim 18 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Number/Conversion_Number.h>
#include <xUtils/Conversion/Conversion_String2Number/xHeader/Conversion_String2Integer.h>



CONV_nERROR Conv__enString2Integer(const char** pcString, int64_t* s64NumSigned, UBase_t* puxLength)
{
    CONV_nERROR enErrorReg;
    UBase_t uxLength;
    int64_t s64NumSignedReg;
    CONV_nSIGNED enSign;

    char cStringBack[30] = {0UL};
    char* pcStringBack = cStringBack;

    s64NumSignedReg = 0;
    enSign = CONV_enSIGNED_POSITIVE;
    uxLength = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcString) || (0UL == (uintptr_t) s64NumSigned) || (0UL == (uintptr_t) puxLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        CONV_nERROR enNegativeSign;
        CONV_nERROR enPositiveSign;
        CONV_nERROR enDigit;
        CONV_nERROR enBackSpace;
        CONV_nERROR enNewLine;
        CONV_nERROR enScape;
        CONV_nERROR enNull;
        uint8_t  u8ValueAux;

        /* The following situation is only valid when CONV_enSTATUS_OK is 0 and CONV_enSTATUS_ERROR is 1*/
        enNewLine = Conv__enIsNewLineReturn(**pcString);
        enScape = Conv__enIsScape(**pcString);
        enNull = Conv__enIsNull(**pcString);

        while((CONV_enERROR_OK != enNewLine) &&
              (CONV_enERROR_OK != enScape) &&
              (CONV_enERROR_OK != enNull) &&
              (CONV_enERROR_OK == enErrorReg))
        {

            enDigit = Conv__enIsDigit(**pcString);
            enBackSpace = Conv__enIsBackSpace(**pcString);
            enNegativeSign = Conv__enIsNegativeSign(**pcString);
            enPositiveSign = Conv__enIsPositiveSign(**pcString);

            if((CONV_enERROR_OK == enNegativeSign) && (0UL == uxLength))
            {
                enSign = CONV_enSIGNED_NEGATIVE;
                uxLength++;
                *pcStringBack = **pcString;
                pcStringBack += 1U;
            }
            else if((CONV_enERROR_OK == enPositiveSign) && (0U == uxLength))
            {
                enSign = CONV_enSIGNED_POSITIVE;
                uxLength++;
                *pcStringBack = **pcString;
                pcStringBack += 1U;
            }
            else if(CONV_enERROR_OK == enDigit)
            {
                s64NumSignedReg *= 10;
                u8ValueAux = (uint8_t) **pcString;
                u8ValueAux -= (uint8_t) '0';
                s64NumSignedReg += (int64_t) u8ValueAux;
                uxLength++;
                *pcStringBack = **pcString;
                pcStringBack += 1U;
            }
            else if((CONV_enERROR_OK == enBackSpace) && (0UL != uxLength))
            {
                pcStringBack -= 1U;
                enDigit = Conv__enIsDigit(*pcStringBack);
                enNegativeSign = Conv__enIsNegativeSign(*pcStringBack);
                if(CONV_enERROR_OK == enDigit)
                {
                    s64NumSignedReg /= 10;
                }
                else if(CONV_enERROR_OK == enNegativeSign)
                {
                    enSign = CONV_enSIGNED_POSITIVE;
                }
                uxLength--;
            }
            else if (CONV_enERROR_OK == enBackSpace)
            {
                enErrorReg = CONV_enERROR_VALUE;
                break;
            }

            (*pcString) += 1U;

            enNewLine = Conv__enIsNewLineReturn(**pcString);
            enScape = Conv__enIsScape(**pcString);
            enNull = Conv__enIsNull(**pcString);
        }
    }

    if(CONV_enERROR_OK == enErrorReg)
    {
        if(CONV_enSIGNED_NEGATIVE == enSign)
        {
            s64NumSignedReg *= -1;
            uxLength++;
        }
        *s64NumSigned = (int64_t) s64NumSignedReg;
        *puxLength = (UBase_t) uxLength;
    }
    return (enErrorReg);
}

