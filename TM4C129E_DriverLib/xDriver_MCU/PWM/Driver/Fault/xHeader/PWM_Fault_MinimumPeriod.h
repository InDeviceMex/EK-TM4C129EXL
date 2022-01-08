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

void PWM_Fault__vSetMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                             uint32_t u32MinimumPeriodArg);
uint32_t PWM_Fault__u32GetMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);
void PWM_Fault__vSetEnableMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                        PWM_nFAULT_MINPERIOD_ENABLE enEnableArg);
PWM_nFAULT_MINPERIOD_ENABLE PWM_Fault__enGetEnableMinimumPeriod(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_MINIMUMPERIOD_H_ */
