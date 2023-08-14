/**
 *
 * @file PWM_InterruptRegisterIRQSource.c
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
 * @verbatim 28 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/PWM_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PWM_InterruptRoutine_Source.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

PWM_nERROR PWM_Generator__enRegisterIRQSourceHandler(PWM_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                     PWM_nMODULE enModuleArg,
                                                     PWM_nGENERATOR enGeneratorArg,
                                                     PWM_nEVENT enEventArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enEventArg, (UBase_t) PWM_enEVENT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_pvfIRQSourceHandler_t* pvfIrqHandler = PWM_Generator__pvfGetIRQSourceHandlerPointer(enModuleArg, enGeneratorArg, enEventArg);
        enErrorReg = (PWM_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultSW__enRegisterIRQSourceHandler(PWM_pvfIRQSourceHandler_t pfIrqSourceHandler, PWM_nMODULE enModuleArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_pvfIRQSourceHandler_t* pvfIrqHandler = PWM_FaultSW__pvfGetIRQSourceHandlerPointer(enModuleArg);
        enErrorReg = (PWM_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultInput__enRegisterIRQSourceHandler(PWM_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      PWM_nMODULE enModuleArg,
                                                      PWM_nGENERATOR enGeneratorArg,
                                                      PWM_nFAULT_INPUT enInputArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enInputArg, (UBase_t) PWM_enFAULT_INPUT_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_pvfIRQSourceHandler_t* pvfIrqHandler = PWM_FaultInput__pvfGetIRQSourceHandlerPointer(enModuleArg, enGeneratorArg, enInputArg);
        enErrorReg = (PWM_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

PWM_nERROR PWM_FaultDComp__enRegisterIRQSourceHandler(PWM_pvfIRQSourceHandler_t pfIrqSourceHandler,
                                                      PWM_nMODULE enModuleArg,
                                                      PWM_nGENERATOR enGeneratorArg,
                                                      PWM_nFAULT_DCOMP enDCompArg)
{
    PWM_nERROR enErrorReg;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enDCompArg, (UBase_t) PWM_enFAULT_DCOMP_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        PWM_pvfIRQSourceHandler_t* pvfIrqHandler = PWM_FaultDComp__pvfGetIRQSourceHandlerPointer(enModuleArg, enGeneratorArg, enDCompArg);
        enErrorReg = (PWM_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, pvfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}
