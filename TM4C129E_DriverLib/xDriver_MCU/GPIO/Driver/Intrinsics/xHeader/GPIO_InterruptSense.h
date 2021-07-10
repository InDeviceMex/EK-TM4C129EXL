/**
 *
 * @file GPIO_InterruptSense.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTSENSE_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTSENSE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nSENSE enSense);
GPIO_nSENSE GPIO__enGetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_INTERRUPTSENSE_H_ */
