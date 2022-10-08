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
  UBase_t uxFlags = 0U;
  UBase_t uxWidth = 0U;
  UBase_t uxNegative = 0U;
  UBase_t uxLengthOut = 0U;
  uint64_t u64ValueTemp = 0ULL;
  UBase_t uxPrecision = 0U;
  UBase_t uxPrecisionTemp = 0U;
  UBase_t n = 0U;
  UBase_t uxIndex = 0U;
  UBase_t  uxBase = 0U;

  UBase_t uxValueTemp = 0UL;

  UBase_t uxlteration = 0U;

  float64_t  f64DoubleArgument = 0;
  uintptr_t pvPointerArgument = 0U;
  Base_t  sxWidthArgument = 0;
  Base_t  sxWidthArgumentTemp = 0;
  Base_t  sxPrecisionArgument = 0;
  Base_t  sxValueArgument = 0L;
  Base_t  sxValueArgumentTemp = 0L;
  UBase_t  uxValueArgument = 0UL;
  char*  pcValueArgument = 0U;
  int64_t  s64ValueArgument = 0LL;
  int64_t  s64ValueArgumentTemp = 0LL;
  uint64_t  u64ValueArgument = 0ULL;
  uint16_t  u16ValueArgument = 0U;
  int16_t  s16ValueArgument = 0;
  uint8_t  u8ValueArgument = 0U;
  int8_t  s8ValueArgument = 0;
  char  cValueArgument = '\0';

  UBase_t uxLengthReg = 0U;
  if ((UBase_t) 0U == (UBase_t) pcBuffer) {
    /*use null output function*/
    pvfOut = &Conv__enOutNull;
  }

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
    else
    {
      /* yes, evaluate it*/
      pcFormat += 1U;
    }

    /* evaluate uxFlags*/
    uxFlags = 0U;
    do
    {
      switch (*pcFormat)
      {
        case '0':
            uxFlags |= (UBase_t) CONV_enFLAGS_ZEROPAD;
            pcFormat += 1U;
            n = 1U;
            break;
        case '-':
            uxFlags |= (UBase_t) CONV_enFLAGS_LEFT;
            pcFormat += 1U;
            n = 1U;
            break;
        case '+':
            uxFlags |= (UBase_t) CONV_enFLAGS_PLUS;
            pcFormat += 1U;
            n = 1U;
            break;
        case ' ':
            uxFlags |= (UBase_t) CONV_enFLAGS_SPACE;
            pcFormat += 1U;
            n = 1U;
            break;
        case '#':
            uxFlags |= (UBase_t) CONV_enFLAGS_HASH;
            pcFormat += 1U;
            n = 1U;
            break;
        default :
            n = 0U;
            break;
      }
    } while (n);

    /* evaluate uxWidth field*/
    uxWidth = 0U;
    if (CONV_enERROR_OK == Conv__enIsDigit(*pcFormat))
    {
       Conv__enString2UInteger( &pcFormat, &u64ValueTemp, &uxLengthReg);
       uxWidth = (UBase_t) u64ValueTemp;
    }
    else if ('*' == *pcFormat)
    {
        sxWidthArgument = (Base_t) va_arg(vaList, Base_t);
        if (sxWidthArgument < 0)
        {
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
    else{}

    /* evaluate uxPrecision field */
    uxPrecision = 0U;
    if ( '.' == *pcFormat )
    {
      uxFlags |= (UBase_t) CONV_enFLAGS_PRECISION;
      pcFormat += 1U;
      if(CONV_enERROR_OK == Conv__enIsDigit(*pcFormat) )
      {
          Conv__enString2UInteger( &pcFormat, &u64ValueTemp, &uxLengthReg);
          uxPrecision = (UBase_t) u64ValueTemp;
      }
      else if ('*' == *pcFormat)
      {
          sxPrecisionArgument = (Base_t) va_arg(vaList, Base_t);
          if(sxPrecisionArgument >= 0)
          {
              uxPrecision = (UBase_t) sxPrecisionArgument;
          }
          else
          {
              uxPrecision = 0U;
          }
        pcFormat += 1U;
      }
      else{}
    }

    /* evaluate length field*/
    switch (*pcFormat)
    {
      case 'l' :
        uxFlags |= (UBase_t) CONV_enFLAGS_LONG;
        pcFormat += 1U;
        if ( 'l' == *pcFormat)
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
      case'j' :
          uxFlags |= (UBase_t) CONV_enFLAGS_LONG_LONG;
          pcFormat += 1U;
          break;
      case  'z' :

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
      case  'b' :
      {
        /* set the uxBase*/
          uxBase = 0U;
        if ( ('x' == *pcFormat) || ('X' == *pcFormat) )
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
        if ('X' == *pcFormat) {
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
          /* signed*/
          if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG_LONG))
          {
                s64ValueArgument = (int64_t) va_arg(vaList, int64_t);
                if(s64ValueArgument >= 0)
                {
                    u64ValueTemp = (uint64_t) s64ValueArgument;
                    uxNegative = 0U;
                }
                else
                {
                    s64ValueArgumentTemp = 0;
                    s64ValueArgumentTemp -= s64ValueArgument;
                    u64ValueTemp = (uint64_t) s64ValueArgumentTemp;
                    uxNegative = 1U;
                }

                Conv__enNumber2String_LongLong(pvfOut, pcBuffer, u64ValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, (uint64_t) uxBase, uxPrecision);
                uxIndex = uxLengthOut;
          }
          else if (0U != (uxFlags & (UBase_t) CONV_enFLAGS_LONG))
          {
              sxValueArgument = (Base_t) va_arg(vaList, Base_t);
              if(sxValueArgument >= 0)
              {
                  uxValueTemp = (UBase_t) sxValueArgument;
                  uxNegative = 0U;
              }
              else
              {
                  sxValueArgumentTemp = 0;
                  sxValueArgumentTemp -= sxValueArgument;
                  uxValueTemp = (UBase_t) sxValueArgumentTemp;
                  uxNegative = 1U;
              }

              Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, uxBase, uxPrecision);
              uxIndex = uxLengthOut;

          }
          else
          {
              if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_CHAR))
              {
                  s8ValueArgument = (int8_t) va_arg(vaList, Base_t);
                  sxValueArgument = (Base_t) s8ValueArgument;
              }
              else  if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_SHORT))
              {
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
                  uxNegative = 0U;
              }
              else
              {
                  sxValueArgumentTemp = 0;
                  sxValueArgumentTemp -= sxValueArgument;
                  uxValueTemp = (UBase_t) sxValueArgumentTemp;
                  uxNegative = 1U;
              }

              Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueTemp, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, uxBase, uxPrecision);
              uxIndex = uxLengthOut;
          }
        }
        else
        {
          /* unsigned*/
          if (uxFlags & (UBase_t) CONV_enFLAGS_LONG_LONG)
          {
              u64ValueArgument = (uint64_t) va_arg(vaList, uint64_t);
              uxNegative = 0U;

              Conv__enNumber2String_LongLong(pvfOut, pcBuffer, u64ValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, (uint64_t) uxBase, uxPrecision);
              uxIndex = uxLengthOut;
          }
          else if (uxFlags & (UBase_t) CONV_enFLAGS_LONG)
          {
              uxValueArgument = (UBase_t) va_arg(vaList, UBase_t);
              uxNegative = 0U;

              Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, uxBase, uxPrecision);
              uxIndex = uxLengthOut;
          }
          else
          {

              if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_CHAR))
              {
                  u8ValueArgument = (uint8_t) va_arg(vaList, Base_t);
                  uxValueArgument = (UBase_t) u8ValueArgument;
              }
              else  if(0U != (uxFlags & (UBase_t) CONV_enFLAGS_SHORT))
              {
                  u16ValueArgument = (uint16_t) va_arg(vaList, UBase_t);
                  uxValueArgument = (UBase_t) u16ValueArgument;
              }
              else
              {
                  uxValueArgument = (UBase_t) va_arg(vaList, UBase_t);
              }
              uxNegative = 0U;

              Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, uxBase, uxPrecision);
              uxIndex = uxLengthOut;
          }
        }
        pcFormat += 1U;
        break;
      }
      case 'f' :
      case 'F' :
        if ('F' == *pcFormat)
        {
            uxFlags |= (UBase_t) CONV_enFLAGS_UPPERCASE;
        }
        f64DoubleArgument = (float64_t) va_arg(vaList, float64_t);
        Conv__enNumber2String_Float(pvfOut, pcBuffer, f64DoubleArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxPrecision);
        uxIndex = uxLengthOut;

        pcFormat += 1U;
        break;
      case 'e':
      case 'E':
      case 'g':
      case 'G':
        if (( 'g' == *pcFormat) || ('G' == *pcFormat))
        {
            uxFlags |= (UBase_t) CONV_enFLAGS_ADAPT_EXP;
        }
        if (('E' == *pcFormat ) || ('G' == *pcFormat))
        {
            uxFlags |= (UBase_t) CONV_enFLAGS_UPPERCASE;
        }

        f64DoubleArgument = (float64_t) va_arg(vaList, float64_t);
        Conv__enNumber2String_Exponential(pvfOut, pcBuffer, f64DoubleArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxPrecision);
        uxIndex = uxLengthOut;
        pcFormat += 1U;
        break;

      case 'c' :
      {
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
        while (('\0' != *pcValueArgument) && ((0U == (uxFlags & (UBase_t) CONV_enFLAGS_PRECISION)) || (0U != uxPrecision)))
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
        uxWidth = sizeof(void*) * 2U;
        uxFlags |= (UBase_t) CONV_enFLAGS_ZEROPAD | (UBase_t) CONV_enFLAGS_UPPERCASE;

        pvPointerArgument = (uintptr_t) va_arg(vaList, void*);
        uxValueArgument = (UBase_t) pvPointerArgument;
        uxNegative = 0U;

        Conv__enNumber2String_Long(pvfOut, pcBuffer, uxValueArgument, uxIndex, uxMaxLength, &uxLengthOut, uxWidth, uxFlags, uxNegative, 16U, uxPrecision);
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
