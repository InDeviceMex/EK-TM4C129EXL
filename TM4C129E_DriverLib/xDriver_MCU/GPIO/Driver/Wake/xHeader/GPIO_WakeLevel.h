/**
 *
 * @file GPIO_WakeLevel.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKELEVEL_H_
#define XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKELEVEL_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nLEVEL enLevelArg);
GPIO_nERROR GPIO__enSetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nLEVEL enLevelArg);
GPIO_nERROR GPIO__enGetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nLEVEL* penLevelArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKELEVEL_H_ */
