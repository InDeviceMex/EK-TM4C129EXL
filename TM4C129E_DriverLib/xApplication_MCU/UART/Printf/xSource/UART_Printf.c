/**
 *
 * @file UART_Printf.c
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/Printf/UART_Printf.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-6.3, -10.1, -10.3, -12.2, -12.7, -12.10, -14.5, -16.1")
#endif

UBase_t UART__uxPrintf(UART_nMODULE enModule,const char* pcFormat, ... )
{
    UBase_t uxLengtht;
    char pcBufferReg[400UL] = {0};
    va_list vaList;

    va_start(vaList, pcFormat);
    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    va_end(vaList);
    UART__enSetFifoDataByte(enModule, (uint8_t*) pcBufferReg, &uxLengtht);
    return  (uxLengtht);
}

UBase_t UART__uxvsPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList)
{
    UBase_t uxLengtht;
    char pcBufferReg[400UL] = {0};

    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    UART__enSetFifoDataByte(enModule, (uint8_t*) pcBufferReg, &uxLengtht);
    return (uxLengtht);
}

UART_enCustomPrintHandler_t UART_penCustomPrintHandler[(UBase_t) UART_enMODULE_MAX] =
{
 &UART__enSetFifoDataByte, &UART__enSetFifoDataByte, &UART__enSetFifoDataByte, &UART__enSetFifoDataByte,
 &UART__enSetFifoDataByte, &UART__enSetFifoDataByte, &UART__enSetFifoDataByte, &UART__enSetFifoDataByte
};

UART_nERROR UART__enSetCustomPrintfHandle(UART_nMODULE enModuleArg, UART_enCustomPrintHandler_t penFunctionHandlerArg)
{
    UART_nERROR enErrorReg;
    enErrorReg = UART_enERROR_OK;
    if(UART_enMODULE_MAX <= enModuleArg)
    {
        enErrorReg = UART_enERROR_VALUE;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        UART_penCustomPrintHandler[(UBase_t) enModuleArg] = penFunctionHandlerArg;
    }
    return (enErrorReg);
}


UBase_t UART__uxCustomPrintf(UART_nMODULE enModule,const char* pcFormat, ... )
{
    UBase_t uxLengtht;
    char pcBufferReg[400UL] = {0};
    va_list vaList;

    va_start(vaList, pcFormat);
    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    va_end(vaList);
    UART_penCustomPrintHandler[(UBase_t) enModule](enModule, (uint8_t*) pcBufferReg, &uxLengtht);
    return  (uxLengtht);
}

UBase_t UART__uxvsCustomPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList)
{
    UBase_t uxLengtht;
    char pcBufferReg[400UL] = {0};

    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    UART_penCustomPrintHandler[(UBase_t) enModule](enModule, (uint8_t*) pcBufferReg, &uxLengtht);
    return (uxLengtht);
}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
