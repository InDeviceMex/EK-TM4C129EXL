/**
 *
 * @file PWM_Fault_MinimumPeriod.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MINIMUMPERIOD_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MINIMUMPERIOD_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_Generator__enSetMinPeriodValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t uxValueArg);
PWM_nERROR PWM_Generator__enSetMinPeriodValueByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, UBase_t uxValueArg);
PWM_nERROR PWM_Generator__enGetMinPeriodValueByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxValueArg);
PWM_nERROR PWM_Generator__enGetMinPeriodValueByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, UBase_t* puxValueArg);

PWM_nERROR PWM_Fault__enSetMinPeriodStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Fault__enSetMinPeriodStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Fault__enGetMinPeriodStateByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_Fault__enGetMinPeriodStateByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nGENMASK* penStateArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MINIMUMPERIOD_H_ */
