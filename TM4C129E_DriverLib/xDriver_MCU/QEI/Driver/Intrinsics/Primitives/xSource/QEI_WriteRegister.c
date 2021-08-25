/**
 *
 * @file QEI_WriteRegister.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/xHeader/QEI_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vWriteRegister(QEI_nMODULE enModule, uint32_t u32OffsetRegister,
                         uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                         uint32_t u32BitFeature)
{
    uint32_t u32QEIBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);

    u32QEIBase = QEI__u32BlockBaseAddress((QEI_nMODULE) u32Module);
    MCU__vWriteRegister(u32QEIBase, u32OffsetRegister, u32FeatureValue,
                        u32MaskFeature, u32BitFeature);
}
