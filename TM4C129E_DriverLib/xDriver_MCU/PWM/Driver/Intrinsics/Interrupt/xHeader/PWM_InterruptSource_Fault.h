/**
 *
 * @file PWM_InterruptSource_Fault.h
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
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_FAULT_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_FAULT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vEnInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg);
void PWM_Fault__vDisInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg);
void PWM_Fault__vClearInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg);
PWM_nFAULTMASK PWM_Fault__enStatusInterrupt(PWM_nMODULE enModule, PWM_nFAULTMASK enFaultArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_FAULT_H_ */
