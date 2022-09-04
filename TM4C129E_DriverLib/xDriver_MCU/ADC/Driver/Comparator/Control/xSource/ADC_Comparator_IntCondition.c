/**
 *
 * @file ADC_Comparator_IntCondition.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_IntCondition.h>

#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Comparator__vSetInterruptCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,
                               ADC_nCOMP_CONDITION enActCompIntCondition)
{
    ADC_Comparator__vSetGenericControl((uint32_t) enModule, (uint32_t) enActComp,
                                (uint32_t) enActCompIntCondition,
                                ADC_DC_CTL_CIC_MASK, ADC_DC_CTL_R_CIC_BIT);
}

ADC_nCOMP_CONDITION ADC_Comparator__enGetInterruptCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    ADC_nCOMP_CONDITION enCompInt = ADC_enCOMP_CONDITION_LOW;
    enCompInt = (ADC_nCOMP_CONDITION) ADC_Comparator__u32GetGenericControl((uint32_t) enModule,
                               (uint32_t) enActComp, ADC_DC_CTL_CIC_MASK, ADC_DC_CTL_R_CIC_BIT);
    return (enCompInt);
}
