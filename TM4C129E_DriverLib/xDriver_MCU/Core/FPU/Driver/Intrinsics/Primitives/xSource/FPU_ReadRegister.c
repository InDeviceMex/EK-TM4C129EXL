/**
 *
 * @file FPU_ReadRegister.c
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
 * @verbatim 1 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/FPU/Driver/Intrinsics/Primitives/xHeader/FPU_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nERROR FPU__enReadRegister(FPU_nMODULE enModuleArg, FPU_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    FPU_nERROR enErrorReg;

    enErrorReg = FPU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = FPU_enERROR_POINTER;
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FPU_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) FPU_enMODULE_MAX);
    }
    if(FPU_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = FPU__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (FPU_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}



