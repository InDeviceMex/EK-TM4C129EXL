/**
 *
 * @file PWM_DeadBand_RisingDelay.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_DEADBAND_XHEADER_PWM_DEADBAND_RISINGDELAY_H_
#define XDRIVER_MCU_PWM_DRIVER_DEADBAND_XHEADER_PWM_DEADBAND_RISINGDELAY_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM_DeadBand__enSetRisingDelayByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t uxDelayArg);
PWM_nERROR PWM_DeadBand__enSetRisingDelayByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, UBase_t uxDelayArg);

PWM_nERROR PWM_DeadBand__enGetRisingDelayByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, UBase_t* puxDelayArg);

PWM_nERROR PWM_DeadBand__enSetRisingDelayUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE enModeArg);
PWM_nERROR PWM_DeadBand__enSetRisingDelayUpdateModeByMask(PWM_nMODULE enModuleArg, PWM_nGENMASK enGeneratorMaskArg, PWM_nUPDATE enModeArg);

PWM_nERROR PWM_DeadBand__enGetRisingDelayUpdateModeByNumber(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nUPDATE* penModeArg);



#endif /* XDRIVER_MCU_PWM_DRIVER_DEADBAND_XHEADER_PWM_DEADBAND_RISINGDELAY_H_ */
