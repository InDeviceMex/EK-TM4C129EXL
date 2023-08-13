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
            enErrorReg = DMA_CH__enSetDestinationTransferIncrementByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enIncrementArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
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
    stRegister.uxShift = DMA_CH_CTL_R_DSTINC_BIT;
    stRegister.uxMask = DMA_CH_CTL_DSTINC_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enIncrementArg;

    DMA_nERROR enErrorReg;
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
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penIncrementArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_DSTINC_BIT;
        stRegister.uxMask = DMA_CH_CTL_DSTINC_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penIncrementArg = (DMA_nCH_INCREMENT) stRegister.uxValue;
        }
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
