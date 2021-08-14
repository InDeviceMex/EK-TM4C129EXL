/**
 *
 * @file GraphicTerminal_ClearLine.c
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
#include <xApplication_MCU/UART/GraphicTerminal/xHeader/GraphicTerminal_ClearLine.h>

#include <xApplication_MCU/UART/Printf/UART_Printf.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-4.1")
#endif

void GraphTerm__vClearLine(UART_nMODULE enModule, uint32_t u32Line)
{
    UART__u32Printf(enModule,"\x1B[%u;0H\x1B[K", u32Line);
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("4.1")
#endif
