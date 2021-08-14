/**
 *
 * @file UART_TxEnable.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_TxEnable.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetTxEnable(UART_nMODULE enModule, UART_nLINE enLineArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (uint32_t) enLineArg,
                         UART_CTL_TXE_MASK, UART_CTL_R_TXE_BIT);
}

UART_nLINE UART__enGetTxEnable(UART_nMODULE enModule)
{
    UART_nLINE enLineReg = UART_enLINE_DIS;
    enLineReg = (UART_nLINE) UART__u32ReadRegister(enModule, UART_CTL_OFFSET,
                                      UART_CTL_TXE_MASK, UART_CTL_R_TXE_BIT);
    return (enLineReg);
}
