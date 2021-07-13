/**
 *
 * @file UART_Enable.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_Enable.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetEnable(UART_nMODULE enModule, UART_nENABLE enEnableArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (uint32_t) enEnableArg, UART_CTL_UARTEN_MASK, UART_CTL_R_UARTEN_BIT);
}

UART_nENABLE UART__enGetEnable(UART_nMODULE enModule)
{
    UART_nENABLE enEnableReg = UART_enENABLE_UNDEF;
    UART__enReadRegister(enModule, UART_CTL_OFFSET, (uint32_t*) &enEnableReg, UART_CTL_UARTEN_MASK, UART_CTL_R_UARTEN_BIT);
    return enEnableReg;
}
