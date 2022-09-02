/*
 * FPU_AutoPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AutoPreservation.h>

#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

FPU_nERROR FPU__enSetAutoPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE enStateArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    stRegister.u32Shift = FPU_CCR_R_ASPEN_BIT;
    stRegister.u32Mask = FPU_CCR_ASPEN_MASK;
    stRegister.uptrAddress = FPU_CCR_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = FPU__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FPU_nERROR FPU__enGetAutoPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE* penStateArg)
{
    FPU_Register_t stRegister;

    FPU_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStateArg)
    {
        stRegister.u32Shift = FPU_CCR_R_ASPEN_BIT;
        stRegister.u32Mask = FPU_CCR_ASPEN_MASK;
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
