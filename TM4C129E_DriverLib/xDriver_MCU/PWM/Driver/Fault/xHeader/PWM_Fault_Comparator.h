/**
 *
 * @file PWM_Fault_Comparator.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_FaultDComp__enSetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultDComp__enSetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultDComp__enSetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_FaultDComp__enSetStateMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nSTATE enStateArg);

PWM_nERROR PWM_FaultDComp__enGetStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_FaultDComp__enGetStateMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nFAULT_DCOMPMASK* penDCompMaskGetArg);
PWM_nERROR PWM_FaultDComp__enGetStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nGENMASK* penGeneratorGetArg);


PWM_nERROR PWM_FaultDComp__enClearStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nFAULT_DCOMP enDCompArg);
PWM_nERROR PWM_FaultDComp__enClearStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                        PWM_nFAULT_DCOMPMASK enDCompMaskArg);
PWM_nERROR PWM_FaultDComp__enClearStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg);
PWM_nERROR PWM_FaultDComp__enClearStatusMaskByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                                      PWM_nFAULT_DCOMPMASK enDCompMaskArg);

PWM_nERROR PWM_FaultDComp__enGetStatusByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                              PWM_nFAULT_DCOMP enDCompArg, PWM_nSTATUS* penStatusArg);
PWM_nERROR PWM_FaultDComp__enGetStatusMaskByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                       PWM_nFAULT_DCOMPMASK enDCompMaskArg, PWM_nFAULT_DCOMPMASK* penDCompMaskGetArg);
PWM_nERROR PWM_FaultDComp__enGetStatusByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg,
                                            PWM_nFAULT_DCOMP enDCompArg, PWM_nGENMASK* penGeneratorGetArg);
#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_COMPARATOR_H_ */
