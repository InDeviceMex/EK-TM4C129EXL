/**
 *
 * @file PWM_RegisterPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_PWM_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_PWM_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/PWM/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/PWM_RegisterPeripheral_Bitbanding_Module0.h>

#define PWM_BITBANDING    ((PWMS_BITBANDING_t*) (PWM_BITBANDING_BASE + (PWM_OFFSET * 32UL)))

#endif /* XDRIVER_MCU_PWM_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_PWM_REGISTERPERIPHERAL_BITBANDING_H_ */
