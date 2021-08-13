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

void UART__vSetIrDALowPowerDivider(UART_nMODULE enModule, uint32_t u32Divider)
{
    UART__vWriteRegister(enModule, UART_ILPR_OFFSET, u32Divider,
                         UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
}

uint32_t UART__u32GetIrDALowPowerDivider(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0UL;
    u32Reg = UART__u32ReadRegister(enModule, UART_DR_OFFSET,
                                   UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
    return (u32Reg);
}
