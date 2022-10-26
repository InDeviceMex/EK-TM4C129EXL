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
    char pcBufferReg[400UL];
    char* pcBufferRegPointer;
    va_list vaList;

    va_start(vaList, pcFormat);
    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    va_end(vaList);
    pcBufferRegPointer = pcBufferReg;
    UART__enSetFifoDataByte(enModule, (uint8_t*) pcBufferRegPointer, &uxLengtht);
    return  (uxLengtht);
}

UBase_t UART__uxvsPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList)
{
    UBase_t uxLengtht;
    char pcBufferReg[400UL];
    char* pcBufferRegPointer;

    uxLengtht = vsnprintf__uxUser(pcBufferReg, 400UL, pcFormat, vaList);
    pcBufferRegPointer = pcBufferReg;
    UART__enSetFifoDataByte(enModule, (uint8_t*) pcBufferRegPointer, &uxLengtht);
    return (uxLengtht);
}

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
