/**
 *
 * @file PWM_Generator_FaultCondition.c
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
 * @verbatim 6 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Generator/xHeader/PWM_Generator_FaultCondition.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enGetFaultConditionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATUS* penStatusArg)
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
        stRegister.uxMask = PWM_STATUS_GEN0_FAULT_MASK;
        stRegister.uptrAddress = PWM_STATUS_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nSTATUS) stRegister.uxValue;
    }

    return (enErrorReg);
}

PWM_nERROR PWM_Generator__enGetFaultConditionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg, PWM_nGENMASK* penStatusArg)
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
        stRegister.uxShift = PWM_STATUS_R_GEN0_FAULT_BIT;
        stRegister.uxMask = (UBase_t) enGenMaskArg;
        stRegister.uptrAddress = PWM_STATUS_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PWM_nGENMASK) stRegister.uxValue;
    }

    return (enErrorReg);
}





