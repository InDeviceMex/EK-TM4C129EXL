/**
 *
 * @file UART_Stop.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Stop.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nSTOP UART__enGetStopBits(UART_nMODULE enModule)
{
    UART_nSTOP enStopReg = UART_enSTOP_ONE;
    enStopReg = (UART_nSTOP) UART__uxReadRegister(enModule, UART_LCRH_OFFSET,
                               UART_LCRH_STP2_MASK, UART_LCRH_R_STP2_BIT);
    return (enStopReg);
}

void UART__vSetStopBits(UART_nMODULE enModule, UART_nSTOP enStopBitsArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (UBase_t) enStopBitsArg,
                         UART_LCRH_STP2_MASK, UART_LCRH_R_STP2_BIT);
}

