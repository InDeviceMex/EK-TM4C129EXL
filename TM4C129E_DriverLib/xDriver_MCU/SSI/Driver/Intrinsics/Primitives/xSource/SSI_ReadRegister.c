/**
 *
 * @file SSI_ReadRegister.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/xHeader/SSI_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

SSI_nERROR SSI__enReadRegister(SSI_nMODULE enModuleArg, SSI_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SSI_nERROR enErrorReg;
    enErrorReg = SSI_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SSI_enERROR_POINTER;
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SSI_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SSI_enMODULE_MAX);
    }
    if(SSI_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SSI__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SSI_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

