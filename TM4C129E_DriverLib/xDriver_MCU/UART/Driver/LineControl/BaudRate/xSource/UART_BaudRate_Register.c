/**
 *
 * @file UART_BaudRate_Register.c
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
 * @verbatim 7 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/LineControl/BaudRate/xHeader/UART_BaudRate_Register.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetBaudRateIntegerPart(UART_nMODULE enModule, uint32_t u32Integer)
{
    UART__vWriteRegister(enModule, UART_IBRD_OFFSET, u32Integer, UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
}

uint32_t UART__u32GetBaudRateIntegerPart(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_IBRD_OFFSET, &u32Reg, UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
    return u32Reg;
}

void UART__vSetBaudRateFractionalPart(UART_nMODULE enModule, uint32_t u32Fractional)
{
    UART__vWriteRegister(enModule, UART_FBRD_OFFSET, u32Fractional, UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
}

uint32_t UART__u32GetBaudRateFractionalPart(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_FBRD_OFFSET, &u32Reg, UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
    return u32Reg;
}
