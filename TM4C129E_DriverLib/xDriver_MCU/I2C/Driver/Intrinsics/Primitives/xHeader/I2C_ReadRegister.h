/**
 *
 * @file I2C_ReadRegister.h
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
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READREGISTER_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READREGISTER_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>
#include <xUtils/Standard/Standard.h>

I2C_nSTATUS I2C__enReadRegister(I2C_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_I2C_READREGISTER_H_ */
