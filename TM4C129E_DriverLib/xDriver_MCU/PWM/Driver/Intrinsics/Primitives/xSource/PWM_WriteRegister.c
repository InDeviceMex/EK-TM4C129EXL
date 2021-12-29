/**
 *
 * @file PWM_WriteRegister.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 26 dic. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 dic. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/xHeader/PWM_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM__vWriteRegister(PWM_nMODULE enModule, uint32_t u32OffsetRegister,
                         uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                         uint32_t u32BitFeature)
{
    uint32_t u32AdcBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) PWM_enMODULE_MAX);

    u32AdcBase = PWM__u32BlockBaseAddress((PWM_nMODULE) u32Module);
    MCU__vWriteRegister(u32AdcBase, u32OffsetRegister, u32FeatureValue,
                        u32MaskFeature, u32BitFeature);
}



