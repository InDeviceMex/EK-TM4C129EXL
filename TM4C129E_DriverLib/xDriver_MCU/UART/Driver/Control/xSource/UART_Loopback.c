/**
 *
 * @file UART_Loopback.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_Loopback.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetLoopback(UART_nMODULE enModule, UART_nLOOPBACK enLoopbackArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (uint32_t) enLoopbackArg, UART_CTL_LBE_MASK, UART_CTL_R_LBE_BIT);
}

UART_nLOOPBACK UART__enGetLoopback(UART_nMODULE enModule)
{
    UART_nLOOPBACK enLoopbackReg = UART_enLOOPBACK_UNDEF;
    UART__enReadRegister(enModule, UART_CTL_OFFSET, (uint32_t*) &enLoopbackReg, UART_CTL_LBE_MASK, UART_CTL_R_LBE_BIT);
    return enLoopbackReg;
}
