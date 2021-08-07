/**
 *
 * @file ADC_ConversionRate.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_ConversionRate.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetConversionRate(ADC_nMODULE enModule, ADC_nCONVERSION_RATE enConversionRateArg)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_PC_OFFSET, (uint32_t) enConversionRateArg, ADC_PC_MCR_MASK, ADC_PC_R_MCR_BIT);
}

ADC_nCONVERSION_RATE ADC__enGetConversionRate(ADC_nMODULE enModule)
{
    return (ADC_nCONVERSION_RATE) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_PC_OFFSET, ADC_PC_MCR_MASK, ADC_PC_R_MCR_BIT);
}




