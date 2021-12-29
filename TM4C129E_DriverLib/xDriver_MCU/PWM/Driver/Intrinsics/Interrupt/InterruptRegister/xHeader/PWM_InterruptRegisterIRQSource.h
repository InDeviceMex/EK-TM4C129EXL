/**
 *
 * @file PWM_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PWM_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PWM_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           PWM_nMODULE enModule,
                                           PWM_nFAULT enFaultArg,
                                           PWM_nFAULT_INTERRUPT enFaultIntSourceArg);
void PWM_Generator__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),
                                           PWM_nMODULE enModule,
                                           PWM_nGENERATOR enGeneratorArg,
                                           PWM_nGEN_INTERRUPT enGeneratorIntSourceArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PWM_INTERRUPTREGISTERIRQSOURCE_H_ */
