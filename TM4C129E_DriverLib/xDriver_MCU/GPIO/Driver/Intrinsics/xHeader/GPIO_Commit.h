/**
 *
 * @file GPIO_Commit.h
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_COMMIT_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_COMMIT_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vSetCommit(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nCOMMIT enFeature);
GPIO_nCOMMIT GPIO__enGetCommit(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_XHEADER_GPIO_COMMIT_H_ */
