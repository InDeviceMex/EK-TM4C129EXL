/**
 *
 * @file PWM_InterruptSource.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM__enSetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM__enSetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                  PWM_nINT_TYPE enTypeArg, PWM_nSTATE enStateArg);

PWM_nERROR PWM__enGetInterruptSourceStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM__enGetInterruptSourceStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                  PWM_nINT_TYPE enTypeArg, PWM_nSTATE* penStateArg);

PWM_nERROR PWM__enEnableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg);
PWM_nERROR PWM__enEnableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg);

PWM_nERROR PWM__enDisableInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg);
PWM_nERROR PWM__enDisableInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg);

PWM_nERROR PWM__enClearInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nINT_TYPE enTypeArg);
PWM_nERROR PWM__enClearInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nINT_TYPE enTypeArg);

PWM_nERROR PWM__enStatusInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                              PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM__enStatusInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                PWM_nINT_TYPE enTypeArg, PWM_nSTATUS* penStatusArg);

PWM_nERROR PWM__enStatusMaskedInterruptSourceByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                    PWM_nINT_TYPE enTypeArg, PWM_nGENMASK* penGeneratorGetArg);
PWM_nERROR PWM__enStatusMaskedInterruptSourceByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                      PWM_nINT_TYPE enTypeArg, PWM_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PWM_INTERRUPTSOURCE_H_ */
