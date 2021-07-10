/**
 *
 * @file GPIO_Generic.h
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_GENERIC_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_GENERIC_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin);
void GPIO__vDisGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin);
void GPIO__vSetGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin, uint32_t u32Feature);

uint32_t GPIO__u32GetGeneric(GPIO_nPORT enPort, uint32_t u32RegisterOffset, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_GENERIC_H_ */
