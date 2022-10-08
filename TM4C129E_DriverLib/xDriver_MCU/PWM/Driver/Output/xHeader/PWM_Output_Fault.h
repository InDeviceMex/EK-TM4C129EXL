/**
 *
 * @file PWM_Output_Fault.h
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
 * @verbatim 6 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULT_H_
#define XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Output__enSetFaultStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                               PWM_nOUTPUT enOutputArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Output__enSetFaultStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg,
                                        PWM_nOUTPUT enOutputArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Output__enGetFaultStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                          PWM_nOUTPUT enOutputArg, PWM_nOUTPUT* penStateArg);




#endif /* XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULT_H_ */
