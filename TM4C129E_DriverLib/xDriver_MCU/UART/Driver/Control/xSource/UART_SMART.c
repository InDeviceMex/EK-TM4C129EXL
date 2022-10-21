/**
 *
 * @file UART_SMART.c
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
#include <xDriver_MCU/UART/Driver/Control/xHeader/UART_SMART.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetSMART(UART_nMODULE enModule, UART_nSTATE enSmartArg)
{
    UART__vWriteRegister(enModule, UART_CTL_OFFSET, (UBase_t) enSmartArg,
                         UART_CTL_SMART_MASK, UART_CTL_R_SMART_BIT);
}

UART_nSTATE UART__enGetSMART(UART_nMODULE enModule)
{
    UART_nSTATE enSmartReg = UART_enSTATE_DIS;
    enSmartReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_CTL_OFFSET,
                                    UART_CTL_SMART_MASK, UART_CTL_R_SMART_BIT);
    return (enSmartReg);
}
