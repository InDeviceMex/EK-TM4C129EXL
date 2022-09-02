/*
 * FPU_LazyPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_LazyPreservation.h>

#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

FPU_nERROR FPU__enSetLazyPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE enStateArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    stRegister.u32Shift = FPU_CCR_R_LSPEN_BIT;
    stRegister.u32Mask = FPU_CCR_LSPEN_MASK;
    stRegister.uptrAddress = FPU_CCR_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = FPU__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FPU_nERROR FPU__enGetLazyPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE* penStateArg)
{
    FPU_Register_t stRegister;

    FPU_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        stRegister.u32Shift = FPU_CCR_R_LSPEN_BIT;
        stRegister.u32Mask = FPU_CCR_LSPEN_MASK;
        stRegister.uptrAddress = FPU_CCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);

        *penStateArg = (FPU_nSTATE) stRegister.u32Value;
    }
    else
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    return (enErrorReg);
}

FPU_nERROR FPU__enGetLazyPreservationStatus(FPU_nMODULE enModuleArg,
                                           FPU_nSTATUS* penStatusArg)
{
    FPU_Register_t stRegister;

    FPU_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStatusArg)
    {
        stRegister.u32Shift = FPU_CCR_R_LSPACT_BIT;
        stRegister.u32Mask = FPU_CCR_LSPACT_MASK;
        stRegister.uptrAddress = FPU_CCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);

        *penStatusArg = (FPU_nSTATUS) stRegister.u32Value;
    }
    else
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    return (enErrorReg);
}
