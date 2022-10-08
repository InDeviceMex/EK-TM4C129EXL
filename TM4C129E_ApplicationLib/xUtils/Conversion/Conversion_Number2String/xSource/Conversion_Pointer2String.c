/**
 *
 * @file Conversion_Pointer2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Pointer2String.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define HEX2STRINGMAX    (20U)


CONV_nERROR Conv__enPointer2String(void* vNumber, char* pcConv, uint8_t* pu8StringLength)
{
    const char CONV_pc8Pointer[16UL] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char  pcConvTemp[HEX2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual= &pcConvTemp[HEX2STRINGMAX - 1U];
    CONV_nERROR enErrorReg;
    uintptr_t uxNumber;
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
        uxNumber = (uintptr_t) vNumber;
        enErrorReg = Conv__enConversion(pcPointerActual, (uint64_t) uxNumber, &u8Length, 16U, CONV_pc8Pointer);
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8Length++;
        pcPointerActual -= u8Length;
        *pcPointerActual = 'x';
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




