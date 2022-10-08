/**
 *
 * @file Conversion_Wrapper.c
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
 * @verbatim 6 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Wrapper.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-16.7")
#endif

CONV_nERROR Conv__enOutBuffer(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght)
{
    CONV_nERROR enErrorReg;
    char* pcBuffer;

    enErrorReg = CONV_enERROR_OK;
    if(0UL == (uintptr_t) pvBuffer)
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        if (uxIndex >= uxMaxLenght)
        {
            enErrorReg = CONV_enERROR_RANGE;
        }
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        pcBuffer = (char*) pvBuffer;
        pcBuffer += uxIndex;
        *pcBuffer = cCharacter;
    }
    return (enErrorReg);
}

CONV_nERROR Conv__enOutNull(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght)
{
    CONV_nERROR enErrorReg;
    (void)cCharacter; (void)pvBuffer; (void)uxIndex; (void)uxMaxLenght;
    enErrorReg = CONV_enERROR_OK;
    return (enErrorReg);
}

CONV_nERROR Conv__enOutChar(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght)
{
    CONV_nERROR enErrorReg;

    (void)pvBuffer; (void)uxIndex; (void)uxMaxLenght;
    enErrorReg = CONV_enERROR_OK;
    if(0UL == (uintptr_t) pvBuffer)
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
        if (0U != (uint8_t) cCharacter)
        {
            /* _putchar(character);*/
        }
    }
    return (enErrorReg);
}

CONV_nERROR Conv__enOutFunction(char cCharacter, void* pvBuffer, UBase_t uxIndex, UBase_t uxMaxLenght)
{
    CONV_nERROR enErrorReg;
    CONV_OUT_WRAPPER_t* pvOutWrapper;
    CONV_FUNCTION_t pvOutFunction;
    void* pvOutFunctionArguments;

    (void)uxIndex; (void)uxMaxLenght;
    enErrorReg = CONV_enERROR_OK;
    if(0UL == (uintptr_t) pvBuffer)
    {
        enErrorReg = CONV_enERROR_POINTER;
    }
    if(CONV_enERROR_OK == enErrorReg)
    {
      pvOutWrapper = (CONV_OUT_WRAPPER_t*) pvBuffer;
      pvOutFunction = (CONV_FUNCTION_t) pvOutWrapper->pvfFunction;
      pvOutFunctionArguments = pvOutWrapper->pvArguments;
      if (0U != (uint8_t) cCharacter)
      {
          enErrorReg = pvOutFunction(cCharacter, pvOutFunctionArguments);
      }
    }
    return (enErrorReg);
}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("16.7")
#endif
