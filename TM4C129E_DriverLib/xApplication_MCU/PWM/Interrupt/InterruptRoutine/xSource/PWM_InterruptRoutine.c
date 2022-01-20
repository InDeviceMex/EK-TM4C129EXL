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

void (*PWM_Generator__pvIRQVectorHandler[(uint32_t)PWM_enMODULE_MAX][(uint32_t)PWM_enGEN_MAX]) (void) =
{
 {&PWM0_GEN0__vIRQVectorHandler,&PWM0_GEN1__vIRQVectorHandler,
  &PWM0_GEN2__vIRQVectorHandler,&PWM0_GEN3__vIRQVectorHandler},
};

void (*PWM_Fault__pvIRQVectorHandler[(uint32_t)PWM_enMODULE_MAX]) (void) =
{
 &PWM0_Fault__vIRQVectorHandler
};


void (*PWM_Generator__pvfGetIRQVectorHandler(PWM_nMODULE enPWMModule, PWM_nGENERATOR enPWMGenerator))(void)
{
    return (PWM_Generator__pvIRQVectorHandler[(uint32_t) enPWMModule][(uint32_t) enPWMGenerator]);
}

void (**PWM_Generator__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enPWMModule, PWM_nGENERATOR enPWMGenerator))(void)
{
    return ((void(**)(void)) &PWM_Generator__pvIRQVectorHandler[(uint32_t) enPWMModule][(uint32_t) enPWMGenerator]);
}


void (*PWM_Fault__pvfGetIRQVectorHandler(PWM_nMODULE enPWMModule))(void)
{
    return (PWM_Fault__pvIRQVectorHandler[(uint32_t) enPWMModule]);
}

void (**PWM_Fault__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enPWMModule))(void)
{
    return ((void(**)(void)) &PWM_Fault__pvIRQVectorHandler[(uint32_t) enPWMModule]);
}
