/**
 *
 * @file GPIO_Data_APB.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_APB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_APB_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
GPIO_nSTATUS GPIO_APB__enGetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t* u32Feature);

void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_APB_H_ */
