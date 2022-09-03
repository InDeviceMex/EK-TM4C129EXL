/**
 *
 * @file SCB_ReadRegister.c
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
#include <xDriver_MCU/Core/SCB/Driver/Intrinsics/Primitives/xHeader/SCB_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

SCB_nERROR SCB__enReadRegister(SCB_nMODULE enModuleArg, SCB_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SCB_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (SCB_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) SCB_enMODULE_MAX);
        if(SCB_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = SCB__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (SCB_nERROR) MCU__enReadRegister(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = SCB_enERROR_POINTER;
    }
    return (enErrorReg);
}



