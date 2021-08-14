/**
 *
 * @file UART_BaudRate.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_BaudRate.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetBaudRateInteger(UART_nMODULE enModule, uint32_t u32Integer)
{
    UART__vWriteRegister(enModule, UART_IBRD_OFFSET, u32Integer,
                         UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
}

uint32_t UART__u32GetBaudRateInteger(UART_nMODULE enModule)
{
    uint32_t u32BaudIntegerReg = 0UL;
    u32BaudIntegerReg = UART__u32ReadRegister(enModule, UART_IBRD_OFFSET,
                                  UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
    return (u32BaudIntegerReg);
}

void UART__vSetBaudRateFractional(UART_nMODULE enModule, uint32_t u32Fractional)
{
    UART__vWriteRegister(enModule, UART_FBRD_OFFSET, u32Fractional,
                         UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
}

uint32_t UART__u32GetBaudRateFractional(UART_nMODULE enModule)
{
    uint32_t u32BaudFracReg = 0UL;
    u32BaudFracReg = UART__u32ReadRegister(enModule, UART_FBRD_OFFSET,
                         UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
    return (u32BaudFracReg);
}



