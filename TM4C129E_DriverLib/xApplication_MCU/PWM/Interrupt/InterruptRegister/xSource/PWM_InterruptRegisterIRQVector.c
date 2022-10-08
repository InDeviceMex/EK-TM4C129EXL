/**
 *
 * @file PWM_InterruptRegisterIRQVector.c
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/PWM/Interrupt/InterruptRegister/xHeader/PWM_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/PWM_InterruptRoutine.h>
#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

PWM_nERROR PWM_Generator__enRegisterIRQVectorHandler(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_PWM[(UBase_t) PWM_enMODULE_MAX][(UBase_t) PWM_enGEN_MAX]=
    {
     {SCB_enVECISR_PWM0GEN0, SCB_enVECISR_PWM0GEN1, SCB_enVECISR_PWM0GEN2, SCB_enVECISR_PWM0GEN3},
    };
    SCB_nVECISR enVectorReg;
    PWM_nERROR enErrorReg;
    PWM_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enGeneratorArg, (UBase_t) PWM_enGEN_MAX);
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_PWM[(UBase_t) enModuleArg][(UBase_t) enGeneratorArg];
        pvfVectorHandlerReg = PWM_Generator__pvfGetIRQVectorHandlerPointer(enModuleArg, enGeneratorArg);
        enErrorReg = (PWM_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}

PWM_nERROR PWM_Fault__enRegisterIRQVectorHandler(PWM_nMODULE enModuleArg, PWM_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_PWM[(UBase_t) PWM_enMODULE_MAX]=
    {
     SCB_enVECISR_PWM0FAULT
    };
    SCB_nVECISR enVectorReg;
    PWM_nERROR enErrorReg;
    PWM_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    if(PWM_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_PWM[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = PWM_Fault__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (PWM_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}

