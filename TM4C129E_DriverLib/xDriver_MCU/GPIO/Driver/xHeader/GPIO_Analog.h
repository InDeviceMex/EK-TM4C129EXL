/**
 *
 * @file GPIO_Analog.h
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
 * @verbatim 17 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_ANALOG_H_
#define XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_ANALOG_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetAnalogModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enSetAnalogModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enEnableAnalogModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enEnableAnalogModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enDisableAnalogModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enDisableAnalogModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enGetAnalogModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetAnalogModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_ANALOG_H_ */
