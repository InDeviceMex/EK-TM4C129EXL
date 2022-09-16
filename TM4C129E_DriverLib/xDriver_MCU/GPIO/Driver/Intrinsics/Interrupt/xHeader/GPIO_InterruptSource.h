/**
 *
 * @file GPIO_InterruptSource.h
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTSOURCE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnInterruptSource(GPIO_nPORT enPort, GPIO_nPINMASK enPin);
void GPIO__vDisInterruptSource(GPIO_nPORT enPort, GPIO_nPINMASK enPin);
void GPIO__vClearInterruptSource(GPIO_nPORT enPort, GPIO_nPINMASK enPin);
GPIO_nPINMASK GPIO__enStatusInterruptSource(GPIO_nPORT enPort, GPIO_nPINMASK enPin);


void GPIO__vEnInterruptSourceDMA(GPIO_nPORT enPort);
void GPIO__vDisInterruptSourceDMA(GPIO_nPORT enPort);
void GPIO__vClearInterruptSourceDMA(GPIO_nPORT enPort);
GPIO_nSTATUS GPIO__enStatusInterruptSourceDMA(GPIO_nPORT enPort);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTPIN_H_ */
