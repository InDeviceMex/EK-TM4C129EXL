/*
 * FPU_NAN.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_NAN.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

void FPU__vSetNAN(FPU_nMODULE enModuleArg, FPU_nNAN enNANArg)
{
    MCU__vFPUStatusControlMask(FPU_DSCR_R_DN_MASK, (UBase_t) enNANArg);
}

FPU_nNAN FPU__enGetNAN(FPU_nMODULE enModuleArg)
{
    FPU_nNAN enNANReg;
    enNANReg = (FPU_nNAN) MCU__uxGetFPUStatusControlBit(FPU_DSCR_R_DN_BIT);
    return (enNANReg);
}

FPU_nERROR FPU__enGetNANDefault(FPU_nMODULE enModuleArg, FPU_nNAN* penNANArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) penNANArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = FPU_DSCR_R_DN_BIT;
        stRegister.uxMask = FPU_DSCR_DN_MASK;
        stRegister.uptrAddress = FPU_DSCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        *penNANArg = (FPU_nNAN) stRegister.uxValue;
    }
    return (enErrorReg);
}

