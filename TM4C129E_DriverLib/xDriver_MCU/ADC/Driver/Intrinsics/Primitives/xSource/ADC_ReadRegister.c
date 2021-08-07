/**
 *
 * @file ADC_ReadRegister.c
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_Ready.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nSTATUS ADC__enReadRegister(ADC_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    ADC_nSTATUS enStatus = ADC_enSTATUS_UNDEF;
    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32AdcBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);

    enReady = ADC__enIsReady((ADC_nMODULE) u32Module);
    if((ADC_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = ADC_enSTATUS_OK;
        u32AdcBase = ADC__u32BlockBaseAddress((ADC_nMODULE) u32Module);
        *pu32FeatureValue = MCU__u32ReadRegister(u32AdcBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}
