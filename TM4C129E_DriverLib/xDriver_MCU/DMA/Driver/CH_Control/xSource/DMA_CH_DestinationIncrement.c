/**
 *
 * @file DMA_CH_DestinationIncrement.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationIncrement.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != u32ChannelMaskReg) && (DMA_enERROR_OK == enErrorReg))
    {
        if(0UL != ((uint32_t) DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetDestinationTransferIncrementByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, enIncrementArg);
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_INCREMENT enIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationTransferIncrementByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enIncrementArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationTransferIncrementByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationTransferIncrementByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enIncrementArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT enIncrementArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_CH_CTL_R_DSTINC_BIT;
    stRegister.u32Mask = DMA_CH_CTL_DSTINC_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enIncrementArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT enIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enIncrementArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT enIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enIncrementArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_INCREMENT* penIncrementArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penIncrementArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = DMA_CH_CTL_R_DSTINC_BIT;
        stRegister.u32Mask = DMA_CH_CTL_DSTINC_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penIncrementArg = (DMA_nCH_INCREMENT) stRegister.u32Value;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_INCREMENT* penIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penIncrementArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetDestinationTransferIncrementByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_INCREMENT* penIncrementArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationTransferIncrementByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penIncrementArg);
    return (enErrorReg);
}

