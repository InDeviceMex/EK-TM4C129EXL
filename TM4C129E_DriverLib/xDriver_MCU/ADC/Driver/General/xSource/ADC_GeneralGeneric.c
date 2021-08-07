/**
 *
 * @file ADC_GeneralGeneric.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>

#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    ADC__vWriteRegister((ADC_nMODULE) u32Module, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}

uint32_t ADC__u32GetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Feature = 0xFFFFFFFFU;
    ADC__enReadRegister((ADC_nMODULE) u32Module, u32OffsetRegister, &u32Feature, u32MaskFeature, u32BitFeature);
    return u32Feature;
}
