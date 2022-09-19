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
#include <xDriver_MCU/GPIO/App/Config/xHeader/GPIO_ConfigStruct.h>

GPIO_nERROR GPIO__enSetConfigByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                      GPIO_nCONFIG enConfigArg);
GPIO_nERROR GPIO__enSetConfigByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                    GPIO_nCONFIG enConfigArg);


GPIO_nERROR GPIO__enSetConfigStructureByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                               const GPIO_CONFIG_t *pstConfigArg);
GPIO_nERROR GPIO__enSetConfigStructureByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                               const GPIO_CONFIG_t *pstConfigArg);

GPIO_nERROR GPIO__enGetConfigByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nCONFIG* penConfigArg);
GPIO_nERROR GPIO__enGetConfigStructureByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_CONFIG_t *pstConfigArg);
GPIO_nERROR GPIO__enGetConfigByNumber_Create(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_CONFIG_t** pstConfigArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIG_H_ */
