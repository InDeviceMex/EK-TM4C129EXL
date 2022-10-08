/**
 *
 * @file PWM_Generator_Compare.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Generator__enSetCompareValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t uxValueArg);
PWM_nERROR PWM_Generator__enSetCompareValueByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, UBase_t uxValueArg);
PWM_nERROR PWM_Generator__enGetCompareValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, UBase_t* puxValueArg);

PWM_nERROR PWM_Generator__enSetCompareUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg);
PWM_nERROR PWM_Generator__enSetCompareUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE enModeArg);
PWM_nERROR PWM_Generator__enGetCompareUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nOUTPUT enOutputArg, PWM_nUPDATE* penModeArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_COMPARE_H_ */
