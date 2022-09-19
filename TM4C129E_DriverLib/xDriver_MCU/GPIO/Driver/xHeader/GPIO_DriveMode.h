/**
 *
 * @file GPIO_DriveMode.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_DRIVEMODE_H_
#define XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_DRIVEMODE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetDriveModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                       GPIO_nDRIVE_MODE enModeArg);
GPIO_nERROR GPIO__enSetDriveModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         GPIO_nDRIVE_MODE enModeArg);

GPIO_nERROR GPIO__enGetDriveModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         GPIO_nDRIVE_MODE* penModeArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_DRIVEMODE_H_ */
