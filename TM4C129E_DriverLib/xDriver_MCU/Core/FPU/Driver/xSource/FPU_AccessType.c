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
    uint32_t u32Access;
    uint32_t u32Access1;
    uint32_t u32AccessMask;
    FPU_nERROR enErrorReg;

    u32AccessMask = FPU_CPACR_CP11_MASK;
    u32AccessMask <<= FPU_CPACR_R_CP11_BIT - FPU_CPACR_R_CP10_BIT;
    u32AccessMask |= FPU_CPACR_CP10_MASK;

    u32Access = (uint32_t) enAccessTypeArg;
    u32Access &= FPU_CPACR_CP11_MASK;
    u32Access1 = u32Access;
    u32Access <<= FPU_CPACR_R_CP11_BIT - FPU_CPACR_R_CP10_BIT;
    u32Access |= u32Access1;

    stRegister.u32Shift = FPU_CPACR_R_CP10_BIT;
    stRegister.u32Mask = (uint32_t) u32AccessMask;
    stRegister.uptrAddress = FPU_CPACR_OFFSET;
    stRegister.u32Value = (uint32_t) u32Access;
    enErrorReg = FPU__enWriteRegister(enModuleArg, &stRegister);
    MCU__vBlocking();

    return (enErrorReg);
}

FPU_nERROR FPU__enGetAccessType(FPU_nMODULE enModuleArg, FPU_nACCESS* penAccessTypeArg)
{
    FPU_Register_t stRegister;
    uint32_t u32RegCP10;
    uint32_t u32RegCP11;
    FPU_nERROR enErrorReg;

    if(0UL != (uintptr_t) penAccessTypeArg)
    {
        stRegister.u32Shift = FPU_CPACR_R_CP10_BIT;
        stRegister.u32Mask = FPU_CPACR_CP10_MASK;
        stRegister.uptrAddress = FPU_CPACR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
        u32RegCP10 = stRegister.u32Value;

        stRegister.u32Shift = FPU_CPACR_R_CP11_BIT;
        stRegister.u32Mask = FPU_CPACR_CP11_MASK;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
        if(FPU_enERROR_OK == enErrorReg)
        {
            u32RegCP11 = stRegister.u32Value;

            if(u32RegCP11 != u32RegCP10)
            {
                u32RegCP11 = (uint32_t) FPU_enACCESS_DENIED;
            }

            *penAccessTypeArg = (FPU_nACCESS) u32RegCP11;
        }
    }
    else
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    return (enErrorReg);
}
