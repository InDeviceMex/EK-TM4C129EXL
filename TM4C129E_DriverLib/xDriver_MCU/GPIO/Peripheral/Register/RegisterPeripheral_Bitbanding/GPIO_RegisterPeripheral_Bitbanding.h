/**
 *
 * @file GPIO_RegisterPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleA.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleC.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleD.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleE.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleF.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleG.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleH.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleJ.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleK.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleL.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleM.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleN.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleN.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleP.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/GPIO_RegisterPeripheral_Bitbanding_ModuleQ.h>

#define GPIO_BITBANDING    ((GPIO_PORT_BITBANDING_t*) (GPIO_BITBANDING_BASE + (GPIO_OFFSET * 32UL)))
#define GPIO_AUX_BITBANDING    ((GPIO_PORT_AUX_BITBANDING_t*) (GPIO_BITBANDING_BASE + (GPIO_OFFSET * 32UL)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_ */
