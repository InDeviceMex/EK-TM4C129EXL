/**
 *
 * @file PWM_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

void PWM_Generator__vEnInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nPRIORITY enPWMPriority);
void PWM_Generator__vDisInterruptVector(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Fault__vEnInterruptVector(PWM_nMODULE enModule, PWM_nPRIORITY enPWMPriority);
void PWM_Fault__vDisInterruptVector(PWM_nMODULE enModule);

#endif /* XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_ */
