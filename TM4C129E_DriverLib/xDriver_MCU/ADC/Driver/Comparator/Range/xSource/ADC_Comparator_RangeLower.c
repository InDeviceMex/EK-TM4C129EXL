/**
 *
 * @file ADC_Comparator_RangeLower.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeLower.h>

#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_GenericRange.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetCompRangeLow(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp, uint32_t u32CompRangeLow)
{
    ADC__vSetCompGenericRange((uint32_t) enModule, (uint32_t) enActComp, u32CompRangeLow, ADC_DCCMP_COMP0_MASK, ADC_DCCMP_R_COMP0_BIT);
}

uint32_t ADC__u32GetCompRangeLow(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    return ADC__u32GetCompGenericRange((uint32_t) enModule, (uint32_t) enActComp, ADC_DCCMP_COMP0_MASK, ADC_DCCMP_R_COMP0_BIT);
}
