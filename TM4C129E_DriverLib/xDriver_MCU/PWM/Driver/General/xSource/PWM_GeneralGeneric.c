/**
 *
 * @file PWM_GeneralGeneric.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_GeneralGeneric.h>

#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/PWM/Driver/Intrinsics/Primitives/PWM_Primitives.h>

void PWM__vSetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                             uint32_t u32FeatureValue, uint32_t u32MaskFeature,
                             uint32_t u32BitFeature)
{
    PWM__vWriteRegister((PWM_nMODULE) u32Module, u32OffsetRegister, u32FeatureValue,
                        u32MaskFeature, u32BitFeature);
}

uint32_t PWM__u32GetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister,
                                   uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Feature = 0UL;
    u32Feature = PWM__u32ReadRegister((PWM_nMODULE) u32Module, u32OffsetRegister,
                                      u32MaskFeature, u32BitFeature);
    return (u32Feature);
}
