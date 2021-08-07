/**
 *
 * @file ADC_CompGeneric.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/xHeader/ADC_CompGeneric.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetCompGeneric(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RegisterOffset, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32ComparatorReg = 0UL;
    u32ComparatorReg = MCU__u32CheckParams((uint32_t) u32Comparator, (uint32_t) ADC_enCOMPARATOR_MAX);
    u32ComparatorReg *= 4UL;
    u32RegisterOffset += u32ComparatorReg;
    ADC__vWriteRegister((ADC_nMODULE) u32Module , u32RegisterOffset, u32Feature, u32FeatureMask, u32FeatureBit);
}

uint32_t ADC__u32GetCompGeneric(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RegisterOffset, uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32Feature = 0xFFFFFFFFU;
    uint32_t u32ComparatorReg = 0UL;
    u32ComparatorReg = MCU__u32CheckParams(u32Comparator, (uint32_t) ADC_enCOMPARATOR_MAX);
    u32ComparatorReg *= 4UL;
    u32RegisterOffset += u32ComparatorReg;
    ADC__enReadRegister((ADC_nMODULE) u32Module, u32RegisterOffset, &u32Feature, u32FeatureMask, u32FeatureBit);
    return u32Feature;
}
