/**
 *
 * @file Conversion_StringCompare.c
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
#include <xUtils/Conversion/Conversion_String/xHeader/Conversion_StringCompare.h>

CONV_nERROR CONV_enStringCompare(const char*  pcString1, const char* pcString2, Base_t* psxResultArg, UBase_t uxMaxSize)
{
    CONV_nERROR enErrorReg;
    Base_t sxResultReg;

    sxResultReg = 0;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcString2) || (0UL == (uintptr_t) pcString1) || (0UL == (uintptr_t) psxResultArg))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        while((0U != (uint8_t) *pcString1) && (0U != (uint8_t) *pcString2) && (0U < uxMaxSize))
        {
            if ((uint8_t) *pcString1 > (uint8_t) *pcString2)
            {
                sxResultReg = 1;
                break;
            }
            else if ( (uint8_t) *pcString1 < (uint8_t) *pcString2)
            {
                sxResultReg = -1;
                break;
            }
            pcString2 += 1U;
            pcString1 += 1U;
            uxMaxSize--;
        }

        if(0UL == uxMaxSize)
        {
            enErrorReg = CONV_enERROR_OUT_OF_RANGE;
        }
        else
        {
            if(0 == sxResultReg)
            {
                if(0U != (uint8_t) *pcString2)
                {
                    sxResultReg = -1;
                }
                else if(0U != (uint8_t) *pcString1 )
                {
                    sxResultReg = 1;
                }
            }
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *psxResultArg = (Base_t) sxResultReg;
    }

    return (enErrorReg);
}



