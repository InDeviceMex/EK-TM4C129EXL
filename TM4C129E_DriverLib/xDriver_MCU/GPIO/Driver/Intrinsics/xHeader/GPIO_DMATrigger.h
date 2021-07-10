/**
 *
 * @file GPIO_DMATrigger.h
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vSetDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDMA_TRIGGER enFeature);

GPIO_nDMA_TRIGGER GPIO__enGetDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_ */
