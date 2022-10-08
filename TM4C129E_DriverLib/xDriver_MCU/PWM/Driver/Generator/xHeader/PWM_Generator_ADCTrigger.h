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

PWM_nERROR PWM_Generator__enSetADCTriggerStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetADCTriggerMaskStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetADCTriggerMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                                PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetADCTriggerStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE enStateArg);

PWM_nERROR PWM_Generator__enGetADCTriggerStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM_Generator__enGetADCTriggerStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_Generator__enGetADCTriggerMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg);

PWM_nERROR PWM_Generator__enEnableADCTriggerByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enEnableADCTriggerByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enEnableADCTriggerMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg);
PWM_nERROR PWM_Generator__enEnableADCTriggerMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg);

PWM_nERROR PWM_Generator__enDisableADCTriggerByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enDisableADCTriggerByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enDisableADCTriggerMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg);
PWM_nERROR PWM_Generator__enDisableADCTriggerMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_ADCTRIGGER_H_ */
