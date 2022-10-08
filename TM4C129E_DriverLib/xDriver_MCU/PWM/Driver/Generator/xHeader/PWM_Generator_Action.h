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

PWM_nERROR PWM_Generator__enSetActionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg,
                                              PWM_nEVENT enEventArg, PWM_nACTION enActionArg);
PWM_nERROR PWM_Generator__enSetActionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg,
                                            PWM_nEVENT enEventArg, PWM_nACTION enActionArg);
PWM_nERROR PWM_Generator__enGetActionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg,
                                              PWM_nEVENT enEventArg, PWM_nACTION* penActionArg);

PWM_nERROR PWM_Generator__enSetActionUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg);
PWM_nERROR PWM_Generator__enSetActionUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg);
PWM_nERROR PWM_Generator__enGetActionUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE* penModeArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ACTION_H_ */
