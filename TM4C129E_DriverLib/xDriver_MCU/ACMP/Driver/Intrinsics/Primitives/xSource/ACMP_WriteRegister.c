/**
 *
 * @file ACMP_WriteRegister.c
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
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nERROR ACMP__enWriteRegister(ACMP_nMODULE enModuleArg, ACMP_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    ACMP_nERROR enErrorReg;
    if(0UL != (uint32_t) pstRegisterDataArg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((uint32_t) enModuleArg, (uint32_t) ACMP_enMODULE_MAX);
        if(ACMP_enERROR_OK == enErrorReg)
        {
            uptrModuleBase = ACMP__uptrBlockBaseAddress(enModuleArg);
            pstRegisterDataArg->uptrAddress += uptrModuleBase;
            enErrorReg = (ACMP_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
        }
    }
    else
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }

    return (enErrorReg);
}

