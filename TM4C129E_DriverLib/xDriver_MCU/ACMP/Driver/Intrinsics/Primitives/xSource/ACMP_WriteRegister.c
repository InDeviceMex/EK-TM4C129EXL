/**
 *
 * @file ACMP_WriteRegister.c
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vWriteRegister(ACMP_nMODULE enModule, uint32_t u32OffsetRegister,
                          uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                          uint32_t u32BitFeature)
{
    uint32_t u32ACMPBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);

    u32ACMPBase = ACMP__u32BlockBaseAddress((ACMP_nMODULE) u32Module);
    MCU__vWriteRegister(u32ACMPBase, u32OffsetRegister, u32FeatureValue,
                        u32MaskFeature, u32BitFeature);
}



