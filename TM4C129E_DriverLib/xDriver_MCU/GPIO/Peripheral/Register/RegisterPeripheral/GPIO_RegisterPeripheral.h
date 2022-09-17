/**
 *
 * @file GPIO_RegisterPeripheral.h
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleA.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleC.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleD.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleE.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleF.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleG.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleH.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleJ.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleK.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleL.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleM.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleN.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleP.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/xHeader/GPIO_RegisterPeripheral_ModuleQ.h>

#define GPIO    ((GPIO_PORT_t*) (GPIO_BASE))
#define GPIO_AUX    ((GPIO_PORT_AUX_t*) (GPIO_BASE))

uintptr_t GPIO__uptrBlockBaseAddress(GPIO_nPORT enPortArg);

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_ */
