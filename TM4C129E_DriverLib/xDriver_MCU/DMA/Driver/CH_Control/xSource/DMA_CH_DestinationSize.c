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
    UBase_t uxChannelReg;
    UBase_t uxChannelMaskReg;
    DMA_nERROR enErrorReg;

    uxChannelReg = 0U;
    uxChannelMaskReg = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while((0U != uxChannelMaskReg) && (DMA_enERROR_OK != enErrorReg))
    {
        if(0UL != ((UBase_t) DMA_enCHMASK_0 & uxChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetDestinationDataSizeByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enDataSizeArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
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
    stRegister.uxShift = DMA_CH_CTL_R_DSTSIZE_BIT;
    stRegister.uxMask = DMA_CH_CTL_DSTSIZE_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enDataSizeArg;

    DMA_nERROR enErrorReg;
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
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penDataSizeArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_DSTSIZE_BIT;
        stRegister.uxMask = DMA_CH_CTL_DSTSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penDataSizeArg = (DMA_nCH_DATA_SIZE) stRegister.uxValue;
        }
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
