/**
 *
 * @file GPIO_NormalDrive.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_NORMALDRIVE_H_
#define XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_NORMALDRIVE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enSetNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE enStateArg);

GPIO_nERROR GPIO__enEnableNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                            GPIO_nNORMAL_DRIVE enDriveArg);
GPIO_nERROR GPIO__enEnableNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nNORMAL_DRIVE enDriveArg);
GPIO_nERROR GPIO__enDisableNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nNORMAL_DRIVE enDriveArg);
GPIO_nERROR GPIO__enDisableNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                               GPIO_nNORMAL_DRIVE enDriveArg);

GPIO_nERROR GPIO__enGetNormalDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetNormalDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nNORMAL_DRIVE enDriveArg, GPIO_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_NORMALDRIVE_H_ */
