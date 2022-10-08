/**
 *
 * @file PWM_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_PWM_INTERRUPT_INTERRUPTROUTINE_PWM_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_PWM_INTERRUPT_INTERRUPTROUTINE_PWM_INTERRUPTROUTINE_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>
#include <xApplication_MCU/PWM/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/PWM_InterruptRoutine_Vector_Module0.h>

PWM_pvfIRQVectorHandler_t PWM_Generator__pvfGetIRQVectorHandler(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_pvfIRQVectorHandler_t* PWM_Generator__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);

PWM_pvfIRQVectorHandler_t PWM_Fault__pvfGetIRQVectorHandler(PWM_nMODULE enModuleArg);
PWM_pvfIRQVectorHandler_t* PWM_Fault__pvfGetIRQVectorHandlerPointer(PWM_nMODULE enModuleArg);

#endif /* XAPPLICATION_MCU_PWM_INTERRUPT_INTERRUPTROUTINE_PWM_INTERRUPTROUTINE_H_ */
