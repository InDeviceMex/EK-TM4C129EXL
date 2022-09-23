/**
 *
 * @file DMA_CH_TransferSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_TransferSize.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32TransferSizeArg)
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
            enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, u32TransferSizeArg);
        }
        u32ChannelReg++;
        u32ChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, u32TransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, u32TransferSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t u32TransferSizeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == u32TransferSizeArg)
    {
        enErrorReg = DMA_enERROR_RANGE;
    }

    if(DMA_enERROR_OK == enErrorReg)
    {
        u32TransferSizeArg--;
        stRegister.u32Shift = DMA_CH_CTL_R_XFERSIZE_BIT;
        stRegister.u32Mask = DMA_CH_CTL_XFERSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        stRegister.u32Value = (uint32_t) u32TransferSizeArg;
        enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, u32TransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, u32TransferSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, uint32_t* pu32TransferSizeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pu32TransferSizeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = DMA_CH_CTL_R_XFERSIZE_BIT;
        stRegister.u32Mask = DMA_CH_CTL_XFERSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        (stRegister.u32Value)++;
        *pu32TransferSizeArg = (uint32_t) stRegister.u32Value;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t* pu32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pu32TransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t* pu32TransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pu32TransferSizeArg);
    return (enErrorReg);
}
