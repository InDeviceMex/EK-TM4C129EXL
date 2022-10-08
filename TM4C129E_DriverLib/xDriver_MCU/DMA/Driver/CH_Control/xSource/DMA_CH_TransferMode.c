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
            enErrorReg = DMA_CH__enSetTransferModeByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enModeArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
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

    stRegister.uxShift = DMA_CH_CTL_R_XFERMODE_BIT;
    stRegister.uxMask = DMA_CH_CTL_XFERMODE_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
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

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DMA_CH_CTL_R_XFERMODE_BIT;
        stRegister.uxMask = DMA_CH_CTL_XFERMODE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penModeArg = (DMA_nCH_MODE) stRegister.uxValue;
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

