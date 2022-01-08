/**
 *
 * @file PWM_Generator_Action.h
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
 * @verbatim 7 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ACTION_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ACTION_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vSetOutputActionA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nACTION enActionArg);
PWM_nACTION PWM_Generator__enGetOutputActionA(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg);

void PWM_Generator__vSetOutputActionB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg, PWM_nACTION enActionArg);
PWM_nACTION PWM_Generator__enGetOutputActionB(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nEVENT enEventArg);

void PWM_Generator__vSetOutputAction(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             PWM_nOUTPUT enOutputArg, PWM_nEVENT enEventArg, PWM_nACTION enActionArg);
PWM_nACTION PWM_Generator__enGetOutputAction(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                      PWM_nOUTPUT enOutputArg, PWM_nEVENT enActionArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ACTION_H_ */
