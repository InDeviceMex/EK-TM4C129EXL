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

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-6.3, -10.1, -10.3, -12.2, -12.7, -12.10, -14.5, -16.1")
#endif

#define PRINF_TIMEOUT (100000UL)

uint32_t UART__u32Printf(UART_nMODULE enModule,const char* pcFormat, ... )
{
    uint32_t u32Lengtht = 0UL;
    static char pcBufferReg[400UL] = {0};
    char* pcBufferRegPointer = 0UL;
    va_list vaList;
    va_start(vaList, pcFormat);
    u32Lengtht = vsnprintf__u32User(pcBufferReg, 400UL, pcFormat,vaList);
    va_end(vaList);
    pcBufferRegPointer = pcBufferReg;
    UART__u32SetFifoDataByte(enModule, (uint8_t*) pcBufferRegPointer,u32Lengtht, PRINF_TIMEOUT);
    return  (u32Lengtht);
}

uint32_t UART__u32vsPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList)
{
    uint32_t u32Lengtht = 0UL;
    static char pcBufferReg[400UL] = {0};
    char* pcBufferRegPointer = 0UL;
    u32Lengtht = vsnprintf__u32User(pcBufferReg, 400UL, pcFormat,vaList);
    pcBufferRegPointer = pcBufferReg;
    UART__u32SetFifoDataByte(enModule, (uint8_t*) pcBufferRegPointer,u32Lengtht, PRINF_TIMEOUT);
    return (u32Lengtht);
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
