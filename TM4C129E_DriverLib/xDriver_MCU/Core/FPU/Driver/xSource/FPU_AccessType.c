/*
 * FPU_AccessType.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AccessType.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nACCESS FPU__enGetAccessType(void)
{
    FPU_nACCESS enReturn = FPU_enDENIED;
    uint32_t u32RegCP10 = 0UL;
    uint32_t u32RegCP11 = 0UL;

    u32RegCP10 = MCU__u32ReadRegister(FPU_BASE, FPU_CPACR_OFFSET, FPU_CPACR_CP10_MASK, FPU_CPACR_R_CP10_BIT);
    u32RegCP11 = MCU__u32ReadRegister(FPU_BASE, FPU_CPACR_OFFSET, FPU_CPACR_CP11_MASK, FPU_CPACR_R_CP11_BIT);
    if(u32RegCP11 == u32RegCP10)
    {
        enReturn = (FPU_nACCESS) u32RegCP11;
    }
    return (enReturn);
}

void FPU__vSetAccessType(FPU_nACCESS enAccessType)
{
    uint32_t u32AccessMask = FPU_CPACR_CP10_MASK;
    uint32_t u32Access = (uint32_t) enAccessType;
    u32Access &= FPU_CPACR_CP10_MASK;
    u32Access |= (u32Access << 2UL);
    u32AccessMask |= (u32AccessMask << 2UL);
    MCU__vWriteRegister(FPU_BASE, FPU_CPACR_OFFSET, u32Access, u32AccessMask, FPU_CPACR_R_CP10_BIT);
    MCU__vBlocking();
}
