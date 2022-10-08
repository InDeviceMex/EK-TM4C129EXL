/**
 *
 * @file UART_Busy.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_Busy.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nBUSY UART__enGetBusyState(UART_nMODULE enModule)
{
    UART_nBUSY enBusyReg = UART_enBUSY_IDLE;
    enBusyReg = (UART_nBUSY) UART__uxReadRegister(enModule, UART_FR_OFFSET,
                                   UART_FR_BUSY_MASK, UART_FR_R_BUSY_BIT);
    return (enBusyReg);
}

