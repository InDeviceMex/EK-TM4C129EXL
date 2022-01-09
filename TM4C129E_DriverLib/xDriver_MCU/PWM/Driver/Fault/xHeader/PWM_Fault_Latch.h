/**
 *
 * @file PWM_Fault_Latch.h
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

#ifndef XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_LATCH_H_
#define XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_LATCH_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM_Fault__vSetLatch(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                               PWM_nFAULT_LATCH_ENABLE enLatchArg);
PWM_nFAULT_LATCH_ENABLE PWM_Fault__enGetLatch(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator);

#endif /* XDRIVER_MCU_PWM_DRIVER_FAULT_XHEADER_PWM_FAULT_LATCH_H_ */
