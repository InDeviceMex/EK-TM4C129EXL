/**
 *
 * @file GPIO_DigitalConfig.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_DIGITALCONFIG_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_DIGITALCONFIG_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_nCONFIG enConfigParam);
GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction, const GPIO_CONFIG_Typedef *pstConfig);

GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);
void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef *pstConfig);
GPIO_CONFIG_Typedef* GPIO__pstGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_DIGITALCONFIG_H_ */
