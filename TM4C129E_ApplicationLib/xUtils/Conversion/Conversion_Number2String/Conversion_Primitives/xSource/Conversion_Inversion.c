/**
 *
 * @file Conversion_Inversion.c
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
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Inversion.h>

CONV_nERROR Conv__enInversion(const char* const pcPointerIn, char* const pcPointerOut, uint8_t u8Length)
{
    CONV_nERROR enErrorReg;
    uint8_t u8Iter;
    const char* pcPointerInAux;
    char* pcPointerOutAux;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcPointerIn) || (0UL == (uintptr_t) pcPointerOut))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcPointerOutAux = pcPointerOut;
        pcPointerInAux = pcPointerIn;
        for (u8Iter = 0U; u8Iter <= u8Length; u8Iter++) /*hace un ciclo burbuja optimizado*/
        {
            *pcPointerOutAux= *pcPointerInAux;
            pcPointerOutAux += 1U;
            pcPointerInAux += 1U;
        }
    }
    return (enErrorReg);
}

CONV_nERROR Conv__enOutInversion(CONV_OUT_t pvfOut, char* pvBufferOut, const char* pvBufferIn, UBase_t uxIndex, UBase_t uxMaxLenght, UBase_t uxBufInLenght, UBase_t* puxBufOutLenght, UBase_t uxWidth, UBase_t uxflags)
{
    CONV_nERROR enErrorReg;
    UBase_t uxPos;
    const char* pcBufferTemp;
    UBase_t uxStartIndex;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pvBufferOut) || (0UL == (uintptr_t) pvBufferIn) || (0UL == (uintptr_t) pvfOut))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        uxStartIndex = uxIndex;
        if ((0U == (uxflags & (UBase_t) CONV_enFLAGS_LEFT)) && (0U == (uxflags & (UBase_t) CONV_enFLAGS_ZEROPAD)))
        {
            for (uxPos = uxBufInLenght; uxPos < uxWidth; uxPos++) /*hace un ciclo burbuja optimizado*/
            {
                pvfOut(' ',pvBufferOut, uxIndex, uxMaxLenght);
                uxIndex++;
            }
        }
        pcBufferTemp = pvBufferIn;
        pcBufferTemp += uxBufInLenght;
        while(0U != uxBufInLenght)
        {
            uxBufInLenght--;
            pcBufferTemp -= 1U;
            pvfOut(*pcBufferTemp, pvBufferOut, uxIndex, uxMaxLenght);
            uxIndex++;
        }

        if (0UL != (uxflags & (UBase_t) CONV_enFLAGS_LEFT))
        {
            while ((uxIndex - uxStartIndex) < uxWidth)
            {
                pvfOut(' ',pvBufferOut, uxIndex, uxMaxLenght);
                uxIndex++;
            }
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *puxBufOutLenght = (UBase_t) uxIndex;
    }
    return (enErrorReg);
}


