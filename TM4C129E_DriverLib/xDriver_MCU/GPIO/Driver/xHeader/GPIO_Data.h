/**
 *
 * @file GPIO_Data.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                  GPIO_nLEVEL enLevelArg);
GPIO_nERROR GPIO__enSetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                    GPIO_nLEVEL enLevelArg);

GPIO_nERROR GPIO__enGetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                  GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                    GPIO_nLEVEL* penLevelArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DATA_H_ */
