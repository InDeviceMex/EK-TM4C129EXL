/**
 *
 * @file WDT_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_WriteReg.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vWriteRegister(WDT_nMODULE enModule, uint32_t u32OffsetRegister,
                         uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                         uint32_t u32BitFeature)
{
    uint32_t u32WDTBase = 0UL;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);

    u32WDTBase = WDT__u32BlockBaseAddress((WDT_nMODULE) u32Module);
    MCU__vWriteRegister(u32WDTBase, u32OffsetRegister, u32FeatureValue,
                        u32MaskFeature, u32BitFeature);
    WDT__vWaitWrite((WDT_nMODULE) u32Module);
}
