/**
 *
 * @file Conversion_Integer2String.c
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
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Integer2String.h>

#define INT2STRINGMAX    (24U)

static const char Conversion_pc8Decimal[10UL] =
{
 '0','1','2','3','4','5','6','7','8','9'
};

/*ToDo review Conv__u8DInt2String*/
CONV_nERROR Conv__enDInt2String(int64_t s64Number, uint8_t u8Positive, uint8_t u8Padding0, uint8_t u8Deci, char* pcConv, uint8_t* pu8StringLength)
{
    CONV_nERROR enErrorReg;
    char  pcConvTemp[INT2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char *pcPointerActual = &pcConvTemp[INT2STRINGMAX - 1U];
    char *pcPointerActualAux;
    char *pcConvAux;
    uintptr_t uptrLengthReg;
    int64_t  s64NumberReg;/*paso el Numero a un registro para aumentar rendimiento*/
    int64_t  s64TempReg;/*paso el Numero a un registro para aumentar rendimiento*/
    uint8_t u8FlagSign;
    uint8_t u8DeciActual;
    uint8_t u8Iter;
    int8_t s8CharAux;
    int8_t s8Num;

    uptrLengthReg = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcConv) || (0UL == (uintptr_t) pu8StringLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(19UL < u8Deci)
    {
        enErrorReg = CONV_enERROR_RANGE;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8DeciActual = 0U;
        u8FlagSign = 1U;
        s64NumberReg = s64Number;/*paso el Numero a un registro para aumentar rendimiento*/
        *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/
        do
        {
            pcPointerActual -= 1U;/*se decrementa la posicion donse guardara el valor*/
            s64TempReg = s64NumberReg;
            s64TempReg %= 10;
            s8Num = (int8_t) s64TempReg;/*obtiene el digito de menor peso*/
            if(0 > s8Num) { s8Num *= -1; }
            if ((0 != s64NumberReg) || (0UL == u8DeciActual))
            {
                s8CharAux = s8Num;
                s8CharAux += (int8_t) '0';
                *pcPointerActual = (char)s8CharAux;
                u8DeciActual++;
            }
            else
            {
                if(0U != u8Padding0)
                {
                    *pcPointerActual = '0';/*pcConvierte el valor en caracter*/
                    u8DeciActual++;
                }
                else if (0U != u8FlagSign)
                {
                    if (0 > s64Number)         { *pcPointerActual = '-'; }/*si el sxNumero es negativo guarda el signo negativo*/
                    else if (0U != u8Positive) { *pcPointerActual = '+'; }/*si el sxNumero es negativo guarda el signo negativo*/
                    u8FlagSign = 0U;
                }
                else
                {
                    *pcPointerActual= ' ';
                    u8DeciActual++;
                }
            }
            s64NumberReg /= 10;
        }while((0 != s64NumberReg) || (u8DeciActual < u8Deci));/*mientras exista un digito sigue el ciclo*/

        if(0U != u8FlagSign)
        {
            if (0 > s64Number)
            {
                pcPointerActual -= 1U;
                *pcPointerActual = '-';/*si el sxNumero es negativo guarda el signo negativo*/
            }
            else if (0U != u8Positive)
            {
                pcPointerActual -= 1U;
                *pcPointerActual = '+';/*si el sxNumero es negativo guarda el signo negativo*/
            }
        }

        uptrLengthReg = (uintptr_t) &pcConvTemp[INT2STRINGMAX];
        uptrLengthReg -= (uintptr_t) pcPointerActual;/*realiza la resta de cuantos caracteres se utilizaron*/

        pcConvAux = pcConv;
        pcPointerActualAux = pcPointerActual;

        pcConvAux +=  uptrLengthReg;
        pcPointerActualAux += (uint8_t) uptrLengthReg;

        for (u8Iter = (uint8_t) uptrLengthReg; 0U < u8Iter; u8Iter--) /*hace un ciclo burbuja optimizado*/
        {
              pcConvAux -= 1U;
              pcPointerActualAux -= 1U;
             *pcConvAux= *pcPointerActualAux;
        }
        uptrLengthReg -= 1UL;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu8StringLength = (uint8_t) uptrLengthReg;
    }
    return (enErrorReg);
}


CONV_nERROR Conv__enInt2String(int64_t s64Number, char* pcConv, uint8_t* pu8StringLength)
{
    CONV_nERROR enErrorReg;
    char *pcPointerActualAux;
    char  pcConvTemp[INT2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char *pcPointerActual= &pcConvTemp[INT2STRINGMAX - 1U];
    char *pcConvAux;
    uintptr_t uptrLengthReg;
    int64_t s64NumberReg;
    int64_t s64NumberRegAlt;
    uint8_t  u8FlagSign;
    uint8_t  u8Iter;
    uint8_t u8Num;

    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcConv) || (0UL == (uintptr_t) pu8StringLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8FlagSign = 0U;
        s64NumberReg = s64Number;/*paso el Numero a un registro para aumentar rendimiento*/
        *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/
        if(0 > s64NumberReg)
        {
            s64NumberReg *= -1;
            u8FlagSign = 1U;
        }

        pcPointerActualAux = pcConvTemp;
        pcPointerActualAux += u8FlagSign;
        do
        {
            pcPointerActual -= 1U;/*se decrementa la posicion donse guardara el valor*/
            s64NumberRegAlt = s64NumberReg;
            s64NumberRegAlt %= 10;
            u8Num = (uint8_t) s64NumberRegAlt;/*obtiene el digito de menor peso*/
            *pcPointerActual = (char) Conversion_pc8Decimal[u8Num];/*pcConvierte el valor en caracter*/
            s64NumberReg /= 10;
        }while((0 != s64NumberReg) && (pcPointerActual > pcPointerActualAux));/*mientras exista un digito sigue el ciclo*/

        if (1U == u8FlagSign)
        {
            pcPointerActual -= 1U;
            *pcPointerActual = '-';/*si el sxNumero es negativo guarda el signo negativo*/
        }

        uptrLengthReg = (uintptr_t) &pcConvTemp[INT2STRINGMAX];
        uptrLengthReg -= (uintptr_t) pcPointerActual;/*realiza la resta de cuantos caracteres se utilizaron*/

        pcConvAux = pcConv;
        pcPointerActualAux = pcPointerActual;

        pcConvAux +=  uptrLengthReg;
        pcPointerActualAux += (uint8_t) uptrLengthReg;

        for (u8Iter = (uint8_t) uptrLengthReg; 0U < u8Iter; u8Iter--) /*hace un ciclo burbuja optimizado*/
        {
              pcConvAux -= 1U;
              pcPointerActualAux -= 1U;
             *pcConvAux= *pcPointerActualAux;
        }
        uptrLengthReg -= 1UL;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu8StringLength = (uint8_t) uptrLengthReg;
    }
    return (enErrorReg);
}



CONV_nERROR Conv__enInt2StringZeros(int64_t s64Number, int8_t s8CerosLeft, char* pcConv, uint8_t* pu8StringLength)
{
    CONV_nERROR enErrorReg;
    char  pcConvTemp[INT2STRINGMAX] = {0UL};/*longitud maxima de long 16 digitos*/
    char *pcPointerActual = &pcConvTemp[INT2STRINGMAX - 1U];
    char *pcPointerActualAux;
    char *pcConvAux;
    uintptr_t uptrLengthReg;
    int64_t s64NumberReg;
    int64_t s64NumberRegAlt;
    uint8_t  u8FlagSign;
    uint8_t  u8Iter;
    uint8_t u8Num;

    uptrLengthReg = 0UL;
    enErrorReg = CONV_enERROR_OK;
    if((0UL == (uintptr_t) pcConv) || (0UL == (uintptr_t) pu8StringLength))
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        if(((int8_t)INT2STRINGMAX - 2) < s8CerosLeft)
        {
            enErrorReg = CONV_enERROR_RANGE;
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        u8FlagSign = 0U;
        s64NumberReg = s64Number;/*paso el Numero a un registro para aumentar rendimiento*/
        *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/
        if(0 > s64NumberReg)
        {
            s64NumberReg *= -1;
            u8FlagSign = 1U;
        }
        pcPointerActualAux = pcConvTemp;
        pcPointerActualAux += u8FlagSign;
        do {
            pcPointerActual -= 1U;/*se decrementa la posicion donse guardara el valor*/

            s64NumberRegAlt = s64NumberReg;
            s64NumberRegAlt %= 10;
            u8Num = (uint8_t) s64NumberRegAlt;/*obtiene el digito de menor peso*/
            *pcPointerActual = (char) Conversion_pc8Decimal[u8Num];/*pcConvierte el valor en caracter*/
            s8CerosLeft--;
            s64NumberReg /= 10;
        }  while((0 != s64NumberReg) && (pcPointerActual > pcPointerActualAux));/*mientras exista un digito sigue el ciclo*/

        while((pcPointerActual > pcPointerActualAux) && (0 < s8CerosLeft))
        {
            pcPointerActual -= 1U;
            *pcPointerActual = '0';
            s8CerosLeft--;
        }
        if (1U == u8FlagSign)
        {
            pcPointerActual -= 1U;
            *pcPointerActual = '-';/*si el sxNumero es negativo guarda el signo negativo*/
        }


        uptrLengthReg = (uintptr_t) &pcConvTemp[INT2STRINGMAX];
        uptrLengthReg -= (uintptr_t) pcPointerActual;/*realiza la resta de cuantos caracteres se utilizaron*/

        pcConvAux = pcConv;
        pcPointerActualAux = pcPointerActual;

        pcConvAux +=  uptrLengthReg;
        pcPointerActualAux += (uint8_t) uptrLengthReg;

        for (u8Iter = (uint8_t) uptrLengthReg; 0U < u8Iter; u8Iter--) /*hace un ciclo burbuja optimizado*/
        {
              pcConvAux -= 1U;
              pcPointerActualAux -= 1U;
             *pcConvAux= *pcPointerActualAux;
        }
        uptrLengthReg -= 1UL;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        *pu8StringLength = (uint8_t) uptrLengthReg;
    }
    return (enErrorReg);
}




