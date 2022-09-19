/**
 *
 * @file GPIO_ConfigStruct.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIGSTRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIGSTRUCT_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enConvertConfigStructure(GPIO_nCONFIG enConfigArg,
                                           GPIO_CONFIG_t* pstConfigArg);
GPIO_nERROR GPIO__enConvertConfigStructure_Create(GPIO_nCONFIG enConfigArg,
                                                  GPIO_CONFIG_t** pstConfigArg);

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_t *pstConfigArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_APP_GPIO_CONFIG_GPIO_CONFIGSTRUCT_H_ */
