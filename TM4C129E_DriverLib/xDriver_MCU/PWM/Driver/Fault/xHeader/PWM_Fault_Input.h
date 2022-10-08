/**
 *
 * @file PWM_Fault_Input.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_FaultInput__enSetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultInput__enSetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultInput__enSetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultInput__enSetStateMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nSTATE enStateArg);

PWM_nERROR PWM_FaultInput__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_FaultInput__enGetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg);
PWM_nERROR PWM_FaultInput__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg);


PWM_nERROR PWM_FaultInput__enSetSenseLevelByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL enLevelArg);
PWM_nERROR PWM_FaultInput__enSetSenseLevelMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nLEVEL enLevelArg);
PWM_nERROR PWM_FaultInput__enSetSenseLevelByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL enLevelArg);
PWM_nERROR PWM_FaultInput__enSetSenseLevelMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nLEVEL enLevelArg);

PWM_nERROR PWM_FaultInput__enGetSenseLevelByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nLEVEL* penLevelArg);
PWM_nERROR PWM_FaultInput__enGetSenseLevelMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg);
PWM_nERROR PWM_FaultInput__enGetSenseLevelByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg);


PWM_nERROR PWM_FaultInput__enClearStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_INPUT enInputArg);
PWM_nERROR PWM_FaultInput__enClearStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_INPUTMASK enInputMaskArg);
PWM_nERROR PWM_FaultInput__enClearStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg);
PWM_nERROR PWM_FaultInput__enClearStatusMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_INPUTMASK enInputMaskArg);

PWM_nERROR PWM_FaultInput__enGetStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_INPUT enInputArg, PWM_nSTATUS* penStatusArg);
PWM_nERROR PWM_FaultInput__enGetStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_INPUTMASK enInputMaskArg, PWM_nFAULT_INPUTMASK* penInputMaskGetArg);
PWM_nERROR PWM_FaultInput__enGetStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_INPUT enInputArg, PWM_nGENMASK* penGeneratorGetArg);


#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_INPUT_H_ */
