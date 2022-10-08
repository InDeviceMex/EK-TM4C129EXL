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
 * @verbatim 1 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Generator__enSetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetInterruptSourceMaskStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetInterruptSourceMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                                PWM_nEVENTMASK enEventMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE enStateArg);

PWM_nERROR PWM_Generator__enGetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                          PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM_Generator__enGetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENT enEventArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_Generator__enGetInterruptSourceMaskStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg);


PWM_nERROR PWM_Generator__enEnableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enEnableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enEnableInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg);
PWM_nERROR PWM_Generator__enEnableInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg);

PWM_nERROR PWM_Generator__enDisableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enDisableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enDisableInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg);
PWM_nERROR PWM_Generator__enDisableInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg);

PWM_nERROR PWM_Generator__enClearInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enClearInterruptSourceMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nEVENTMASK enEventMaskArg);
PWM_nERROR PWM_Generator__enClearInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENT enEventArg);
PWM_nERROR PWM_Generator__enClearInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nEVENTMASK enEventMaskArg);


PWM_nERROR PWM_Generator__enStatusInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                        PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM_Generator__enStatusInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATUS* penStatusArg);
PWM_nERROR PWM_Generator__enStatusInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg);


PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                              PWM_nEVENT enEventArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                          PWM_nEVENT enEventArg, PWM_nSTATUS* penStatusArg);
PWM_nERROR PWM_Generator__enStatusMaskedInterruptSourceMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                            PWM_nEVENTMASK enEventMaskArg, PWM_nEVENTMASK* penEventMaskGetArg);




#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_GENERATOR_H_ */
