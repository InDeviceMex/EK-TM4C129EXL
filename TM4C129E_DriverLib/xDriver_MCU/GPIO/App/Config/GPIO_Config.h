/**
 *
 * @file GPIO_Config.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIG_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIG_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_nCONFIG enConfigParam);
GPIO_nERROR GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPINMASK enPin,
                                     const GPIO_CONFIG_t *pstConfig);

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin);
void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin, GPIO_CONFIG_t *pstConfig);
GPIO_CONFIG_t* GPIO__pstGetConfig(GPIO_nPORT enPort, GPIO_nPINMASK enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIG_H_ */
