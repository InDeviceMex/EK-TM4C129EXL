/**
 *
 * @file DMA_CH_DestinationAddress.c
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationAddress.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                              DMA_nCH_CONTROL enControlArg, UBase_t uxEndAddressArg)
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
            enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg,  (DMA_nCH) uxChannelReg, enControlArg, uxEndAddressArg);
        }
        uxChannelReg++;
        uxChannelMaskReg >>= 1U;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, uxEndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        UBase_t uxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, uxEndAddressArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, UBase_t uxEndAddressArg)
{
    DMA_Register_t stRegister;
    stRegister.uxShift = DMA_CH_DSTENDP_R_ADDR_BIT;
    stRegister.uxMask = DMA_CH_DSTENDP_ADDR_MASK;
    stRegister.uptrAddress = DMA_CH_DSTENDP_OFFSET;
    stRegister.uxValue = uxEndAddressArg;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, uxEndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t uxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, uxEndAddressArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, UBase_t* puxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxEndAddressArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_CH_DSTENDP_R_ADDR_BIT;
        stRegister.uxMask = DMA_CH_DSTENDP_ADDR_MASK;
        stRegister.uptrAddress = DMA_CH_DSTENDP_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *puxEndAddressArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        UBase_t* puxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, puxEndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          UBase_t* puxEndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, puxEndAddressArg);
    return (enErrorReg);
}
