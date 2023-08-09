/**
 *
 * @file NVIC_WriteRegister.c
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
#include <xDriver_MCU/Core/NVIC/Driver/Intrinsics/Primitives/xHeader/NVIC_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/NVIC_Peripheral.h>

NVIC_nERROR NVIC__enWriteRegister(NVIC_nMODULE enModuleArg, NVIC_Register_t* pstRegisterDataArg)
{
    NVIC_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? NVIC_enERROR_POINTER : NVIC_enERROR_OK;
    if(NVIC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (NVIC_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) NVIC_enMODULE_MAX);
    }
    if(NVIC_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrModuleBase;
        uptrModuleBase = NVIC__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (NVIC_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}
