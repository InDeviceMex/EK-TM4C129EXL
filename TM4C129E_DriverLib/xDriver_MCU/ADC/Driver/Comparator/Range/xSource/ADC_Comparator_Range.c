/**
 *
 * @file ADC_Comparator_Range.c
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Comparator/Range/ADC_Comparator_Range.h>

#include <xDriver_MCU/Common/MCU_Common.h>


ADC_nERROR ADC_Comparator__enSetRangeByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                            uint32_t u32RangeLowArg, uint32_t u32RangeHighArg)
{
    uint32_t u32ComparatorReg;
    uint32_t u32ComparatorMaskReg;
    ADC_nERROR enErrorReg;
    ADC_nERROR enErrorMemoryReg;

    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((uint32_t) enComparatorMaskArg, (uint32_t) ADC_enCOMPMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        u32ComparatorReg = 0U;
        u32ComparatorMaskReg = (uint32_t) enComparatorMaskArg;
        enErrorReg = ADC_enERROR_OK;
        while(0U != u32ComparatorMaskReg)
        {
            if(0UL != (ADC_enCOMPMASK_0 & u32ComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetRangeByNumber(enModuleArg, (ADC_nCOMPARATOR) u32ComparatorReg, u32RangeLowArg, u32RangeHighArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
                break;
            }
            u32ComparatorReg++;
            u32ComparatorMaskReg >>= 1U;
        }
    }

    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Comparator__enSetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              uint32_t u32RangeLowArg, uint32_t u32RangeHighArg)
{
    uint32_t u32CompRangeTemp;
    ADC_nERROR enErrorReg;

    if(u32RangeLowArg > u32RangeHighArg)
    {
        u32CompRangeTemp = u32RangeLowArg;
        u32RangeLowArg = u32RangeHighArg;
        u32RangeHighArg = u32CompRangeTemp;
    }

    enErrorReg = ADC_Comparator__enSetRangeLowByNumber(enModuleArg, enComparatorArg, u32RangeLowArg);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Comparator__enSetRangeHighByNumber(enModuleArg, enComparatorArg, u32RangeHighArg);
    }

    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              uint32_t* pu32RangeLowArg, uint32_t* pu32RangeHighArg)
{
    ADC_nERROR enErrorReg;

    enErrorReg = ADC_Comparator__enGetRangeLowByNumber(enModuleArg, enComparatorArg, pu32RangeLowArg);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Comparator__enGetRangeHighByNumber(enModuleArg, enComparatorArg, pu32RangeHighArg);
    }
    return (enErrorReg);
}
