/**
 *
 * @file UART_HighSpeed.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_HighSpeed.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetHighSpeed(UART_nMODULE enModule, UART_nSTATE enHighSpeedArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enHighSpeedArg,
                         UART_CTL_HSE_MASK, UART_CTL_R_HSE_BIT);
}

UART_nSTATE UART__enGetHighSpeed(UART_nMODULE enModule)
{
    UART_nSTATE enHighSpeedReg = UART_enSTATE_DIS;
    enHighSpeedReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                                 UART_CTL_HSE_MASK, UART_CTL_R_HSE_BIT);
    return (enHighSpeedReg);
}
