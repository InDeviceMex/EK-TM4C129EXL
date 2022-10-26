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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nERROR UART__enSetReceiveDMAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_DMACTL_R_RXDMAE_BIT;
    stRegister.uxMask = UART_DMACTL_RXDMAE_MASK;
    stRegister.uptrAddress = UART_DMACTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetReceiveDMAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DMACTL_R_RXDMAE_BIT;
        stRegister.uxMask = UART_DMACTL_RXDMAE_MASK;
        stRegister.uptrAddress = UART_DMACTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetReceiveDMADisableOnError(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_DMACTL_R_DMAERR_BIT;
    stRegister.uxMask = UART_DMACTL_DMAERR_MASK;
    stRegister.uptrAddress = UART_DMACTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetReceiveDMADisableOnError(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DMACTL_R_DMAERR_BIT;
        stRegister.uxMask = UART_DMACTL_DMAERR_MASK;
        stRegister.uptrAddress = UART_DMACTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetTransmitDMAState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    stRegister.uxShift = UART_DMACTL_R_TXDMAE_BIT;
    stRegister.uxMask = UART_DMACTL_TXDMAE_MASK;
    stRegister.uptrAddress = UART_DMACTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

UART_nERROR UART__enGetTransmitDMAState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = UART_DMACTL_R_TXDMAE_BIT;
        stRegister.uxMask = UART_DMACTL_TXDMAE_MASK;
        stRegister.uptrAddress = UART_DMACTL_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
