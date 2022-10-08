/**
 *
 * @file DMA_CH_SoftwareRequest.c
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
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_SoftwareRequest.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enSetSoftwareRequestByMask(DMA_nMODULE enModuleArg, DMA_nCHMASK enChannelMaskArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.uxShift = DMA_CH_SWREQ_R_SWREQ0_BIT;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = DMA_CH_SWREQ_OFFSET;
    stRegister.uxValue = (UBase_t) enChannelMaskArg;
    enErrorReg = DMA__enWriteRegister_Direct(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetSoftwareRequestByNumber(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enChannelArg;
        stRegister.uxShift += DMA_CH_SWREQ_R_SWREQ0_BIT;
        stRegister.uxMask = DMA_CH_SWREQ_R_SWREQ0_MASK;
        stRegister.uptrAddress = DMA_CH_SWREQ_OFFSET;
        stRegister.uxValue = DMA_CH_SWREQ_R_SWREQ0_REQ;
        enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}
