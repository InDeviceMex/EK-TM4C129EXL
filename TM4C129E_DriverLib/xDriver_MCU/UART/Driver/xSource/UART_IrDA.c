/**
 *
 * @file UART_IrDA.c
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_IrDA.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetIrDALowPowerDivider(UART_nMODULE enModule, UBase_t uxDivider)
{
    UART__vWriteRegister(enModule, UART_ILPR_OFFSET, uxDivider,
                         UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
}

UBase_t UART__uxGetIrDALowPowerDivider(UART_nMODULE enModule)
{
    UBase_t uxIrDaReg = 0UL;
    uxIrDaReg = UART__uxReadRegister(enModule, UART_DR_OFFSET,
                       UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
    return (uxIrDaReg);
}
