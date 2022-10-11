/**
 *
 * @file Conversion_NumberFormat.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFormat.h>

#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Inversion.h>


CONV_nERROR Conv__enNumber2String_Format(CONV_OUT_t pvfOut, char* pcBufferOut, char* pcBufferIn,
                                         UBase_t uxIndex, UBase_t uxMaxLenght, UBase_t uxBufInLenght, UBase_t* puxBufOutLenght,
                                         UBase_t uxWidth, UBase_t uxflags, boolean_t boNegative, UBase_t uxBase, UBase_t uxPrec)
{

    CONV_nERROR enErrorReg;
    char* pcBufferTemp;
    char  cCharTemp;
    UBase_t uxflagsTemp;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcBufferOut) || (0UL == (uintptr_t) pcBufferIn ) || (0UL == (uintptr_t) puxBufOutLenght) )
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        /* pad leading zeros */
        if (0UL == (uxflags & (UBase_t) CONV_enFLAGS_LEFT))
        {
            if(0UL != uxWidth)
            {
                if(0UL != (uxflags & (UBase_t) CONV_enFLAGS_ZEROPAD))
                {
                    uxflagsTemp = (UBase_t) CONV_enFLAGS_PLUS | (UBase_t) CONV_enFLAGS_SPACE;
                    uxflagsTemp &= uxflags;
                    if((FALSE != boNegative) || (0UL != uxflagsTemp))
                    {
                        uxWidth--;
                    }
                }
            }

            while ((uxBufInLenght < uxPrec) && ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxBufInLenght))
            {
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = '0';
                uxBufInLenght++;
            }
            while (((0UL != (uxflags & (UBase_t) CONV_enFLAGS_ZEROPAD)) && (uxBufInLenght < uxWidth)) && ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxBufInLenght))
            {
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = '0';
                uxBufInLenght++;
            }
        }

        /* handle hash */
        if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_HASH))
        {
            if (0UL != uxBufInLenght)
            {
                if(0UL == (uxflags & (UBase_t) CONV_enFLAGS_PRECISION))
                {
                    if((uxBufInLenght == uxPrec) || (uxBufInLenght == uxWidth))
                    {
                        uxBufInLenght--;
                        if ((0UL != uxBufInLenght) && (16UL == uxBase))
                        {
                            uxBufInLenght--;
                        }
                    }
                }
            }


            if ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxBufInLenght )
            {
                if(16UL == uxBase)
                {
                    if(0UL == (uxflags & (UBase_t) CONV_enFLAGS_UPPERCASE))
                    {
                        cCharTemp = 'x';
                        pcBufferTemp = pcBufferIn;
                        pcBufferTemp += uxBufInLenght;
                        *pcBufferTemp = cCharTemp;
                        uxBufInLenght++;
                    }
                    /*( (UBase_t) CONV_enFLAGS_UPPERCASE == (uxflags & (UBase_t) CONV_enFLAGS_UPPERCASE))*/
                    else
                    {
                        cCharTemp = 'X';
                        pcBufferTemp = pcBufferIn;
                        pcBufferTemp += uxBufInLenght;
                        *pcBufferTemp = cCharTemp;
                        uxBufInLenght++;
                    }
                }
                else if(2UL == uxBase)
                {
                    cCharTemp = 'b';
                    pcBufferTemp = pcBufferIn;
                    pcBufferTemp += uxBufInLenght;
                    *pcBufferTemp = cCharTemp;
                    uxBufInLenght++;
                }
            }

            if ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxBufInLenght )
            {
                cCharTemp = '0';
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = cCharTemp;
                uxBufInLenght++;
            }
        }

        if ((UBase_t) CONV_enBUFFER_SIZE_NUMBER > uxBufInLenght )
        {
            if (FALSE != boNegative)
            {
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = '-';
                uxBufInLenght++;
            }
            else if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_PLUS))
            {
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = '+';  /* ignore the space if the '+' exists */
                uxBufInLenght++;
            }
            else if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_SPACE))
            {
                pcBufferTemp = pcBufferIn;
                pcBufferTemp += uxBufInLenght;
                *pcBufferTemp = ' ';
                uxBufInLenght++;
            }
        }
        enErrorReg = Conv__enOutInversion(pvfOut, pcBufferOut, (const char*)pcBufferIn, uxIndex, uxMaxLenght, uxBufInLenght, puxBufOutLenght, uxWidth, uxflags);
    }
    return (enErrorReg);
}


