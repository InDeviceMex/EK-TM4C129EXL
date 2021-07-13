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
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_FR_OFFSET, &u32Reg, UART_FR_RXFE_MASK, UART_FR_R_RXFE_BIT);
    return (UART_nFIFO_EMPTY) u32Reg;
}

UART_nFIFO_FULL UART__enIsFifoReceiveFull(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_FR_OFFSET, &u32Reg, UART_FR_RXFF_MASK, UART_FR_R_RXFF_BIT);
    return (UART_nFIFO_FULL) u32Reg;
}
