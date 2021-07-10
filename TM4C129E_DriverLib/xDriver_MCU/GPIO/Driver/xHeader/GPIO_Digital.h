/**
 *
 * @file GPIO_Digital.h
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_DIGITAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_DIGITAL_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnDigital(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisDigital(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vSetDigital(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDIGITAL enFeature);

GPIO_nDIGITAL GPIO__enGetDigital(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_DIGITAL_H_ */
