/**
 *
 * @file GPIO_PeripheralMux.h
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
 * @verbatim 18 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_PERIPHERALMUX_H_
#define XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_PERIPHERALMUX_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetPeripheralMuxByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                           UBase_t uxMuxArg);
GPIO_nERROR GPIO__enSetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         UBase_t uxMuxArg);
GPIO_nERROR GPIO__enGetPeripheralMuxByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                         UBase_t* puxMuxArg);

#endif /* XDRIVER_MCU_GPIO_DRIVER_XHEADER_GPIO_PERIPHERALMUX_H_ */
