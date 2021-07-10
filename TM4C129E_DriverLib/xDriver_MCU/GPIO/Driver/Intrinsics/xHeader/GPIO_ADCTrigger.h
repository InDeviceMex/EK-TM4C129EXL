/**
 *
 * @file GPIO_ADCTrigger.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ADCTRIGGER_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ADCTRIGGER_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nADC_TRIGGER enFeature);
void GPIO__vEnADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);

GPIO_nADC_TRIGGER GPIO__enGetADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_ADCTRIGGER_H_ */
