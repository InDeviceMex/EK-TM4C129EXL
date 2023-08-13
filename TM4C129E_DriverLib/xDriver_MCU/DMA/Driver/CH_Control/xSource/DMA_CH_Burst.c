/**
 *
 * @file DMA_CH_Burst.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_Burst.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                DMA_nCH_CONTROL enControlArg, DMA_nSTATE enStateArg)
{
    UBase_t uxChannelReg;
    UBase_t uxChannelMaskReg;
    DMA_nERROR enErrorReg;

    uxChannelReg = 0U;
    uxChannelMaskReg = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != uxChannelMaskReg) && (DMA_enERROR_OK == enErrorReg))
    {
        if(0UL != ((UBase_t) DMA_enCHMASK_0 & uxChannelMaskReg))
        {
            enErrorReg = DMA_CH__enUseLastBurstTransferByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enStateArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nSTATE enStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enUseLastBurstTransferByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enStateArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enUseLastBurstTransferByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nSTATE enStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enUseLastBurstTransferByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enStateArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nSTATE enStateArg)
{
    DMA_Register_t stRegister;
    stRegister.uxShift = DMA_CH_CTL_R_NXTUSEBURST_BIT;
    stRegister.uxMask = DMA_CH_CTL_NXTUSEBURST_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nSTATE enStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enUseLastBurstTransferByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enStateArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enUseLastBurstTransferByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nSTATE enStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enUseLastBurstTransferByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enStateArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_CONTROL enControlArg, DMA_nSTATE* penStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_NXTUSEBURST_BIT;
        stRegister.uxMask = DMA_CH_CTL_NXTUSEBURST_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penStateArg = (DMA_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                               DMA_nSTATE* penStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetLastBurstTransferStateByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penStateArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetLastBurstTransferStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nSTATE* penStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetLastBurstTransferStateByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penStateArg);
    return (enErrorReg);
}

