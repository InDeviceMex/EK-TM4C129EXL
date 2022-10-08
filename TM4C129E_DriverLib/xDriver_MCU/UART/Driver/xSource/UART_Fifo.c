/**
 *
 * @file UART_Fifo.c
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_Fifo.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>


void UART__vSetFifoRxLevel(UART_nMODULE enModule, UART_nFIFO_LEVEL enFifoLevelArg)
{
    UART__vWriteRegister(enModule, UART_IFLS_OFFSET, (UBase_t) enFifoLevelArg,
                         UART_IFLS_RXIFLSEL_MASK, UART_IFLS_R_RXIFLSEL_BIT);
}

UART_nFIFO_LEVEL UART__enGetFifoRxLevel(UART_nMODULE enModule)
{
    UART_nFIFO_LEVEL enFifoLevelReg = UART_enFIFO_LEVEL_2_16;
    enFifoLevelReg = (UART_nFIFO_LEVEL) UART__uxReadRegister(enModule, UART_IFLS_OFFSET,
                                  UART_IFLS_RXIFLSEL_MASK, UART_IFLS_R_RXIFLSEL_BIT);
    return (enFifoLevelReg);
}

void UART__vSetFifoTxLevel(UART_nMODULE enModule, UART_nFIFO_LEVEL enFifoLevelArg)
{
    UART__vWriteRegister(enModule, UART_IFLS_OFFSET, (UBase_t) enFifoLevelArg,
                         UART_IFLS_TXIFLSEL_MASK, UART_IFLS_R_TXIFLSEL_BIT);
}

UART_nFIFO_LEVEL UART__enGetFifoTxLevel(UART_nMODULE enModule)
{
    UART_nFIFO_LEVEL enFifoLevelReg = UART_enFIFO_LEVEL_2_16;
    enFifoLevelReg = (UART_nFIFO_LEVEL) UART__uxReadRegister(enModule, UART_IFLS_OFFSET,
                                  UART_IFLS_TXIFLSEL_MASK, UART_IFLS_R_TXIFLSEL_BIT);
    return (enFifoLevelReg);
}
