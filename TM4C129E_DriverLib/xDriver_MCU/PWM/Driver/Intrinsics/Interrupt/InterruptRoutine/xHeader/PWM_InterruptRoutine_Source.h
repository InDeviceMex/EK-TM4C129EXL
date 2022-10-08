/**
 *
 * @file PWM_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_PWM_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_PWM_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>


PWM_pvfIRQSourceHandler_t PWM_Generator__pvfGetIRQSourceHandler(PWM_nMODULE enModuleArg,
                                                             PWM_nGENERATOR enGeneratorArg,
                                                             PWM_nEVENT enEventArg);
PWM_pvfIRQSourceHandler_t* PWM_Generator__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enModuleArg,
                                                                     PWM_nGENERATOR enGeneratorArg,
                                                                     PWM_nEVENT enEventArg);

PWM_pvfIRQSourceHandler_t PWM_FaultSW__pvfGetIRQSourceHandler(PWM_nMODULE enModuleArg);
PWM_pvfIRQSourceHandler_t* PWM_FaultSW__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enModuleArg);

PWM_pvfIRQSourceHandler_t PWM_FaultInput__pvfGetIRQSourceHandler(PWM_nMODULE enModuleArg,
                                                                 PWM_nGENERATOR enGeneratorArg,
                                                                 PWM_nFAULT_INPUT enInputArg);
PWM_pvfIRQSourceHandler_t* PWM_FaultInput__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enModuleArg,
                                                                         PWM_nGENERATOR enGeneratorArg,
                                                                         PWM_nFAULT_INPUT enInputArg);

PWM_pvfIRQSourceHandler_t PWM_FaultDComp__pvfGetIRQSourceHandler(PWM_nMODULE enModuleArg,
                                                                 PWM_nGENERATOR enGeneratorArg,
                                                                 PWM_nFAULT_DCOMP enDCompArg);
PWM_pvfIRQSourceHandler_t* PWM_FaultDComp__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enModuleArg,
                                                                         PWM_nGENERATOR enGeneratorArg,
                                                                         PWM_nFAULT_DCOMP enDCompArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_PWM_INTERRUPTROUTINE_SOURCE_H_ */
