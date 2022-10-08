/**
 *
 * @file DMA_CH_SourceAccess.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_SourceAccess.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS enAccessArg)
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
            enErrorReg = DMA_CH__enSetSourceDataAccessByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, enAccessArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                               DMA_nCH_ACCESS enAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetSourceDataAccessByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, enAccessArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetSourceDataAccessByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                                 DMA_nCH_ACCESS enAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetSourceDataAccessByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, enAccessArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS enAccessArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.uxShift = DMA_CH_CTL_R_SRCPROT0_BIT;
    stRegister.uxMask = DMA_CH_CTL_SRCPROT0_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enAccessArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_ACCESS enAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetSourceDataAccessByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, enAccessArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_ACCESS enAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetSourceDataAccessByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, enAccessArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, DMA_nCH_ACCESS* penAccessArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penAccessArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DMA_CH_CTL_R_SRCPROT0_BIT;
        stRegister.uxMask = DMA_CH_CTL_SRCPROT0_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penAccessArg = (DMA_nCH_ACCESS) stRegister.uxValue;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                 DMA_nCH_ACCESS* penAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetSourceDataAccessByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, penAccessArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetSourceDataAccessByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                                   DMA_nCH_ACCESS* penAccessArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetSourceDataAccessByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, penAccessArg);
    return (enErrorReg);
}





