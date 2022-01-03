/**
 *
 * @file PWM_InterruptSource_Generator.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vEnInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg);
void PWM_Generator__vDisInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg);
PWM_nGENMASK PWM_Generator__enStatusInterrupt(PWM_nMODULE enModule, PWM_nGENMASK enGenArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_ */
