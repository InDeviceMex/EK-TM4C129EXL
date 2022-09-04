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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

uint32_t I2C__u32BlockBaseAddress(I2C_nMODULE enModuleArg)
{
    const uintptr_t I2C_BLOCK_BASE[(uint32_t) I2C_enMODULE_MAX] =
    {
     I2C0_BASE, I2C1_BASE, I2C2_BASE, I2C3_BASE,
     I2C4_BASE, I2C5_BASE, I2C6_BASE, I2C7_BASE,
     I2C8_BASE, I2C9_BASE
    };
    return (I2C_BLOCK_BASE[(uint32_t) enModuleArg]);
}
