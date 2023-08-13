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
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_STAT_R_STATE_BIT;
        stRegister.uxMask = DMA_STAT_STATE_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penStateArg = (DMA_nSTATE_MACHINE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


DMA_nERROR DMA__enGetChannelsAvailable(DMA_nMODULE enModuleArg, UBase_t* puxChannelNumberArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxChannelNumberArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_STAT_R_CHANS_BIT;
        stRegister.uxMask = DMA_STAT_CHANS_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            stRegister.uxValue += 1U;
            *puxChannelNumberArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
