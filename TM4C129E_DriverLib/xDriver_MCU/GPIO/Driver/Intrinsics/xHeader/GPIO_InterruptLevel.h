/**
 *
 * @file GPIO_InterruptLevel.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTLEVEL_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTLEVEL_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nLEVEL enLevel);
GPIO_nLEVEL GPIO__enGetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTLEVEL_H_ */
