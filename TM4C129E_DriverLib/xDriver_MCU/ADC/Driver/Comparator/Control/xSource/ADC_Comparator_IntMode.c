/**
 *
 * @file ADC_Comparator_IntMode.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_IntMode.h>

#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Comparator__vSetInterruptMode(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,
                          ADC_nCOMP_INT_MODE enActCompIntMode)
{
    ADC_Comparator__vSetGenericControl((uint32_t) enModule, (uint32_t) enActComp,
            (uint32_t) enActCompIntMode, ADC_DC_CTL_CIM_MASK, ADC_DC_CTL_R_CIM_BIT);
}

ADC_nCOMP_INT_MODE ADC_Comparator__enGetInterruptMode(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    ADC_nCOMP_INT_MODE enCompInt = ADC_enCOMP_INT_MODE_ALWAYS;
    enCompInt = (ADC_nCOMP_INT_MODE) ADC_Comparator__u32GetGenericControl((uint32_t) enModule,
                       (uint32_t) enActComp, ADC_DC_CTL_CIM_MASK, ADC_DC_CTL_R_CIM_BIT);
    return (enCompInt);
}
