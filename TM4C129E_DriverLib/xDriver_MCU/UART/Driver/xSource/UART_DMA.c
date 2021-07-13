/**
 *
 * @file UART_DMA.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_DMA.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetDMARx(UART_nMODULE enModule, UART_nDMA enDMAEnableArg)
{
    UART__vWriteRegister(enModule, UART_DMACTL_OFFSET, (uint32_t) enDMAEnableArg, UART_DMACTL_RXDMAE_MASK, UART_DMACTL_R_RXDMAE_BIT);
}

UART_nDMA UART__enGetDMARx(UART_nMODULE enModule)
{
    UART_nDMA enDMAEnableReg = UART_enDMA_UNDEF;
    UART__enReadRegister(enModule, UART_DMACTL_OFFSET, (uint32_t*) &enDMAEnableReg, UART_DMACTL_RXDMAE_MASK, UART_DMACTL_R_RXDMAE_BIT);
    return enDMAEnableReg;
}

void UART__vSetDMATx(UART_nMODULE enModule, UART_nDMA enDMAEnableArg)
{
    UART__vWriteRegister(enModule, UART_DMACTL_OFFSET, (uint32_t) enDMAEnableArg, UART_DMACTL_TXDMAE_MASK, UART_DMACTL_R_TXDMAE_BIT);
}

UART_nDMA UART__enGetDMATx(UART_nMODULE enModule)
{
    UART_nDMA enDMAEnableReg = UART_enDMA_UNDEF;
    UART__enReadRegister(enModule, UART_DMACTL_OFFSET, (uint32_t*) &enDMAEnableReg, UART_DMACTL_TXDMAE_MASK, UART_DMACTL_R_TXDMAE_BIT);
    return enDMAEnableReg;
}

void UART__vSetDMADisableOnError(UART_nMODULE enModule, UART_nDMA enDMAEnableArg)
{
    UART__vWriteRegister(enModule, UART_DMACTL_OFFSET, (uint32_t) enDMAEnableArg, UART_DMACTL_DMAERR_MASK, UART_DMACTL_R_DMAERR_BIT);
}

UART_nDMA UART__enGetDMADisableOnError(UART_nMODULE enModule)
{
    UART_nDMA enDMAEnableReg = UART_enDMA_UNDEF;
    UART__enReadRegister(enModule, UART_DMACTL_OFFSET, (uint32_t*) &enDMAEnableReg, UART_DMACTL_DMAERR_MASK, UART_DMACTL_R_DMAERR_BIT);
    return enDMAEnableReg;
}
