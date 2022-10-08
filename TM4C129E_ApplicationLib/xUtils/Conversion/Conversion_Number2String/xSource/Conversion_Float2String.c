/**
 *
 * @file Conversion_Float2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Float2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Integer2String.h>


/* ToDo Actualizar Float*/
CONV_nERROR Conv__enFloat2String(float64_t f64Number, uint8_t u8Positive, uint8_t u8Padding0, Base_t sxEnteros, Base_t sxDecimals, char* pcConv, uint8_t* pu8StringLength)
{
    const int64_t CONV_s64Dec[16UL] =
    {
     0        , 10        , 100        , 1000        , 10000        , 100000        , 1000000        , 10000000        ,
     100000000, 1000000000, 10000000000, 100000000000, 1000000000000, 10000000000000, 100000000000000, 1000000000000000
    };
    int64_t s64Deci;/*contiene los f64Decimales en version entero*/
    int64_t s64Index;/*contiene los f64Decimales en version entero*/
    float64_t f64Decimal;/*contiene el valor de f64Decimales en version float64_t*/
    float64_t f64Temp;/*contiene el valor de f64Decimales en version float64_t*/
    char* pcConvAux;
    CONV_nERROR enErrorReg;
    uint8_t u8Values;/*cuantos digitos se imprimen*/
    uint8_t u8ValuesTemp;/*cuantos digitos se imprimen*/
    uint8_t u8NegativeNumber;/*cuantos digitos se imprimen*/

    s64Deci = 0;
    u8Values = 0U;
    u8ValuesTemp = 0U;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcConv) || (0UL == (uintptr_t) pu8StringLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        if((Base_t) 15UL < sxDecimals)
        {
            enErrorReg = CONV_enERROR_RANGE;
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        s64Deci = (int64_t) f64Number;
        f64Temp = (float64_t) s64Deci;
        f64Decimal = f64Number ;/*obtiene la parte f64Decimal*/
        f64Decimal -= f64Temp;

        s64Index = CONV_s64Dec[(UBase_t) sxDecimals];
        f64Decimal *= (float64_t) s64Index;/*hace la multiplicacion depende de cuantos f64Decimales necesitemos*/
        s64Deci = (int64_t) f64Decimal;/*castea la parte f64Decimal a un int64_t (64 bits)*/

        if(0 > s64Deci)/*si el numero es negativo elimina el signo*/
        {
          s64Deci *= -1;
        }
        if(0.0 > f64Number)
        {
            u8Positive = 1U;
            u8NegativeNumber = 1U;
        }
        enErrorReg = Conv__enDInt2String((int64_t) f64Number, u8Positive, u8Padding0, (uint8_t) sxEnteros, pcConv, &u8Values);/*pcConvierte la parte entera del numero*/
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        if(1U == u8NegativeNumber)
        {
            pcConvAux = pcConv;
            *pcConvAux='-';
        }
        pcConvAux = pcConv;
        pcConvAux += u8Values;
        *pcConvAux = '.';/*agrega un '.' en la posicion del fin de cadena*/
        u8Values++;/*aumenta a la siguiente posicion*/
        pcConvAux = pcConv;
        pcConvAux += u8Values;
        enErrorReg = Conv__enDInt2String((int64_t) s64Deci, 0U, 1U, (uint8_t) sxDecimals, (char*) pcConvAux, &u8ValuesTemp);/*pcConvierte la parte f64Decimal despues del punto*/
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8Values += u8ValuesTemp;
        *pu8StringLength = (uint8_t) u8Values;
    }


    return (enErrorReg);/*regresa la cantidad de digitos pcConvertidos*/
}
