/**
 *
 * @file PWM_Output_FaultValue.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULTVALUE_H_
#define XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULTVALUE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Output__enSetFaultConditionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_FAULT enConditionArg);
PWM_nERROR PWM_Output__enSetFaultConditionByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg,
                                                 PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_FAULT enConditionArg);

PWM_nERROR PWM_Output__enGetFaultConditionByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg,
                                                   PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_FAULT* penConditionArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_OUTPUT_XHEADER_PWM_OUTPUT_FAULTVALUE_H_ */
