/**
 *
 * @file DMA_CH_Peripheral.c
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Peripheral.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetPeripheralStateByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                          DMA_nCH_PERIPHERAL enPeripheralStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(DMA_enCH_PERIPHERAL_ENA == enPeripheralStateArg)
    {
        stRegister.uptrAddress = DMA_CH_REQMASKCLR_OFFSET;
    }
    else
    {
        stRegister.uptrAddress = DMA_CH_REQMASKSET_OFFSET;
    }
    stRegister.u32Shift = 0UL;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.u32Value = (uint32_t) enChannelMaskArg;
    enErrorReg = DMA__enWriteRegister_Direct(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetPeripheralStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                            DMA_nCH_PERIPHERAL enPeripheralStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enChannelArg, (uint32_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        if(DMA_enCH_PERIPHERAL_ENA == enPeripheralStateArg)
        {
            stRegister.uptrAddress = DMA_CH_REQMASKCLR_OFFSET;
        }
        else
        {
            stRegister.uptrAddress = DMA_CH_REQMASKSET_OFFSET;
        }

        stRegister.u32Shift = (uint32_t) enChannelArg;
        stRegister.u32Mask = 1UL;
        stRegister.u32Value = 1UL;
        enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetPeripheralStateByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                           DMA_nCHMASK* penCHMaskReqArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penCHMaskReqArg)
    {
        stRegister.u32Shift = DMA_CH_REQMASKSET_R_SET0_BIT;
        stRegister.u32Mask = (uint32_t) enChannelMaskArg;
        stRegister.uptrAddress = DMA_CH_REQMASKSET_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penCHMaskReqArg = (DMA_nCHMASK) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetPeripheralStateByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                           DMA_nCH_PERIPHERAL* penPeripheralStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(0UL != (uintptr_t) penPeripheralStateArg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((uint32_t) enChannelArg, (uint32_t) DMA_enCH_MAX);
        if(DMA_enERROR_OK == enErrorReg)
        {
            stRegister.u32Shift = (uint32_t) enChannelArg;
            stRegister.u32Shift += DMA_CH_REQMASKSET_R_SET0_BIT;
            stRegister.u32Mask = DMA_CH_REQMASKSET_SET0_MASK;
            stRegister.uptrAddress = DMA_CH_REQMASKSET_OFFSET;
            enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
            if(DMA_enERROR_OK == enErrorReg)
            {
                *penPeripheralStateArg = (DMA_nCH_PERIPHERAL) stRegister.u32Value;
            }
        }
    }
    else
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    return (enErrorReg);
}
