/**
 *
 * @file PWM_Generator_ClearCount.h
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_CLEARCOUNT_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_CLEARCOUNT_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Generator__enResetCounterByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_nERROR PWM_Generator__enResetCounterByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg);

PWM_nERROR PWM_Generator__enIsResetCounterOngoingByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nBOOLEAN* penStatusArg);
PWM_nERROR PWM_Generator__enIsResetCounterOngoingByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGenMaskArg, PWM_nGENMASK* penStatusArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_CLEARCOUNT_H_ */
