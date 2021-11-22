/**
 *
 * @file I2C_RegisterPeripheral.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_I2C_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_I2C_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module1.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module2.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module3.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module4.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module5.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module6.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module7.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module8.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/xHeader/I2C_RegisterPeripheral_Module9.h>

#define I2C    ((I2CS_t*) (I2C_BASE))

uint32_t I2C__u32BlockBaseAddress(I2C_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_I2C_REGISTERPERIPHERAL_H_ */
