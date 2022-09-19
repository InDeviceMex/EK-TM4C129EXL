/**
 *
 * @file GPIO_WakeEnable.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_
#define XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetWakeUpStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enSetWakeUpStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enEnableWakeUpByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enEnableWakeUpByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enDisableWakeUpByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enDisableWakeUpByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enGetWakeUpStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetWakeUpStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_WAKE_XHEADER_GPIO_WAKEENABLE_H_ */
