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

GPIO_nERROR GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunctionArg,
                                      GPIO_nCONFIG enConfigArg);
GPIO_nERROR GPIO__enSetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg,
                                           const GPIO_CONFIG_t *pstConfigArg);

GPIO_nERROR GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_nCONFIG* penConfigArg);
GPIO_nERROR GPIO__enGetDigitalConfigStructure(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t* pstConfigArg);
GPIO_nERROR GPIO__enGetDigitalConfigByNumber_Create(GPIO_nDIGITAL_FUNCTION enFunctionArg, GPIO_CONFIG_t** pstConfigArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_DIGITALCONFIG_H_ */
