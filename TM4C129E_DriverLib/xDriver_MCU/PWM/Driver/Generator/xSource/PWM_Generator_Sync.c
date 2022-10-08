/**
 *
 * @file PWM_Generator_Sync.c
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
 * @verbatim 2 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_Sync.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enInitGlobalSyncByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg)
{
    PWM_Register_t stRegister;
    UBase_t uxValueReg;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        uxValueReg = 1UL;
        uxValueReg <<= (UBase_t) enGeneratorArg;

        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = PWM_CTL_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enInitGlobalSyncByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg)
{
    PWM_Register_t stRegister;
    PWM_nERROR enErrorReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGenMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = PWM_CTL_OFFSET;
        stRegister.uxValue = (UBase_t) enGenMaskArg;
        enErrorReg = PWM__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


PWM_nERROR PWM_Generator__enGetGlobalSyncStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATUS* penStatusArg)
{
    PWM_Register_t stRegister;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enGeneratorArg;
        stRegister.uxMask = PWM_CTL_GEN0_GLOBALSYNC_MASK;
        stRegister.uptrAddress = PWM_CTL_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nSTATUS) stRegister.uxValue;
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetGlobalSyncStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg, PWM_nGENMASK* penStatusArg)
{
    PWM_Register_t stRegister;
    PWM_nERROR enErrorReg;

    enErrorReg = PWM_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = PWM_enERROR_POINTER;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGenMaskArg, (UBase_t) PWM_enGENMASK_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PWM_CTL_R_GEN0_GLOBALSYNC_BIT;
        stRegister.uxMask = (UBase_t) enGenMaskArg;
        stRegister.uptrAddress = PWM_CTL_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nGENMASK) stRegister.uxValue;
    }

    return (enErrorReg);
}


