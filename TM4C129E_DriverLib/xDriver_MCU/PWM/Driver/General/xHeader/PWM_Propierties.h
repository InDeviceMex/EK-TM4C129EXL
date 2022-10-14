/**
 *
 * @file PWM_Propierties.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_PROPIERTIES_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_PROPIERTIES_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

PWM_nERROR PWM__enGeneratorNumber(PWM_nMODULE enModuleArg, UBase_t* puxNumberArg);
PWM_nERROR PWM__enFaultInputNumber(PWM_nMODULE enModuleArg, UBase_t* puxNumberArg);

PWM_nERROR PWM__enIsExtendedFaultAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg);
PWM_nERROR PWM__enIsExtendedSyncAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg);
PWM_nERROR PWM__enIsOneShotModeAvailable(PWM_nMODULE enModuleArg, PWM_nBOOLEAN* penAvailableArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_PROPIERTIES_H_ */
