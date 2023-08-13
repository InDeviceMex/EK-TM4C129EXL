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
    ACMP_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? ACMP_enERROR_POINTER : ACMP_enERROR_OK;
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (ACMP_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) ACMP_enMODULE_MAX);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrModuleBase = ACMP__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (ACMP_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}
