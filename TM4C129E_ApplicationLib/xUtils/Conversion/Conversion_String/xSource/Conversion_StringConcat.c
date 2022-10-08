/**
 *
 * @file Conversion_StringConcat.c
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
 * @verbatim 5 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringConcat.h>

CONV_nERROR CONV_enStringConcat(char* pcStringInitial, const char* pcStringConcat, UBase_t uxMaxSize)
{
    CONV_nERROR enErrorReg;
    char* pcStringReg;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcStringInitial) || (0UL == (uintptr_t) pcStringConcat))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcStringReg = pcStringInitial;
        while((0U != (uint8_t) *pcStringReg) && (0UL < (UBase_t) uxMaxSize))
        {
            pcStringReg += 1U;
            uxMaxSize--;
        }
        while((0U != (uint8_t) *pcStringConcat) && (0UL < (UBase_t) uxMaxSize))
        {
            *pcStringReg = *pcStringConcat;
            pcStringConcat += 1U;
            pcStringReg += 1U;
            uxMaxSize--;
        }
        if(0UL == uxMaxSize)
        {
            enErrorReg = CONV_enERROR_OUT_OF_RANGE;
        }
        else
        {
            *pcStringReg = '\0';
        }
    }
    return (enErrorReg);
}
