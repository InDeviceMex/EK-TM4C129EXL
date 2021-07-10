/**
 *
 * @file GPIO_Alternative.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ALTERNATIVE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ALTERNATIVE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vSetAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nALT_FUNCTION enFeature);

GPIO_nALT_FUNCTION GPIO__enGetAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ALTERNATIVE_H_ */
