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
                                              DMA_nCH_CONTROL enControlArg, uint32_t u32EndAddressArg)
{
    uint32_t u32ChannelReg;
    uint32_t u32ChannelMaskReg;
    DMA_nERROR enErrorReg;

    u32ChannelReg = 0U;
    u32ChannelMaskReg = (uint32_t) enChannelMaskArg;
    enErrorReg = DMA_enERROR_OK;
    while(0U != u32ChannelMaskReg)
    {
        if(0UL != (DMA_enCHMASK_0 & u32ChannelMaskReg))
        {
            enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg,  (DMA_nCH) u32ChannelReg, enControlArg, u32EndAddressArg);
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

DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_PRIMARY, u32EndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                                        uint32_t u32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByMask(enModuleArg, enChannelMaskArg, DMA_enCH_CONTROL_ALTERNATE, u32EndAddressArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                  DMA_nCH_CONTROL enControlArg, uint32_t u32EndAddressArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_CH_DSTENDP_R_ADDR_BIT;
    stRegister.u32Mask = DMA_CH_DSTENDP_ADDR_MASK;
    stRegister.uptrAddress = DMA_CH_DSTENDP_OFFSET;
    stRegister.u32Value = u32EndAddressArg;
    enErrorReg = DMA_CH__enWriteRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, u32EndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enSetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t u32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, u32EndAddressArg);
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                    DMA_nCH_CONTROL enControlArg, uint32_t* pu32EndAddressArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32EndAddressArg)
    {
        stRegister.u32Shift = DMA_CH_DSTENDP_R_ADDR_BIT;
        stRegister.u32Mask = DMA_CH_DSTENDP_ADDR_MASK;
        stRegister.uptrAddress = DMA_CH_DSTENDP_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, enChannelArg, enControlArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *pu32EndAddressArg = (uint32_t) stRegister.u32Value;
        }
}
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH_Primary__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                        uint32_t* pu32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_PRIMARY, pu32EndAddressArg);
    return (enErrorReg);
}

DMA_nERROR DMA_CH_Alternate__enGetDestinationEndAddressByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                                          uint32_t* pu32EndAddressArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enGetDestinationEndAddressByNumber(enModuleArg, enChannelArg, DMA_enCH_CONTROL_ALTERNATE, pu32EndAddressArg);
    return (enErrorReg);
}

