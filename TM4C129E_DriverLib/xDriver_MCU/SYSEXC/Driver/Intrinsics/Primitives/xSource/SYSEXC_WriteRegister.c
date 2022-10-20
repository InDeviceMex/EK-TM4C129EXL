/**
 *
 * @file SYSEXC_WriteRegister.c
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
 * @verbatim 19 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Primitives/xHeader/SYSEXC_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

SYSEXC_nERROR SYSEXC__enWriteRegister(SYSEXC_nMODULE enModuleArg, SYSEXC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SYSEXC_nERROR enErrorReg;
    enErrorReg = SYSEXC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SYSEXC_enERROR_POINTER;
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSEXC_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SYSEXC_enMODULE_MAX);
    }
    if(SYSEXC_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SYSEXC__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SYSEXC_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }

    return (enErrorReg);
}




