/**
 *
 * @file ADC_Vref.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 6 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Vref.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetVoltageReference(ADC_nMODULE enModule, ADC_nVREF enVoltageReference)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_CTL_OFFSET, (uint32_t) enVoltageReference, ADC_CTL_VREF_MASK, ADC_CTL_R_VREF_BIT);
}

ADC_nVREF ADC__enGetVoltageReference(ADC_nMODULE enModule)
{
    return ((ADC_nVREF) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_CTL_OFFSET, ADC_CTL_VREF_MASK, ADC_CTL_R_VREF_BIT));
}



