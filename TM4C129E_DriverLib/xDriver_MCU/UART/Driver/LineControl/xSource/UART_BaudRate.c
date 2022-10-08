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

void UART__vSetBaudRateInteger(UART_nMODULE enModule, UBase_t uxInteger)
{
    UART__vWriteRegister(enModule, UART_IBRD_OFFSET, uxInteger,
                         UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
}

UBase_t UART__uxGetBaudRateInteger(UART_nMODULE enModule)
{
    UBase_t uxBaudIntegerReg = 0UL;
    uxBaudIntegerReg = UART__uxReadRegister(enModule, UART_IBRD_OFFSET,
                                  UART_IBRD_DIVINT_MASK, UART_IBRD_R_DIVINT_BIT);
    return (uxBaudIntegerReg);
}

void UART__vSetBaudRateFractional(UART_nMODULE enModule, UBase_t uxFractional)
{
    UART__vWriteRegister(enModule, UART_FBRD_OFFSET, uxFractional,
                         UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
}

UBase_t UART__uxGetBaudRateFractional(UART_nMODULE enModule)
{
    UBase_t uxBaudFracReg = 0UL;
    uxBaudFracReg = UART__uxReadRegister(enModule, UART_FBRD_OFFSET,
                         UART_FBRD_DIVFRAC_MASK, UART_FBRD_R_DIVFRAC_BIT);
    return (uxBaudFracReg);
}



