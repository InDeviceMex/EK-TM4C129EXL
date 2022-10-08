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

    stRegister.uxShift = FPU_CCR_R_ASPEN_BIT;
    stRegister.uxMask = FPU_CCR_ASPEN_MASK;
    stRegister.uptrAddress = FPU_CCR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = FPU__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FPU_nERROR FPU__enGetAutoPreservationState(FPU_nMODULE enModuleArg,
                                           FPU_nSTATE* penStateArg)
{
    FPU_Register_t stRegister;

    FPU_nERROR enErrorReg;

    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = FPU_CCR_R_ASPEN_BIT;
        stRegister.uxMask = FPU_CCR_ASPEN_MASK;
        stRegister.uptrAddress = FPU_CCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        *penStateArg = (FPU_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}
