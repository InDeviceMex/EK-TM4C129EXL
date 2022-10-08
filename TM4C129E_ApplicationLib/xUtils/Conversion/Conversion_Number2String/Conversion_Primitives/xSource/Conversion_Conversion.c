/**
 *
 * @file Conversion_Conversion.c
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

#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Conversion.h>

CONV_nERROR Conv__enConversion(char* pcLastPosDataIn, uint64_t u64Number, uint8_t* u8Length, uint8_t u8Base, const char* pcLookUpTable)
{
    CONV_nERROR enErrorReg;
    uint8_t  u8Num;
    uint8_t  u8LengthReg;
    uint64_t u64NumberReg;
    const char* pcLookUpTableReg;


    u8LengthReg = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcLastPosDataIn) || (0UL == (uintptr_t) pcLookUpTable) || (0UL == (uintptr_t) u8Length))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pcLastPosDataIn = (char) 0;/*guarda el fin de cadena en la ultima posicion*/

        do{
            u8LengthReg += 1U;
            pcLastPosDataIn -= 1U;/*se decrementa la posicion donse guardara el valor*/
            u64NumberReg = u64Number;
            u64NumberReg %= u8Base;
            u8Num = (uint8_t) (u64NumberReg);/*obtiene el digito de menor peso*/
            pcLookUpTableReg = pcLookUpTable;
            pcLookUpTableReg += u8Num;
            *pcLastPosDataIn = (char) *pcLookUpTableReg;/*convierte el valor en caracter*/
            u64Number /= u8Base;
        }  while(0UL < u64Number);/*mientras exista un digito sigue el ciclo*/
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *u8Length = (uint8_t) u8LengthReg;
    }
    return (enErrorReg);
}


