/**
 *
 * @file DMA_CH_TransferMode.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_TransferMode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                           DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE enModeArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    while(0U != u32ChannelMaskReg)
    {
        if(0UL != (DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetTransferModeByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, enModeArg);
        }

        if(DMA_enERROR_OK != enErrorReg)
        {
            break;
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                   DMA_nCH_MODE enModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferModeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enModeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferModeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                     DMA_nCH_MODE enModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferModeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enModeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE enModeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_CH_CTL_R_XFERMODE_BIT;
    stRegister.u32Mask = DMA_CH_CTL_XFERMODE_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enModeArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     DMA_nCH_MODE enModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferModeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enModeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_MODE enModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferModeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enModeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, DMA_nCH_MODE* penModeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penModeArg)
    {
        stRegister.u32Shift = DMA_CH_CTL_R_XFERMODE_BIT;
        stRegister.u32Mask = DMA_CH_CTL_XFERMODE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penModeArg = (DMA_nCH_MODE) stRegister.u32Value;
        }
}
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                     DMA_nCH_MODE* penModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferModeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penModeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetTransferModeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                       DMA_nCH_MODE* penModeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferModeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penModeArg);
    return (enErrorReg);
}

