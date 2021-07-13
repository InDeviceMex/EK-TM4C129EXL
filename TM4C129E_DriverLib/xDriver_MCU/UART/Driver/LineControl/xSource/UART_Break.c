/**
 *
 * @file UART_Break.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Break.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nBREAK UART__enGetBreak(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_LCRH_OFFSET, &u32Reg, UART_LCRH_BRK_MASK, UART_LCRH_R_BRK_BIT);
    return (UART_nBREAK) u32Reg;
}

void UART__vSetBreak(UART_nMODULE enModule, UART_nBREAK enBreakArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enBreakArg, UART_LCRH_BRK_MASK, UART_LCRH_R_BRK_BIT);
}

void UART__vSendBreak(UART_nMODULE enModule)
{
    UART__vSetBreak(enModule, UART_enBREAK_ACTIVE);
}

void UART__vStopBreak(UART_nMODULE enModule)
{
    UART__vSetBreak(enModule, UART_enBREAK_DIS);
}
