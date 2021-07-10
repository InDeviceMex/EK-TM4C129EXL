/**
 *
 * @file GPIO_WakeStat.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKESTAT_H_
#define XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKESTAT_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetWakeStatus(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nWAKE_STATUS enWakeStatus);
GPIO_nWAKE_STATUS GPIO__enGetWakeStatus(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKESTAT_H_ */
