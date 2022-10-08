/**
 *
 * @file DMA_ChannelControlPointer.c
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
 * @verbatim 19 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_ChannelControlPointer.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA__enSetPrimaryControlStructureAddress(DMA_nMODULE enModuleArg, uintptr_t uptrControlAddressArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = DMA_CTLBASE_R_ADDR_MASK;
    stRegister.uptrAddress = DMA_CTLBASE_OFFSET;
    stRegister.uxValue = (UBase_t) uptrControlAddressArg;
    enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetPrimaryControlStructureAddress(DMA_nMODULE enModuleArg, uintptr_t* puptrControlAddressArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) puptrControlAddressArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = DMA_CTLBASE_R_ADDR_MASK;
        stRegister.uptrAddress = DMA_CTLBASE_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *puptrControlAddressArg = (uintptr_t) stRegister.uxValue;
    }
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetPrimaryControlStructureAddress(DMA_nMODULE enModuleArg, DMA_nCH enChannelArg, uintptr_t* puptrControlAddressArg)
{
    uintptr_t uptrChannelOffset;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA__enGetPrimaryControlStructureAddress(enModuleArg, puptrControlAddressArg);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrChannelOffset = (uintptr_t) enChannelArg;
        uptrChannelOffset <<= 4UL; /*DMA_CH_REG_NUM * 4UL = 4UL * 4UL = 16UL*/
        *puptrControlAddressArg += uptrChannelOffset;
    }
    return (enErrorReg);
}
