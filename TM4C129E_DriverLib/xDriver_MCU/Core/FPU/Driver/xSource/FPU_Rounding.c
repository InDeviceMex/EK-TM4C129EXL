/*
 * FPU_Rounding.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_Rounding.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

void FPU__vSetRoundingMode(FPU_nMODULE enModuleArg,
                                   FPU_nROUNDING enRoundingArg)
{
    MCU__vFPUStatusControlMask(FPU_DSCR_R_RMODE_MASK, (UBase_t) enRoundingArg);
}

FPU_nROUNDING FPU__enGetRoundingMode(FPU_nMODULE enModuleArg)
{
    UBase_t uxRoundingReg;
    uxRoundingReg = MCU__uxGetFPUStatusControlBit(FPU_DSCR_R_RMODE_MASK);
    uxRoundingReg >>= FPU_DSCR_R_RMODE_BIT;
    return ((FPU_nROUNDING) uxRoundingReg);
}

FPU_nERROR FPU__enGetRoundingModeDefault(FPU_nMODULE enModuleArg,
                                   FPU_nROUNDING* penRoundingArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) penRoundingArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = FPU_DSCR_R_RMODE_BIT;
        stRegister.uxMask = FPU_DSCR_RMODE_MASK;
        stRegister.uptrAddress = FPU_DSCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        *penRoundingArg = (FPU_nROUNDING) stRegister.uxValue;
    }
    return (enErrorReg);
}

