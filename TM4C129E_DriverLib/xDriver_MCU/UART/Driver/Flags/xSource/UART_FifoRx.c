/**
 *
 * @file UART_FifoRx.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoRx.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nFIFO_EMPTY UART__enIsFifoReceiveEmpty(UART_nMODULE enModule)
{
    UART_nFIFO_EMPTY enFifoReg = UART_enFIFO_NO_EMPTY;
    enFifoReg = (UART_nFIFO_EMPTY) UART__uxReadRegister(enModule, UART_FR_OFFSET,
                                         UART_FR_RXFE_MASK, UART_FR_R_RXFE_BIT);
    return (enFifoReg);
}

UART_nFIFO_FULL UART__enIsFifoReceiveFull(UART_nMODULE enModule)
{
    UART_nFIFO_FULL enFifoReg = UART_enFIFO_NO_FULL;
    enFifoReg = (UART_nFIFO_FULL) UART__uxReadRegister(enModule, UART_FR_OFFSET,
                                        UART_FR_RXFF_MASK, UART_FR_R_RXFF_BIT);
    return (enFifoReg);
}
