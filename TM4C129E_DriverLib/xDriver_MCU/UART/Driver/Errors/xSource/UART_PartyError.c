/**
 *
 * @file UART_PartyError.c
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
#include <xDriver_MCU/UART/Driver/Errors/xHeader/UART_PartyError.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nSTATUS UART__enGetParityErrorState(UART_nMODULE enModule)
{
    UART_nSTATUS enErrorReg = UART_enSTATUS_INACTIVE;
    enErrorReg = (UART_nSTATUS) UART__uxReadRegister(enModule, UART_RSR_OFFSET,
                                     UART_RSR_PE_MASK, UART_RSR_R_PE_BIT);
    return (enErrorReg);
}
