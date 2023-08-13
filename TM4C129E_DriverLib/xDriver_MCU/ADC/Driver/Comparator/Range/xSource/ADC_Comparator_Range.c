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
                                            UBase_t uxRangeLowArg, UBase_t uxRangeHighArg)
{
    ADC_nERROR enErrorMemoryReg;
    enErrorMemoryReg = (ADC_nERROR) MCU__enCheckParams((UBase_t) enComparatorMaskArg, (UBase_t) ADC_enCOMPMASK_MAX);
    if(ADC_enERROR_OK == enErrorMemoryReg)
    {
        UBase_t uxComparatorReg = 0U;
        UBase_t uxComparatorMaskReg = (UBase_t) enComparatorMaskArg;
        ADC_nERROR enErrorReg = ADC_enERROR_OK;
        while(0U != uxComparatorMaskReg)
        {
            if(0UL != ((UBase_t) ADC_enCOMPMASK_0 & uxComparatorMaskReg))
            {
                enErrorReg = ADC_Comparator__enSetRangeByNumber(enModuleArg, (ADC_nCOMPARATOR) uxComparatorReg, uxRangeLowArg, uxRangeHighArg);
            }

            if(ADC_enERROR_OK != enErrorReg)
            {
                enErrorMemoryReg = enErrorReg;
                break;
            }
            uxComparatorReg++;
            uxComparatorMaskReg >>= 1U;
        }
    }
    return (enErrorMemoryReg);
}

ADC_nERROR ADC_Comparator__enSetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              UBase_t uxRangeLowArg, UBase_t uxRangeHighArg)
{
    if(uxRangeLowArg > uxRangeHighArg)
    {
        UBase_t uxCompRangeTemp = uxRangeLowArg;
        uxRangeLowArg = uxRangeHighArg;
        uxRangeHighArg = uxCompRangeTemp;
    }

    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Comparator__enSetRangeLowByNumber(enModuleArg, enComparatorArg, uxRangeLowArg);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Comparator__enSetRangeHighByNumber(enModuleArg, enComparatorArg, uxRangeHighArg);
    }
    return (enErrorReg);
}

ADC_nERROR ADC_Comparator__enGetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              UBase_t* puxRangeLowArg, UBase_t* puxRangeHighArg)
{
    ADC_nERROR enErrorReg;
    enErrorReg = ADC_Comparator__enGetRangeLowByNumber(enModuleArg, enComparatorArg, puxRangeLowArg);
    if(ADC_enERROR_OK == enErrorReg)
    {
        enErrorReg = ADC_Comparator__enGetRangeHighByNumber(enModuleArg, enComparatorArg, puxRangeHighArg);
    }
    return (enErrorReg);
}
