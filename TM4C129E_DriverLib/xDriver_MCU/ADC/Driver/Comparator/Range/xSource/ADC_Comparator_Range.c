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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeBoth.h>

#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeLower.h>

void ADC_Comparator__vSetRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,
                        uint32_t u32CompRangeLow, uint32_t u32CompRangeHigh)
{
    uint32_t u32CompRangeTemp = 0UL;
    if(u32CompRangeLow > u32CompRangeHigh)
    {
        u32CompRangeTemp = u32CompRangeHigh;
        u32CompRangeLow = u32CompRangeHigh;
        u32CompRangeHigh = u32CompRangeTemp;
    }
    ADC_Comparator__vSetRangeLow(enModule, enActComp, u32CompRangeLow);
    ADC_Comparator__vSetRangeHigh(enModule, enActComp, u32CompRangeHigh);
}

ADC_nERROR ADC_Comparator__enGetRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,
                                uint32_t* pu32CompRangeLow, uint32_t* pu32CompRangeHigh)
{
    ADC_nERROR enStatus = ADC_enERROR_UNDEF;
    uint32_t u32CompRangeLow = 0UL;
    uint32_t u32CompRangeHigh = 0UL;
    if((0UL != (uint32_t) pu32CompRangeLow) && (0UL != (uint32_t) pu32CompRangeHigh))
    {
        enStatus = ADC_enERROR_OK;
        u32CompRangeLow = ADC_Comparator__u32GetRangeLow(enModule, enActComp);
        u32CompRangeHigh = ADC_Comparator__u32GetRangeHigh(enModule, enActComp);
        *pu32CompRangeLow = u32CompRangeLow;
        *pu32CompRangeHigh = u32CompRangeHigh;
    }
    return (enStatus);
}
