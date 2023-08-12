/*
 * FPU_HalfPrecision.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_HalfPrecision.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

void FPU__vSetHalfPrecision(FPU_nMODULE enModuleArg, FPU_nHALF_PRECISION enHalfPrecisionArg)
{
    MCU__vFPUStatusControlMask(FPU_DSCR_R_AHP_MASK, (UBase_t) enHalfPrecisionArg);
}

FPU_nHALF_PRECISION FPU__enGetHalfPrecision(FPU_nMODULE enModuleArg)
{
    FPU_nHALF_PRECISION enHalfPrecisionReg;
    enHalfPrecisionReg = (FPU_nHALF_PRECISION) MCU__uxGetFPUStatusControlBit(FPU_DSCR_R_AHP_BIT);
    return (enHalfPrecisionReg);
}

FPU_nERROR FPU__enGetHalfPrecisionDefault(FPU_nMODULE enModuleArg, FPU_nHALF_PRECISION* penHalfPrecisionArg)
{
    FPU_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penHalfPrecisionArg) ? FPU_enERROR_POINTER : FPU_enERROR_OK;
    if(FPU_enERROR_OK == enErrorReg)
    {
        FPU_Register_t stRegister;
        stRegister.uxShift = FPU_DSCR_R_AHP_BIT;
        stRegister.uxMask = FPU_DSCR_AHP_MASK;
        stRegister.uptrAddress = FPU_DSCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
        if(FPU_enERROR_OK == enErrorReg)
        {
            *penHalfPrecisionArg = (FPU_nHALF_PRECISION) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
