/**
 *
 * @file DMA_CH_DestinationSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationSize.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg)
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
            enErrorReg = DMA_CH__enSetDestinationDataSizeByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, enDataSizeArg);
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

DMA_nERROR DMA_CH_Primary__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_DATA_SIZE enDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationDataSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enDataSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationDataSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationDataSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enDataSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE enDataSizeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_CH_CTL_R_DSTSIZE_BIT;
    stRegister.u32Mask = DMA_CH_CTL_DSTSIZE_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.u32Value = (uint32_t) enDataSizeArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE enDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationDataSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enDataSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE enDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationDataSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enDataSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_DATA_SIZE* penDataSizeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penDataSizeArg)
    {
        stRegister.u32Shift = DMA_CH_CTL_R_DSTSIZE_BIT;
        stRegister.u32Mask = DMA_CH_CTL_DSTSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penDataSizeArg = (DMA_nCH_DATA_SIZE) stRegister.u32Value;
        }
}
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_DATA_SIZE* penDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationDataSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penDataSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetDestinationDataSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_DATA_SIZE* penDataSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationDataSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penDataSizeArg);
    return (enErrorReg);
}

