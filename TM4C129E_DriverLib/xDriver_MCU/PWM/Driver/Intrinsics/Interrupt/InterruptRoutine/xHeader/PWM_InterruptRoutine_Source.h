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

void (*PWM_Fault__pvfGetIRQSourceHandler(PWM_nMODULE enPWMSubmodule,
                                          PWM_nFAULT enPWMFaultNum,
                                          PWM_nFAULT_INTERRUPT enFaultIntSource))(void);
void (**PWM_Fault__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enPWMSubmodule,
                                              PWM_nFAULT enPWMFaultNum,
                                              PWM_nFAULT_INTERRUPT enFaultIntSource))(void);
void (*PWM_Generator__pvfGetIRQSourceHandler(PWM_nMODULE enPWMSubmodule,
                                          PWM_nGENERATOR enPWMGeneratorNum,
                                          PWM_nGEN_INTERRUPT enPWMIntSource))(void);
void (**PWM_Generator__pvfGetIRQSourceHandlerPointer(PWM_nMODULE enPWMSubmodule,
                                                     PWM_nGENERATOR enPWMGeneratorNum,
                                                     PWM_nGEN_INTERRUPT enPWMIntSource))(void);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_PWM_INTERRUPTROUTINE_SOURCE_H_ */
