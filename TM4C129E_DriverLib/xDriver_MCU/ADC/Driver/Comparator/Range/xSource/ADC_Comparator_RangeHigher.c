/**
 *
 * @file ADC_Comparator_RangeHigher.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>

#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_GenericRange.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Comparator__vSetRangeHigh(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,
                            uint32_t u32CompRangeHigh)
{
    ADC_Comparator__vSetGenericRange((uint32_t) enModule, (uint32_t) enActComp,
                              u32CompRangeHigh, ADC_DC_CMP_COMP1_MASK, ADC_DC_CMP_R_COMP1_BIT);
}

uint32_t ADC_Comparator__u32GetRangeHigh(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    uint32_t u32RangeReg = 0UL;
    u32RangeReg = ADC_Comparator__u32GetGenericRange((uint32_t) enModule, (uint32_t) enActComp,
                                     ADC_DC_CMP_COMP1_MASK, ADC_DC_CMP_R_COMP1_BIT);
    return (u32RangeReg);
}
