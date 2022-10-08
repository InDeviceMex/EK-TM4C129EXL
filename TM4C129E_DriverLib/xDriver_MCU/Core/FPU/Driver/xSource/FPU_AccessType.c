/*
 * FPU_AccessType.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AccessType.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

FPU_nERROR FPU__enSetAccessType(FPU_nMODULE enModuleArg, FPU_nACCESS enAccessTypeArg)
{
    FPU_Register_t stRegister;
    UBase_t uxAccess;
    UBase_t uxAccess1;
    UBase_t uxAccessMask;
    FPU_nERROR enErrorReg;

    uxAccessMask = FPU_CPACR_CP11_MASK;
    uxAccessMask <<= FPU_CPACR_R_CP11_BIT - FPU_CPACR_R_CP10_BIT;
    uxAccessMask |= FPU_CPACR_CP10_MASK;

    uxAccess = (UBase_t) enAccessTypeArg;
    uxAccess &= FPU_CPACR_CP11_MASK;
    uxAccess1 = uxAccess;
    uxAccess <<= FPU_CPACR_R_CP11_BIT - FPU_CPACR_R_CP10_BIT;
    uxAccess |= uxAccess1;

    stRegister.uxShift = FPU_CPACR_R_CP10_BIT;
    stRegister.uxMask = (UBase_t) uxAccessMask;
    stRegister.uptrAddress = FPU_CPACR_OFFSET;
    stRegister.uxValue = (UBase_t) uxAccess;
    enErrorReg = FPU__enWriteRegister(enModuleArg, &stRegister);
    MCU__vBlocking();

    return (enErrorReg);
}

FPU_nERROR FPU__enGetAccessType(FPU_nMODULE enModuleArg, FPU_nACCESS* penAccessTypeArg)
{
    FPU_Register_t stRegister;
    UBase_t uxRegCP10;
    UBase_t uxRegCP11;
    FPU_nERROR enErrorReg;

    uxRegCP10 = 0UL;
    uxRegCP11 = 0UL;
    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) penAccessTypeArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = FPU_CPACR_R_CP10_BIT;
        stRegister.uxMask = FPU_CPACR_CP10_MASK;
        stRegister.uptrAddress = FPU_CPACR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        uxRegCP10 = stRegister.uxValue;

        stRegister.uxShift = FPU_CPACR_R_CP11_BIT;
        stRegister.uxMask = FPU_CPACR_CP11_MASK;
        stRegister.uptrAddress = FPU_CPACR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        uxRegCP11 = stRegister.uxValue;

        if(uxRegCP11 != uxRegCP10)
        {
            uxRegCP11 = (UBase_t) FPU_enACCESS_DENIED;
        }

        *penAccessTypeArg = (FPU_nACCESS) uxRegCP11;
    }
    return (enErrorReg);
}
