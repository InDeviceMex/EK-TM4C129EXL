/**
 *
 * @file GPIO_DMATrigger.h
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nERROR GPIO__enSetDMATriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enSetDMATriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enEnableDMATriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enEnableDMATriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enDisableDMATriggerByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg);
GPIO_nERROR GPIO__enDisableDMATriggerByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO__enGetDMATriggerStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                             GPIO_nPINMASK* penPinMaskReqArg);
GPIO_nERROR GPIO__enGetDMATriggerStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nSTATE* penStateArg);


#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_DMATRIGGER_H_ */
