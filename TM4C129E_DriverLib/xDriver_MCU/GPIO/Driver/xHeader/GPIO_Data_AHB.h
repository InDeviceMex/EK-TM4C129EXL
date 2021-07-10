/**
 *
 * @file GPIO_Data_AHB.h
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_AHB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_AHB_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO_AHB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
GPIO_nSTATUS GPIO_AHB__enGetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t* u32Feature);

void GPIO_AHB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_AHB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_AHB_H_ */
