/**
 *
 * @file UART_FifoTx.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoTx.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nFIFO_EMPTY UART__enIsFifoTransmitEmpty(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_FR_OFFSET, &u32Reg, UART_FR_TXFE_MASK, UART_FR_R_TXFE_BIT);
    return (UART_nFIFO_EMPTY) u32Reg;
}

UART_nFIFO_FULL UART__enIsFifoTransmitFull(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_FR_OFFSET, &u32Reg, UART_FR_TXFF_MASK, UART_FR_R_TXFF_BIT);
    return (UART_nFIFO_FULL) u32Reg;
}
