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
    stRegister.uxShift = DMA_CFG_R_MASTEN_BIT;
    stRegister.uxMask = DMA_CFG_MASTEN_MASK;
    stRegister.uptrAddress = DMA_CFG_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    DMA_nERROR enErrorReg;
    enErrorReg = DMA__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

DMA_nERROR DMA__enGetState(DMA_nMODULE enModuleArg, DMA_nSTATE* penStateArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? DMA_enERROR_POINTER : DMA_enERROR_OK;

    if(DMA_enERROR_OK == enErrorReg)
    {
        DMA_Register_t stRegister;
        stRegister.uxShift = DMA_STAT_R_MASTEN_BIT;
        stRegister.uxMask = DMA_STAT_MASTEN_MASK;
        stRegister.uptrAddress = DMA_STAT_OFFSET;
        enErrorReg = DMA__enReadRegister(enModuleArg, &stRegister);
        if(DMA_enERROR_OK == enErrorReg)
        {
            *penStateArg = (DMA_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
