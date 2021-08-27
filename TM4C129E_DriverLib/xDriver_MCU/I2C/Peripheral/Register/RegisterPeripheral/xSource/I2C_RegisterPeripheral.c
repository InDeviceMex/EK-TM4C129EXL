/**
 *
 * @file I2C_RegisterPeripheral.c
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
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral/I2C_RegisterPeripheral.h>

I2C_TypeDef* I2C_BLOCK[(uint32_t) I2C_enMODULE_MAX] = { I2C0, I2C1, I2C2, I2C3};
uint32_t I2C_BLOCK_ADDRESS[(uint32_t) I2C_enMODULE_MAX] = { I2C0_BASE, I2C1_BASE, I2C2_BASE, I2C3_BASE};
