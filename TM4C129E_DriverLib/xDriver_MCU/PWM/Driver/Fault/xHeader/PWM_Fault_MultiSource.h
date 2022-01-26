/**
 *
 * @file PWM_Fault_MultiSource.h
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
 * @verbatim 25 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MULTISOURCE_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MULTISOURCE_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vSetMultiSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                        PWM_nFAULT_ENABLE enEnableArg);
PWM_nFAULT_ENABLE PWM_Fault__enGetMultiSource(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MULTISOURCE_H_ */
