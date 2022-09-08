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
    MCU__vFPUStatusControlMask(FPU_DSCR_R_RMODE_MASK, (uint32_t) enRoundingArg);
}

FPU_nROUNDING FPU__enGetRoundingMode(FPU_nMODULE enModuleArg)
{
    uint32_t u32RoundingReg;
    u32RoundingReg = MCU__u32GetFPUStatusControlBit(FPU_DSCR_R_RMODE_MASK);
    u32RoundingReg >>= FPU_DSCR_R_RMODE_BIT;
    return ((FPU_nROUNDING) u32RoundingReg);
}

FPU_nERROR FPU__enGetRoundingModeDefault(FPU_nMODULE enModuleArg,
                                   FPU_nROUNDING* penRoundingArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    if(0UL != (uintptr_t) penRoundingArg)
    {
        stRegister.u32Shift = FPU_DSCR_R_RMODE_BIT;
        stRegister.u32Mask = FPU_DSCR_RMODE_MASK;
        stRegister.uptrAddress = FPU_DSCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
        if(FPU_enERROR_OK == enErrorReg)
        {
            *penRoundingArg = (FPU_nROUNDING) stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = FPU_enERROR_POINTER;
    }

    return (enErrorReg);
}

