/**
 *
 * @file UART_EndTransmission.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_EndTransmission.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetEndTransmission(UART_nMODULE enModule, UART_nEOT enEndTransmissionArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (uint32_t) enEndTransmissionArg, UART_CTL_EOT_MASK, UART_CTL_R_EOT_BIT);
}

UART_nEOT UART__enGetEndTransmission(UART_nMODULE enModule)
{
    UART_nEOT enEndTransmissionReg = UART_enEOT_UNDEF;
    UART__enReadRegister(enModule, UART_CTL_OFFSET, (uint32_t*) &enEndTransmissionReg, UART_CTL_EOT_MASK, UART_CTL_R_EOT_BIT);
    return enEndTransmissionReg;
}
