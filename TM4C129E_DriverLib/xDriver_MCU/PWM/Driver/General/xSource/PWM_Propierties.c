/**
 *
 * @file PWM_Propierties.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_Propierties.h>

#include <xDriver_MCU/PWM/Driver/Intrinsics/PWM_Intrinsics.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM__enGeneratorNumber(PWM_nMODULE enModuleArg, UBase_t* puxNumberArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxNumberArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_PP_R_GCNT_BIT;
        stRegister.uxMask = PWM_PP_GCNT_MASK;
        stRegister.uptrAddress = PWM_PP_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *puxNumberArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enFaultInputNumber(PWM_nMODULE enModuleArg, UBase_t* puxNumberArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxNumberArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_PP_R_FCNT_BIT;
        stRegister.uxMask = PWM_PP_FCNT_MASK;
        stRegister.uptrAddress = PWM_PP_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *puxNumberArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enIsExtendedFaultAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penAvailableArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;
    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_PP_R_EFAULT_BIT;
        stRegister.uxMask = PWM_PP_EFAULT_MASK;
        stRegister.uptrAddress = PWM_PP_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penAvailableArg = (PWM_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enIsExtendedSyncAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penAvailableArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_PP_R_ESYNC_BIT;
        stRegister.uxMask = PWM_PP_ESYNC_MASK;
        stRegister.uptrAddress = PWM_PP_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penAvailableArg = (PWM_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

PWM_nERROR PWM__enIsOneShotModeAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penAvailableArg) ? PWM_enERROR_POINTER : PWM_enERROR_OK;

    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_Register_t stRegister;
        stRegister.uxShift = PWM_PP_R_ONE_BIT;
        stRegister.uxMask = PWM_PP_ONE_MASK;
        stRegister.uptrAddress = PWM_PP_OFFSET;
        enErrorReg = PWM__enReadRegister(enModuleArg, &stRegister);
        if(PWM_enERROR_OK == enErrorReg)
        {
            *penAvailableArg = (PWM_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
