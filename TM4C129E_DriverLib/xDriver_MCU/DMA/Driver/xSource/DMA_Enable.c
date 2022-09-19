/**
 *
 * @file DMA_Enable.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Enable.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA__enSetState(DMA_nMODULE enModuleArg, DMA_nSTATE enStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    stRegister.u32Shift = DMA_CFG_R_MASTEN_BIT;
    stRegister.u32Mask = DMA_CFG_MASTEN_MASK;
    stRegister.uptrAddress = DMA_CFG_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetState(DMA_nMODULE enModuleArg, DMA_nSTATE* penStateArg)
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
        stRegister.u32Shift = DMA_STAT_R_MASTEN_BIT;
        stRegister.u32Mask = DMA_STAT_MASTEN_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (DMA_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}
