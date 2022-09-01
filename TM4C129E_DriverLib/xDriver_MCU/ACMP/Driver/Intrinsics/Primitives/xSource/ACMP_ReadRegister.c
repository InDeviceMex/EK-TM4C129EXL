/**
 *
 * @file ACMP_ReadRegister.c
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enReadRegister(ACMP_nMODULE enModuleArg, ACMP_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    uint32_t u32RegisterValue;
    ACMP_nERROR enReturnReg;
    MCU_nERROR enMCUErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enMCUErrorReg = MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) ACMP_enMODULE_MAX);
        if(MCU_enERROR_OK != enMCUErrorReg)
        {
            uptrModuleBase = ACMP__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enReturnReg = MCU__enReadRegister(pstRegisterDataArg);
        }
        else
        {
            enReturnReg = ACMP_enERROR_VALUE;
        }
    }
    else
    {
        enReturnReg = ACMP_enERROR_POINTER;
    }
    return (enReturnReg);
}
