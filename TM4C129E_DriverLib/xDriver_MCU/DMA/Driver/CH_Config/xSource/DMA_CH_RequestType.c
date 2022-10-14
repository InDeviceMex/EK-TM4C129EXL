/**
 *
 * @file DMA_CH_RequestType.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_RequestType.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetRequestTypeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                          DMA_nCH_REQTYPE enRequestTypeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    if(DMA_enCH_REQTYPE_BOTH == enRequestTypeArg)
    {
        stRegister.uptrAddress = DMA_CH_USEBURSTCLR_OFFSET;
    }
    else
    {
        stRegister.uptrAddress = DMA_CH_USEBURSTSET_OFFSET;
    }
    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uxValue = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA__enWriteRegister_Direct(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetRequestTypeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                            DMA_nCH_REQTYPE enRequestTypeArg)
{
    DMA_Register_t stRegister;
    UBase_t uxValueReg;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        if(DMA_enCH_REQTYPE_BOTH == enRequestTypeArg)
        {
            stRegister.uptrAddress = DMA_CH_USEBURSTCLR_OFFSET;
        }
        else
        {
            stRegister.uptrAddress = DMA_CH_USEBURSTSET_OFFSET;
        }

        uxValueReg = 1UL << enChannelArg;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_32;
        stRegister.uxValue = uxValueReg;
        enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetRequestTypeByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg,
                                           DMA_nCHMASK* penCHMaskReqArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penCHMaskReqArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DMA_CH_USEBURSTSET_R_SET0_BIT;
        stRegister.uxMask = (UBase_t) enChannelMaskArg;
        stRegister.uptrAddress = DMA_CH_USEBURSTSET_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penCHMaskReqArg = (DMA_nCHMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetRequestTypeByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg,
                                           DMA_nCH_REQTYPE* penRequestTypeArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penRequestTypeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enChannelArg;
        stRegister.uxShift += DMA_CH_USEBURSTSET_R_SET0_BIT;
        stRegister.uxMask = DMA_CH_USEBURSTSET_SET0_MASK;
        stRegister.uptrAddress = DMA_CH_USEBURSTSET_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penRequestTypeArg = (DMA_nCH_REQTYPE) stRegister.uxValue;
    }
    return (enErrorReg);
}
