/**
 *
 * @file PWM_InterruptRoutine.c
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

#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/PWM_InterruptRoutine.h>
#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

static PWM_pvfIRQVectorHandler_t PWM_Generator_pvIRQVectorHandler[(UBase_t) PWM_enMODULE_MAX][(UBase_t) PWM_enGEN_MAX]=
{
 {&PWM0_GEN0__vIRQVectorHandler,&PWM0_GEN1__vIRQVectorHandler, &PWM0_GEN2__vIRQVectorHandler,&PWM0_GEN3__vIRQVectorHandler},
};


static PWM_pvfIRQVectorHandler_t PWM_Fault_pvIRQVectorHandler[(UBase_t) PWM_enMODULE_MAX]=
{
 &PWM0_Fault__vIRQVectorHandler
};

PWM_pvfIRQVectorHandler_t PWM_Generator__pvfGetIRQVectorHandler(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg)
{
    PWM_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = PWM_Generator_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enGeneratorArg];
    return (pvfVectorReg);
}

PWM_pvfIRQVectorHandler_t* PWM_Generator__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg)
{
    PWM_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &PWM_Generator_pvIRQVectorHandler[(UBase_t) enModuleArg][(UBase_t) enGeneratorArg];
    return (pvfVectorReg);
}

PWM_pvfIRQVectorHandler_t PWM_Fault__pvfGetIRQVectorHandler(PWM_nMODULE enModuleArg)
{
    PWM_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = PWM_Fault_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

PWM_pvfIRQVectorHandler_t* PWM_Fault__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enModuleArg)
{
    PWM_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &PWM_Fault_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
