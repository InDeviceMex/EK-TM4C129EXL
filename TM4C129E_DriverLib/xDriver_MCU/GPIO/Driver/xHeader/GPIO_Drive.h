/**
 *
 * @file GPIO_Drive.h
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DRIVE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DRIVE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetDriveByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nDRIVE enDriveArg);
GPIO_nERROR GPIO__enSetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE enDriveArg);

GPIO_nERROR GPIO__enGetDriveByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nDRIVE* penDriveArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DRIVE_H_ */
