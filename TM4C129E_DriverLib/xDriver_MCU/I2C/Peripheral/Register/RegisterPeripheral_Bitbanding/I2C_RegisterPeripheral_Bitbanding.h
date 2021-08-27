/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_I2C_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_I2C_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/I2C_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/I2C_RegisterPeripheral_Bitbanding_Module1.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/I2C_RegisterPeripheral_Bitbanding_Module2.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/I2C_RegisterPeripheral_Bitbanding_Module3.h>

#define I2C_BITBANDING    ((I2CS_BITBANDING_TypeDef*) (I2C_BITBANDING_BASE + (I2C_OFFSET * 32UL)))

extern I2C_BITBANDING_TypeDef* I2C_BITBANDING_BLOCK[(uint32_t) I2C_enMODULE_MAX];

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_I2C_REGISTERPERIPHERAL_BITBANDING_H_ */
