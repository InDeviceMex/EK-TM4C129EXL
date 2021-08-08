/**
 *
 * @file SSI_ReadRegister.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READREGISTER_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READREGISTER_H_

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>
#include <xUtils/Standard/Standard.h>

SSI_nSTATUS SSI__enReadRegister(SSI_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SSI_READREGISTER_H_ */
