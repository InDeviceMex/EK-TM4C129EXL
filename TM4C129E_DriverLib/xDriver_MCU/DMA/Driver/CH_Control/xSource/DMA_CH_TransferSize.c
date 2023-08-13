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
                                              DMA_nCH_CONTROL enControlArg, UBase_t uxTransferSizeArg)
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
            enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, uxTransferSizeArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, uxTransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, uxTransferSizeArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, UBase_t uxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == uxTransferSizeArg) ? DMA_enERROR_RANGE : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        uxTransferSizeArg--;

        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_XFERSIZE_BIT;
        stRegister.uxMask = DMA_CH_CTL_XFERSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        stRegister.uxValue = (UBase_t) uxTransferSizeArg;
        enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, uxTransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, uxTransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                             DMA_nCH_CONTROL enControlArg, UBase_t* puxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxTransferSizeArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_CTL_R_XFERSIZE_BIT;
        stRegister.uxMask = DMA_CH_CTL_XFERSIZE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            (stRegister.uxValue)++;
            *puxTransferSizeArg = (UBase_t) stRegister.uxValue;
        }
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t* puxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, puxTransferSizeArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetTransferSizeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          UBase_t* puxTransferSizeArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetTransferSizeByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, puxTransferSizeArg);
    return (enErrorReg);
}
