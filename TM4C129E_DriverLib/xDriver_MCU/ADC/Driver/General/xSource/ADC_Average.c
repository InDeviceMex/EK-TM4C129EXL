/**
 *
 * @file ADC_Average.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Average.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetAverage(ADC_nMODULE enModule, ADC_nAVERAGE enAverage)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_SAC_OFFSET, (uint32_t) enAverage, ADC_SAC_AVG_MASK, ADC_SAC_R_AVG_BIT);
}

ADC_nAVERAGE ADC__enGetAverage(ADC_nMODULE enModule)
{
    return (ADC_nAVERAGE) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_SAC_OFFSET, ADC_SAC_AVG_MASK, ADC_SAC_R_AVG_BIT);
}
