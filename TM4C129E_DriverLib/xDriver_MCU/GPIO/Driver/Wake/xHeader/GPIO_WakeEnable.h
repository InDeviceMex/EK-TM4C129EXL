/**
 *
 * @file GPIO_WakeEnable.h
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_
#define XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetWakeEnable(GPIO_nPORT enPort, GPIO_nPINMASK enPin,
                          GPIO_nSTATE enWakeEnable);
GPIO_nSTATE GPIO__enGetWakeEnable(GPIO_nPORT enPort, GPIO_nPINMASK enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_ */
