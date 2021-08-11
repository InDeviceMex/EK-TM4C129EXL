/**
 *
 * @file SSI_ReadRegister.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/xHeader/SSI_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

uint32_t SSI__u32ReadRegister(SSI_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureValue = 0UL;
    uint32_t u32SsiBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    u32SsiBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
    u32FeatureValue = MCU__u32ReadRegister(u32SsiBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);

    return (u32FeatureValue);
}
