/**
 *
 * @file UART_ClockConfig.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_ClockConfig.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetClockConfig(UART_nMODULE enModule, UART_nCLOCK enClock)
{
    UART__vWriteRegister(enModule, UART_CC_OFFSET, (uint32_t) enClock, UART_CC_CS_MASK, UART_CC_R_CS_BIT);
}

UART_nCLOCK UART__enGetClockConfig(UART_nMODULE enModule)
{
    UART_nCLOCK enClockReg = UART_enCLOCK_UNDEF;
    UART__enReadRegister(enModule, UART_CC_OFFSET, (uint32_t*) &enClockReg, UART_CC_CS_MASK, UART_CC_R_CS_BIT);
    return enClockReg;
}
