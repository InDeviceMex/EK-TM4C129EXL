/**
 *
 * @file DMA_State.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_State.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA__enGetStateMachine(DMA_nMODULE enModuleArg, DMA_nSTATE_MACHINE* penStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = DMA_STAT_R_STATE_BIT;
        stRegister.u32Mask = DMA_STAT_STATE_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (DMA_nSTATE_MACHINE) stRegister.u32Value;
    }
    return (enErrorReg);
}


DMA_nERROR DMA__enGetChannelsAvailable(DMA_nMODULE enModuleArg, uint32_t* pu32ChannelNumberArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pu32ChannelNumberArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = DMA_STAT_R_CHANS_BIT;
        stRegister.u32Mask = DMA_STAT_CHANS_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.u32Value += 1U;
        *pu32ChannelNumberArg = stRegister.u32Value;
    }
    return (enErrorReg);
}
