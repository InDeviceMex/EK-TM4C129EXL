/**
 *
 * @file Conversion_StringLength.c
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringLength.h>

CONV_nERROR CONV_enStringLength(const char* pcString, UBase_t* puxLengthArg, UBase_t uxMaxSize)
{
    CONV_nERROR enErrorReg;
    UBase_t uxCount;
    const char* pcStringReg;

    uxCount = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcString) || (0UL == (uintptr_t) puxLengthArg))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcStringReg = pcString;
        while((0U != (uint8_t) *pcStringReg) && (0UL < (UBase_t) uxMaxSize))
        {
            pcStringReg += 1U;
            uxMaxSize--;
        }
        if(0UL == uxMaxSize)
        {
            enErrorReg = CONV_enERROR_OUT_OF_RANGE;
        }
        else
        {
            uxCount = (UBase_t) pcStringReg;
            uxCount -= (UBase_t) pcString;
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *puxLengthArg = (UBase_t) uxCount;
    }
    return (enErrorReg);
}

