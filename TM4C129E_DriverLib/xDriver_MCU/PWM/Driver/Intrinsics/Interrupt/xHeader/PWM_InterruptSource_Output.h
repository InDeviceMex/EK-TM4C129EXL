/**
 *
 * @file PWM_InterruptSource_Output.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_OUTPUT_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_OUTPUT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Output__vEnInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg);
void PWM_Output__vEnMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg);
void PWM_Output__vDisInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg);
void PWM_Output__vDisMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg);
void PWM_Output__vClearInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg);
void PWM_Output__vClearMaskInterruptSource(PWM_nMODULE enModule, PWM_nGENMASK enGenMaskArg,
                                    PWM_nGEN_INT_SOURCE enPwnIntArg);
PWM_nGEN_INT_SOURCE PWM_Output__enStatusInterruptSource(PWM_nMODULE enModule, PWM_nGENERATOR enGeneratorArg,
                                PWM_nGEN_INT_SOURCE enPwnIntArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_OUTPUT_H_ */
