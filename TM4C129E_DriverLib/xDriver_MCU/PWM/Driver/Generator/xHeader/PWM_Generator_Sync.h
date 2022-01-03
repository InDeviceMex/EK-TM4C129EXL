/**
 *
 * @file PWM_Generator_Sync.h
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
 * @verbatim 2 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_SYNC_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_SYNC_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Generator__vSetGlobalSync(PWM_nMODULE enModule,
                              PWM_nGENMASK enSequence);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERATOR_XHEADER_PWM_GENERATOR_SYNC_H_ */
