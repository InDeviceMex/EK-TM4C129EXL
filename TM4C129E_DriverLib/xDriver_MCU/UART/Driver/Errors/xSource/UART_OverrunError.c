/**
 *
 * @file UART_OverrunError.c
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
#include <xDriver_MCU/UART/Driver/Errors/xHeader/UART_OverrunError.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enGetOverrunErrorState(UART_nMODULE enModule)
{
    UART_nERROR enErrorReg = UART_enERROR_INACTIVE;
    enErrorReg = (UART_nERROR) UART__uxReadRegister(enModule, UART_RSR_OFFSET,
                                         UART_RSR_OE_MASK, UART_RSR_R_OE_BIT);
    return (enErrorReg);
}
