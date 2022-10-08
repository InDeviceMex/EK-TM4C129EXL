/**
 *
 * @file Conversion_UInteger2String.c
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
#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_UInteger2String.h>

#define INT2STRINGMAX    (21U)


CONV_nERROR Conv__enUInt2String(uint64_t u64Number, char* pcConv, uint8_t* pu8StringLength)
{
    const char CONV_pc8Decimal[10] = {'0','1','2','3','4','5','6','7','8','9'};
    char  pcConvTemp[INT2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual= &pcConvTemp[INT2STRINGMAX - 1U];
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
        enErrorReg = Conv__enConversion(pcPointerActual, u64Number, &u8Length, 10U, CONV_pc8Decimal);
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcPointerActual -= u8Length;
        enErrorReg = Conv__enInversion(pcPointerActual, pcConv, u8Length);
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu8StringLength = u8Length;
    }
    return (enErrorReg);
}

