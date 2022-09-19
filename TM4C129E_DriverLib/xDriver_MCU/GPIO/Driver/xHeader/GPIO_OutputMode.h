/**
 *
 * @file GPIO_OutputMode.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_OUTPUTMODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_OUTPUTMODE_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetOutputModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nOUTMODE enStateArg);
GPIO_nERROR GPIO__enSetOutputModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                          GPIO_nOUTMODE enStateArg);

GPIO_nERROR GPIO__enGetOutputModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetOutputModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                          GPIO_nOUTMODE* penModeArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_OUTPUTMODE_H_ */
