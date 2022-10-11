/**
 *
 * @file Conversion_String2UInteger.c
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_String2Number/xHeader/Conversion_String2UInteger.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number/Conversion_Number.h>

CONV_nERROR Conv__enString2UInteger(const char** pcString, uint64_t* pu64NumUnsigned, UBase_t* puxLength)
{
    uint64_t u64NumUnsignedTemp;
    UBase_t uxLength;
    CONV_nERROR enDigit;
    CONV_nERROR enErrorReg;
    uint8_t  u8ValueAux;


    uxLength = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcString) || (0UL == (uintptr_t) pu64NumUnsigned) || (0UL == (uintptr_t) puxLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u64NumUnsignedTemp = 0ULL;
        enDigit = Conv__enIsDigit(**pcString);
        while (CONV_enERROR_OK == enDigit)
        {
            u64NumUnsignedTemp *= 10U;
            u8ValueAux = (uint8_t) (**pcString);
            u8ValueAux -= (uint8_t) '0';
            u64NumUnsignedTemp += (uint64_t) u8ValueAux;
            *pcString += 1U;
            uxLength++;
            enDigit = Conv__enIsDigit(**pcString);
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu64NumUnsigned = (uint64_t) u64NumUnsignedTemp;
        *puxLength = (UBase_t) uxLength;
    }

    return (enErrorReg);
}
