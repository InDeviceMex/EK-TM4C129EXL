/**
 *
 * @file FPU_Mode.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 2 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_Mode.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/FPU_Primitives.h>

void FPU__vSetMode(FPU_nMODULE enModuleArg, FPU_nMODE enModeArg)
{
    MCU__vFPUStatusControlMask(FPU_DSCR_R_FZ_MASK, (uint32_t) enModeArg);
}

FPU_nMODE FPU__enGetMode(FPU_nMODULE enModuleArg)
{
    FPU_nMODE enModeReg;
    enModeReg = (FPU_nMODE) MCU__u32GetFPUStatusControlBit(FPU_DSCR_R_FZ_BIT);
    return (enModeReg);
}

FPU_nERROR FPU__enGetModeDefault(FPU_nMODULE enModuleArg, FPU_nMODE* penModeArg)
{
    FPU_Register_t stRegister;
    FPU_nERROR enErrorReg;

    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FPU_DSCR_R_FZ_BIT;
        stRegister.u32Mask = FPU_DSCR_FZ_MASK;
        stRegister.uptrAddress = FPU_DSCR_OFFSET;
        enErrorReg = FPU__enReadRegister(enModuleArg, &stRegister);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        *penModeArg = (FPU_nMODE) stRegister.u32Value;
    }
    return (enErrorReg);
}





