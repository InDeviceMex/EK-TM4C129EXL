/**
 *
 * @file PWM_RegisterPeripheral.h
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
 * @verbatim 24 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_PWM_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_PWM_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/PWM/Peripheral/Register/RegisterPeripheral/xHeader/PWM_RegisterPeripheral_Module0.h>

#define PWM    ((PWMS_t*) (PWM_BASE))

uint32_t PWM__u32BlockBaseAddress(PWM_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_PWM_REGISTERPERIPHERAL_H_ */
