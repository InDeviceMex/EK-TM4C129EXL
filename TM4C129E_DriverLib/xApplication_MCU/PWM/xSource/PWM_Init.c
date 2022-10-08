/**
 *
 * @file PWM_Init.c
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
#include <xApplication_MCU/PWM/xHeader/PWM_Init.h>

#include <xApplication_MCU/PWM/Interrupt/PWM_Interrupt.h>
#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Dependencies.h>

PWM_nERROR PWM__enInit(PWM_nMODULE enModuleArg)
{
    PWM_nERROR enErrorReg;
    UBase_t uxGeneratorReg;
    PWM_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    uxGeneratorReg = 0UL;
    enErrorReg = (PWM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PWM_enMODULE_MAX);
    while((uxGeneratorReg < (UBase_t) PWM_enGEN_MAX) && (PWM_enERROR_OK == enErrorReg))
    {
        pfIrqVectorHandlerReg = PWM_Generator__pvfGetIRQVectorHandler(enModuleArg, (PWM_nGENERATOR) uxGeneratorReg);
        enErrorReg = PWM_Generator__enRegisterIRQVectorHandler(enModuleArg, (PWM_nGENERATOR) uxGeneratorReg, pfIrqVectorHandlerReg);
        uxGeneratorReg++;
    }
    if(PWM_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandlerReg = PWM_Fault__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = PWM_Fault__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandlerReg);
    }

    return (enErrorReg);
}

