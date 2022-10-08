/**
 *
 * @file Conversion_Binary2String.c
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
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Binary2String.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define BIN2STRINGMAX    (41U)


CONV_nERROR Conv__enBin2String(uint64_t u64Number, char* pcConv, uint8_t* pu8StringLength)
{
    const char pc8Bin[2UL] = {'0','1'};
    char  pcConvTemp[BIN2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual = &pcConvTemp[BIN2STRINGMAX - 1U];
    CONV_nERROR enErrorReg;
    uint8_t u8Length;

    u8Length = 0U;
    pcPointerActual= (char*) 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcConv) || (0UL == (uintptr_t) pu8StringLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        enErrorReg = Conv__enConversion(pcPointerActual, u64Number, &u8Length, 2U, pc8Bin);
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8Length++;
        pcPointerActual -= u8Length;
        *pcPointerActual = 'b';
        u8Length++;
        pcPointerActual -= 1U;
        *pcPointerActual = '0';
        enErrorReg = Conv__enInversion(pcPointerActual, pcConv, u8Length);
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu8StringLength = (uint8_t) u8Length;
    }
    return (enErrorReg);
}
