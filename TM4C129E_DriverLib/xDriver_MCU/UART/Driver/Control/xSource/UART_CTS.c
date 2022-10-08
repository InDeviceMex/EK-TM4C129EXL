/**
 *
 * @file UART_CTS.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_CTS.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetCTSMode(UART_nMODULE enModule, UART_nCTS_MODE enCTSModeArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enCTSModeArg,
                         UART_CTL_CTSEN_MASK, UART_CTL_R_CTSEN_BIT);
}

UART_nCTS_MODE UART__enGetCTSMode(UART_nMODULE enModule)
{
    UART_nCTS_MODE enCTSModeReg = UART_enCTS_MODE_SOFT;
    enCTSModeReg = (UART_nCTS_MODE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                     UART_CTL_CTSEN_MASK, UART_CTL_R_CTSEN_BIT);
    return (enCTSModeReg);
}
