/**
 *
 * @file DMA_CH_BurstSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_BurstSize.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE enSizeArg)
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
            enErrorReg = DMA_CH__enSetArbitrationSizeByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enSizeArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetArbitrationSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetArbitrationSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetArbitrationSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE enSizeArg)
{
    DMA_Register_t stRegister;
    stRegister.uxShift = DMA_CH_CTL_R_ARBSIZE_BIT;
    stRegister.uxMask = DMA_CH_CTL_ARBSIZE_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enSizeArg;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetArbitrationSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE enSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetArbitrationSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_ARBITRATION_SIZE* penSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penSizeArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_ARBSIZE_BIT;
        stRegister.uxMask = DMA_CH_CTL_ARBSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penSizeArg = (DMA_nCH_ARBITRATION_SIZE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        DMA_nCH_ARBITRATION_SIZE* penSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetArbitrationSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetArbitrationSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          DMA_nCH_ARBITRATION_SIZE* penSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetArbitrationSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penSizeArg);
    return (enErrorReg);
}
