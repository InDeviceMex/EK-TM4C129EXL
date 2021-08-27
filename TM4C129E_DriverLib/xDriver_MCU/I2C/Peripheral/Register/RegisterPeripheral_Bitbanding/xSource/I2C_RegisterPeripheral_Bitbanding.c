/**
 *
 * @file I2C_RegisterPeripheral_Bitbanding.c
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
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterPeripheral_Bitbanding/I2C_RegisterPeripheral_Bitbanding.h>

I2C_BITBANDING_TypeDef *I2C_BITBANDING_BLOCK[(uint32_t) I2C_enMODULE_MAX] =
{ I2C0_BITBANDING,
I2C1_BITBANDING,
I2C2_BITBANDING,
I2C3_BITBANDING,
};


