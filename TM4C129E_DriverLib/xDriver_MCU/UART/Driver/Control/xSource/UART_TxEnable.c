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

void UART__vSetTxEnable(UART_nMODULE enModule, UART_nSTATE enLineArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enLineArg,
                         UART_CTL_TXE_MASK, UART_CTL_R_TXE_BIT);
}

UART_nSTATE UART__enGetTxEnable(UART_nMODULE enModule)
{
    UART_nSTATE enLineReg = UART_enSTATE_DIS;
    enLineReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                      UART_CTL_TXE_MASK, UART_CTL_R_TXE_BIT);
    return (enLineReg);
}
