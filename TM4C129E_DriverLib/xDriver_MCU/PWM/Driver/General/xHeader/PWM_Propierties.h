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

uint32_t PWM__u32GetMaxGeneratorNumber(PWM_nMODULE enModule);
uint32_t PWM__u32GetMaxFaultNumber(PWM_nMODULE enModule);
PWM_nSTATE PWM__enIsFaultExtended(PWM_nMODULE enModule);
PWM_nSTATE PWM__enIsSyncExtended(PWM_nMODULE enModule);
PWM_nSTATE PWM__enIsOneShotAvailable(PWM_nMODULE enModule);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_PROPIERTIES_H_ */
