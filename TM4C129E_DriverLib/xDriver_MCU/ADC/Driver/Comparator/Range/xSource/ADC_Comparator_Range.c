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

void ADC__vSetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, uint32_t u32CompRangeLow, uint32_t u32CompRangeHigh)
{
    uint32_t u32CompRangeTemp = 0UL;
    if(u32CompRangeLow > u32CompRangeHigh)
    {
        u32CompRangeTemp = u32CompRangeHigh;
        u32CompRangeLow = u32CompRangeHigh;
        u32CompRangeHigh = u32CompRangeTemp;
    }
    ADC__vSetCompRangeLow(enModule, enActComp, u32CompRangeLow);
    ADC__vSetCompRangeHigh(enModule, enActComp, u32CompRangeHigh);
}

ADC_nSTATUS ADC__enGetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, uint32_t* pu32CompRangeLow, uint32_t* pu32CompRangeHigh)
{
    ADC_nSTATUS enStatus = ADC_enSTATUS_ERROR;
    uint32_t u32CompRangeLow = 0UL;
    uint32_t u32CompRangeHigh = 0UL;
    if((0UL != (uint32_t) pu32CompRangeLow) && (0UL != (uint32_t) pu32CompRangeHigh))
    {
        u32CompRangeLow = ADC__u32GetCompRangeLow(enModule, enActComp);
        u32CompRangeHigh = ADC__u32GetCompRangeHigh(enModule, enActComp);
        if((0xFFFFFFFFUL != u32CompRangeLow) && (0xFFFFFFFFUL != u32CompRangeHigh))
        {
            enStatus = ADC_enSTATUS_OK;
            *pu32CompRangeLow = u32CompRangeLow;
            *pu32CompRangeHigh = u32CompRangeHigh;
        }
    }
    return enStatus;
}
