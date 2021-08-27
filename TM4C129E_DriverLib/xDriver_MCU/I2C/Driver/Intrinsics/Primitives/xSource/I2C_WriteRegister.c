/**
 *
 * @file I2C_WriteRegister.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_Ready.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vWriteRegister(I2C_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32I2cBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);

    I2C__vSetReady((I2C_nMODULE) u32Module);
    u32I2cBase = I2C_BLOCK_ADDRESS [u32Module];
    MCU__vWriteRegister(u32I2cBase, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}
