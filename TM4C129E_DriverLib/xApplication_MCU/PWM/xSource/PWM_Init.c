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

void PWM__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = PWM_Generator__pvfGetIRQVectorHandler(PWM_enMODULE_0, PWM_enGEN_0);
    PWM_Generator__vRegisterIRQVectorHandler( pfIrqVectorHandler, PWM_enMODULE_0, PWM_enGEN_0);

    pfIrqVectorHandler = PWM_Generator__pvfGetIRQVectorHandler(PWM_enMODULE_0, PWM_enGEN_1);
    PWM_Generator__vRegisterIRQVectorHandler( pfIrqVectorHandler, PWM_enMODULE_0, PWM_enGEN_1);

    pfIrqVectorHandler = PWM_Generator__pvfGetIRQVectorHandler(PWM_enMODULE_0, PWM_enGEN_2);
    PWM_Generator__vRegisterIRQVectorHandler( pfIrqVectorHandler, PWM_enMODULE_0, PWM_enGEN_2);

    pfIrqVectorHandler = PWM_Generator__pvfGetIRQVectorHandler(PWM_enMODULE_0, PWM_enGEN_3);
    PWM_Generator__vRegisterIRQVectorHandler( pfIrqVectorHandler, PWM_enMODULE_0, PWM_enGEN_3);

    pfIrqVectorHandler = PWM_Fault__pvfGetIRQVectorHandler(PWM_enMODULE_0);
    PWM_Fault__vRegisterIRQVectorHandler( pfIrqVectorHandler, PWM_enMODULE_0);
}



