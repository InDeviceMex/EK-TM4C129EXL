/**
 *
 * @file SSI_DMA.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_DMA.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enSetReceiveDMAState(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_DMACTL_R_RXDMAE_BIT;
    stRegister.uxMask = SSI_DMACTL_RXDMAE_MASK;
    stRegister.uptrAddress = SSI_DMACTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetReceiveDMAState(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_DMACTL_R_RXDMAE_BIT;
        stRegister.uxMask = SSI_DMACTL_RXDMAE_MASK;
        stRegister.uptrAddress = SSI_DMACTL_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SSI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}



SSI_nERROR SSI__enSetTransmitDMAState(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    stRegister.uxShift = SSI_DMACTL_R_TXDMAE_BIT;
    stRegister.uxMask = SSI_DMACTL_TXDMAE_MASK;
    stRegister.uptrAddress = SSI_DMACTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SSI__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

SSI_nERROR SSI__enGetTransmitDMAState(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg)
{
    SSI_Register_t stRegister;
    SSI_nERROR enErrorReg;

    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SSI_DMACTL_R_TXDMAE_BIT;
        stRegister.uxMask = SSI_DMACTL_TXDMAE_MASK;
        stRegister.uptrAddress = SSI_DMACTL_OFFSET;
        enErrorReg = SSI__enReadRegister(enModuleArg, &stRegister);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SSI_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
