/**
 *
 * @file UART_RxEnable.c
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
 * @verbatim 8 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_RxEnable.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetRxEnable(UART_nMODULE enModule, UART_nLINE enLineArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (uint32_t) enLineArg, UART_CTL_RXE_MASK, UART_CTL_R_RXE_BIT);
}

UART_nLINE UART__enGetRxEnable(UART_nMODULE enModule)
{
    UART_nLINE enLineReg = UART_enLINE_UNDEF;
    UART__enReadRegister(enModule, UART_CTL_OFFSET, (uint32_t*) &enLineReg, UART_CTL_RXE_MASK, UART_CTL_R_RXE_BIT);
    return enLineReg;
}
