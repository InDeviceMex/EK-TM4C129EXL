/**
 *
 * @file GPIO_Resistor.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_RESISTOR_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_RESISTOR_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetResistorModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                          GPIO_nRESMODE enModeArg);
GPIO_nERROR GPIO__enSetResistorModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nRESMODE enModeArg);
GPIO_nERROR GPIO__enGetResistorModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                            GPIO_nRESMODE* penModeArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_RESISTOR_H_ */
