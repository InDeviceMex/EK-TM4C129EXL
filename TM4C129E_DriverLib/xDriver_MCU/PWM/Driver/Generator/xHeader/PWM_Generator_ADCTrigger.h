/**
 *
 * @file PWM_Generator_ADCTrigger.h
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
 * @verbatim 8 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ADCTRIGGER_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ADCTRIGGER_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vSetADCTrigger(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nGENERATOR_ENABLE enEnableArg);
PWM_nGENERATOR_ENABLE PWM_Generator__enGetADCTrigger(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ADCTRIGGER_H_ */
