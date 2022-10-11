/*
 * PRINTF.c
 *
 *  Created on: 15 may. 2020
 *      Author: vyldram
 */

#include <xApplication/Printf/Generic/xHeader/Printf.h>

#include <xUtils/Conversion/Conversion_Number/Conversion_Number.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Number2String.h>
#include <xUtils/Conversion/Conversion_String/Conversion_String.h>
#include <xUtils/Conversion/Conversion_String2Number/Conversion_String2Number.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-6.3, -10.1, -10.3, -12.2, -12.7, -12.10, -14.5, -16.1")
#endif
/* internal vsnprintf*/
UBase_t vsnprintf__uxUserGeneric(CONV_OUT_t pvfOut, char* pcBuffer, const UBase_t uxMaxLength, const char* pcFormat, va_list vaList)
{
    UBase_t uxIndex;
    UBase_t uxFlags;
    UBase_t uxWidth;
    UBase_t uxLengthReg;
    UBase_t uxPrecision;
    UBase_t uxBase;
    UBase_t uxLengthOut;
    UBase_t uxlteration;
    boolean_t boStatusReg;
    boolean_t boNegative;

    if (0U == (uintptr_t) pcBuffer)
    {
        /*use null output function*/
        pvfOut = &Conv__enOutNull;
    }
    uxlteration = 0U;
    uxLengthOut = 0U;
    uxLengthReg = 0U;
    uxIndex = 0U;
    while ('\0' != *pcFormat)
    {
        /* pcFormat specifier?  %[uxFlags][uxWidth][.uxPrecision][length]*/
        if ('%' != *pcFormat )
        {
          /* no*/
          pvfOut(*pcFormat, pcBuffer, uxIndex, uxMaxLength);
          uxIndex++;
          pcFormat += 1U;
          continue;
        }

        pcFormat += 1U;

        /* evaluate uxFlags*/
        uxFlags = 0U;
        do
        {
            switch (*pcFormat)
            {
                case '0':
                    uxFlags |= (UBase_t) CONV_enFLAGS_ZEROPAD;
                    pcFormat += 1U;
                    boStatusReg = TRUE;
                break;
                case '-':
                    uxFlags |= (UBase_t) CONV_enFLAGS_LEFT;
                    pcFormat += 1U;
                    boStatusReg = TRUE;
                break;
                case '+':
                    uxFlags |= (UBase_t) CONV_enFLAGS_PLUS;
                    pcFormat += 1U;
                    boStatusReg = TRUE;
                break;
                case ' ':
                    uxFlags |= (UBase_t) CONV_enFLAGS_SPACE;
                    pcFormat += 1U;
                    boStatusReg = TRUE;
                break;
                case '#':
                    uxFlags |= (UBase_t) CONV_enFLAGS_HASH;
                    pcFormat += 1U;
                    boStatusReg = TRUE;
                break;
                default :
                    boStatusReg = FALSE;
                break;
            }
        }while (FALSE != boStatusReg);

        /* evaluate uxWidth field*/
        uxWidth = 0U;
        if (CONV_enERROR_OK == Conv__enIsDigit(*pcFormat))
        {
            uint64_t u64ValueTemp;
            u64ValueTemp = 0ULL;
            Conv__enString2UInteger( &pcFormat, &u64ValueTemp, &uxLengthReg);
            uxWidth = (UBase_t) u64ValueTemp;
        }
        else if ('*' == *pcFormat)
        {
            Base_t  sxWidthArgument;
            sxWidthArgument = (Base_t) va_arg(vaList, Base_t);
            if (0 > sxWidthArgument)
            {
                Base_t  sxWidthArgumentTemp;
                uxFlags |= (UBase_t) CONV_enFLAGS_LEFT;    /* reverse padding*/
                sxWidthArgumentTemp = 0;
                sxWidthArgumentTemp -= sxWidthArgument;
                uxWidth = (UBase_t) (sxWidthArgumentTemp);
            }
            else
            {
                uxWidth = (UBase_t) sxWidthArgument;
            }
            pcFormat += 1U;
        }

        /* evaluate uxPrecision field */
        uxPrecision = 0U;
        if ('.' == *pcFormat)
        {
            uxFlags |= (UBase_t) CONV_enFLAGS_PRECISION;
            pcFormat += 1U;
            if(CONV_enERROR_OK == Conv__enIsDigit(*pcFormat))
            {
                uint64_t u64ValueTemp;
                u64ValueTemp = 0ULL;
                Conv__enString2UInteger( &pcFormat, &u64ValueTemp, &uxLengthReg);
                uxPrecision = (UBase_t) u64ValueTemp;
            }
            else if ('*' == *pcFormat)
            {
                Base_t  sxPrecisionArgument;
                sxPrecisionArgument = (Base_t) va_arg(vaList, Base_t);
                if(0 <= sxPrecisionArgument)
                {
                    uxPrecision = (UBase_t) sxPrecisionArgument;
                }
                else
                {
                    uxPrecision = 0U;
                }
                pcFormat += 1U;
            }
        }

        /* evaluate length field*/
        switch (*pcFormat)
        {
            case 'l' :
                uxFlags |= (UBase_t) CONV_enFLAGS_LONG;
                pcFormat += 1U;
                if ('l' == *pcFormat)
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_LONG_LONG;
                    pcFormat += 1U;
                }
                break;
            case 'h' :
                uxFlags |= (UBase_t) CONV_enFLAGS_SHORT;
                pcFormat += 1U;
                if ('h' == *pcFormat)
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_CHAR;
                    pcFormat += 1U;
                }
                break;
            case 't' :
                uxFlags |= (UBase_t) CONV_enFLAGS_LONG;
                pcFormat += 1U;
                break;
            case 'j' :
                uxFlags |= (UBase_t) CONV_enFLAGS_LONG_LONG;
                pcFormat += 1U;
                break;
            case 'z' :
                uxFlags |= (UBase_t) CONV_enFLAGS_LONG;
                pcFormat += 1U;
                break;
            default :
                break;
        }

        /* evaluate specifier*/
        switch (*pcFormat)
        {
            case 'd' :
            case 'i' :
            case 'u' :
            case 'x' :
            case 'X' :
            case 'o' :
            case 'b' :
            {
                /* set the uxBase*/
                uxBase = 0U;
                if (('x' == *pcFormat) || ('X' == *pcFormat))
                {
                    uxBase = 16U;
                }
                else if ('o' == *pcFormat )
                {
                    uxBase = 8U;
                }
                else if ('b' == *pcFormat )
                {
                    uxBase = 2U;
                }
                else
                {
                    uxBase = 10U;
                    uxFlags &= ~(UBase_t) CONV_enFLAGS_HASH;   /* no hash for dec pcFormat*/
                }

                /* uppercase*/
                if ('X' == *pcFormat)
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_UPPERCASE;
                }

                /* no plus or space flag for U, x, X, o, b*/
                if (('i' != *pcFormat ) && ('d' != *pcFormat))
                {
                    uxFlags &= ~((UBase_t) CONV_enFLAGS_PLUS | (UBase_t) CONV_enFLAGS_SPACE);
                }

                /* ignore '0' flag when uxPrecision is given*/
                if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_PRECISION))
                {
                    uxFlags &= ~(UBase_t) CONV_enFLAGS_ZEROPAD;
                }

                /* convert the integer*/
                if (('i' == *pcFormat) || ('d' == *pcFormat))
                {
                    Base_t  sxValueArgumentTemp;
                    UBase_t uxValueTemp;
                    /* signed*/
                    if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG_LONG))
                    {
                        int64_t  s64ValueArgument;
                        uint64_t u64ValueTemp;
                        s64ValueArgument = (int64_t) va_arg(vaList, int64_t);
                        if(0 <= s64ValueArgument)
                        {
                            u64ValueTemp = (uint64_t) s64ValueArgument;
                            boNegative = FALSE;
                        }
                        else
                        {
                            int64_t  s64ValueArgumentTemp;
                            s64ValueArgumentTemp = 0;
                            s64ValueArgumentTemp -= s64ValueArgument;
                            u64ValueTemp = (uint64_t) s64ValueArgumentTemp;
                            boNegative = TRUE;
                        }
                        Conv__enNumber2String_LongLong(pvfOut, pcBuffer, u64ValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, (uint64_t) uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                    else if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG))
                    {
                        Base_t  sxValueArgument;
                        sxValueArgument = (Base_t) va_arg(vaList, Base_t);
                        if(sxValueArgument >= 0)
                        {
                            uxValueTemp = (UBase_t) sxValueArgument;
                            boNegative = FALSE;
                        }
                        else
                        {
                            sxValueArgumentTemp = 0;
                            sxValueArgumentTemp -= sxValueArgument;
                            uxValueTemp = (UBase_t) sxValueArgumentTemp;
                            boNegative = TRUE;
                        }
                        Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                    else
                    {
                        Base_t  sxValueArgument;
                        if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_CHAR))
                        {
                            int8_t  s8ValueArgument;
                            s8ValueArgument = (int8_t) va_arg(vaList, Base_t);
                            sxValueArgument = (Base_t) s8ValueArgument;
                        }
                        else  if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_SHORT))
                        {
                            int16_t  s16ValueArgument;
                            s16ValueArgument = (int16_t) va_arg(vaList, Base_t);
                            sxValueArgument = (Base_t) s16ValueArgument;
                        }
                        else
                        {
                            sxValueArgument = (Base_t) va_arg(vaList, Base_t);
                        }

                        if(sxValueArgument >= 0)
                        {
                            uxValueTemp = (UBase_t) sxValueArgument;
                            boNegative = FALSE;
                        }
                        else
                        {
                            sxValueArgumentTemp = 0;
                            sxValueArgumentTemp -= sxValueArgument;
                            uxValueTemp = (UBase_t) sxValueArgumentTemp;
                            boNegative = TRUE;
                        }
                        Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                }
                else
                {
                    /* unsigned*/
                    UBase_t  uxValueArgument = 0UL;
                    if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG_LONG))
                    {
                        uint64_t  u64ValueArgument;
                        u64ValueArgument = (uint64_t) va_arg(vaList, uint64_t);
                        boNegative = FALSE;
                        Conv__enNumber2String_LongLong(pvfOut, pcBuffer, u64ValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, (uint64_t) uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                    else if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG))
                    {
                        uxValueArgument = (UBase_t) va_arg(vaList, UBase_t);
                        boNegative = FALSE;

                        Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                    else
                    {

                        if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_CHAR))
                        {
                            uint8_t  u8ValueArgument;
                            u8ValueArgument = (uint8_t) va_arg(vaList, Base_t);
                            uxValueArgument = (UBase_t) u8ValueArgument;
                        }
                        else if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_SHORT))
                        {
                            uint16_t  u16ValueArgument;
                            u16ValueArgument = (uint16_t) va_arg(vaList, UBase_t);
                            uxValueArgument = (UBase_t) u16ValueArgument;
                        }
                        else
                        {
                            uxValueArgument = (UBase_t) va_arg(vaList, UBase_t);
                        }
                        boNegative = FALSE;
                        Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, uxBase, uxPrecision);
                        uxIndex = uxLengthOut;
                    }
                }
                pcFormat += 1U;
                break;
            }
            case 'f' :
            case 'F' :
            {
                if ('F' == *pcFormat)
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_UPPERCASE;
                }
                float64_t  f64DoubleArgument;
                f64DoubleArgument = (float64_t) va_arg(vaList, float64_t);
                Conv__enNumber2String_Float(pvfOut, pcBuffer, f64DoubleArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxPrecision);
                uxIndex = uxLengthOut;
                pcFormat += 1U;
                break;
            }
            case 'e':
            case 'E':
            case 'g':
            case 'G':
            {
                if (( 'g' == *pcFormat) || ('G' == *pcFormat))
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_ADAPT_EXP;
                }
                if (('E' == *pcFormat ) || ('G' == *pcFormat))
                {
                    uxFlags |= (UBase_t) CONV_enFLAGS_UPPERCASE;
                }
                float64_t  f64DoubleArgument;
                f64DoubleArgument = (float64_t) va_arg(vaList, float64_t);
                Conv__enNumber2String_Exponential(pvfOut, pcBuffer, f64DoubleArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxPrecision);
                uxIndex = uxLengthOut;
                pcFormat += 1U;
                break;
            }
            case 'c' :
            {
                char  cValueArgument;
                cValueArgument = (char)va_arg(vaList, Base_t);
                uxlteration = 1U;
                /* pre padding*/
                if (0U == (uxFlags & (UBase_t) CONV_enFLAGS_LEFT))
                {
                    while (uxlteration < uxWidth)
                    {
                        uxlteration++;
                        pvfOut(' ', pcBuffer, uxIndex, uxMaxLength);
                        uxIndex++;
                    }
                }
                /* char output*/
                pvfOut(cValueArgument, pcBuffer, uxIndex, uxMaxLength);
                uxIndex++;
                /* post padding*/
                if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LEFT))
                {
                    while (uxlteration < uxWidth)
                    {
                        uxlteration++;
                        pvfOut(' ', pcBuffer, uxIndex, uxMaxLength);
                        uxIndex++;
                    }
                }
                pcFormat += 1U;
                break;
            }
            case 's' :
            {
                UBase_t uxPrecisionTemp;
                char*  pcValueArgument;
                pcValueArgument = (char*) va_arg(vaList, char*);
                if(0U == uxPrecision)
                {
                    uxPrecisionTemp = (UBase_t) -1;
                }
                else
                {
                    uxPrecisionTemp = uxPrecision;
                }
                CONV_enStringLength(pcValueArgument, &uxlteration, uxPrecisionTemp);
                /* pre padding*/
                if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_PRECISION))
                {
                    if(uxlteration> uxPrecision)
                    {
                        uxlteration = uxPrecision;
                    }
                }
                if (0U == (uxFlags & (UBase_t) CONV_enFLAGS_LEFT))
                {
                    while (uxlteration < uxWidth)
                    {
                        uxlteration++;
                        pvfOut(' ', pcBuffer, uxIndex, uxMaxLength);
                        uxIndex++;
                    }
                }
                /* string output*/
                while (('\0' != *pcValueArgument) &&
                       ((0U == (uxFlags & (UBase_t) CONV_enFLAGS_PRECISION)) || (0U != uxPrecision)))
                {
                    uxPrecision--;
                    pvfOut(*pcValueArgument, pcBuffer, uxIndex, uxMaxLength);
                    uxIndex++;
                    pcValueArgument += 1U;
                }
                /* post padding*/
                if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LEFT))
                {
                    while (uxlteration < uxWidth)
                    {
                        uxlteration++;
                        pvfOut(' ', pcBuffer, uxIndex, uxMaxLength);
                        uxIndex++;
                    }
                }
                pcFormat += 1U;
                break;
            }
            case 'p' :
            {
                UBase_t  uxValueArgument;
                uintptr_t pvPointerArgument;
                uxWidth = sizeof(void*) * 2U;
                uxFlags |= (UBase_t) CONV_enFLAGS_ZEROPAD | (UBase_t) CONV_enFLAGS_UPPERCASE;
                pvPointerArgument = (uintptr_t) va_arg(vaList, void*);
                uxValueArgument = (UBase_t) pvPointerArgument;
                boNegative = FALSE;
                Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, boNegative, 16U, uxPrecision);
                uxIndex = uxLengthOut;
                pcFormat += 1U;
                break;
            }

            case '%' :
                pvfOut('%', pcBuffer, uxIndex, uxMaxLength);
                uxIndex++;
                pcFormat += 1U;
                break;
            default :
                pvfOut(*pcFormat, pcBuffer, uxIndex, uxMaxLength);
                uxIndex++;
                pcFormat += 1U;
                break;
        }
    }

    /* termination*/
    if(uxIndex > uxMaxLength)
    {
      uxIndex = uxMaxLength;
      uxIndex -= 1U;
    }
    pvfOut((char)0, pcBuffer, uxIndex, uxMaxLength);

    /* return written chars without terminating \0*/
    return (uxIndex);
}


UBase_t printf__uxUser(const char* pcFormat, ...)
{
  va_list vaList;
  va_start(vaList, pcFormat);
  char pcBuffer[1] = {'\0'};
  const UBase_t uxLength = vsnprintf__uxUserGeneric( &Conv__enOutChar, pcBuffer, (size_t) -1, pcFormat, vaList);
  va_end(vaList);
  return (uxLength);
}


UBase_t sprintf__uxUser(char* pcBuffer, const char* pcFormat, ...)
{
  va_list vaList;
  va_start(vaList, pcFormat);
  const UBase_t uxLength = vsnprintf__uxUserGeneric( &Conv__enOutBuffer, pcBuffer, (size_t) -1, pcFormat, vaList);
  va_end(vaList);
  return (uxLength);
}


UBase_t  snprintf__uxUser(char* pcBuffer, UBase_t uxCount, const char* pcFormat, ...)
{
  va_list vaList;
  va_start(vaList, pcFormat);
  const UBase_t uxLength = vsnprintf__uxUserGeneric( &Conv__enOutBuffer, pcBuffer, uxCount, pcFormat, vaList);
  va_end(vaList);
  return (uxLength);
}


UBase_t fctprintf__uxUser(CONV_nERROR (*pvfFunctionOut) (char cCharacter, void* pvPrintArguments), void* pvPrintArguments, const char* pcFormat, ...)
{
  va_list vaList;
  va_start(vaList, pcFormat);
  CONV_OUT_WRAPPER_t out_fct_wrap = { pvfFunctionOut, pvPrintArguments };
  const UBase_t uxLength = vsnprintf__uxUserGeneric( &Conv__enOutFunction, (char*) & out_fct_wrap, (UBase_t) -1, pcFormat, vaList);
  va_end(vaList);
  return (uxLength);
}

UBase_t vprintf__uxUser(const char* pcFormat, va_list vaList)
{
  char pcBuffer[1] = {'\0'};
  return vsnprintf__uxUserGeneric( &Conv__enOutChar, pcBuffer, (UBase_t) -1, pcFormat, vaList);
}

UBase_t vsprintf__uxUser(char* pcBuffer, const char* pcFormat, va_list vaList)
{
  return vsnprintf__uxUserGeneric( &Conv__enOutBuffer, pcBuffer, (UBase_t) -1, pcFormat, vaList);
}

UBase_t vsnprintf__uxUser(char* pcBuffer, const UBase_t uxCount, const char* pcFormat, va_list vaList)
{
  return vsnprintf__uxUserGeneric( &Conv__enOutBuffer, pcBuffer, uxCount, pcFormat, vaList);
}


#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
