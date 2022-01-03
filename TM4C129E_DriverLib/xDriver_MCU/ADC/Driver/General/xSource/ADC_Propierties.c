/**
 *
 * @file ADC_Propierties.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Propierties.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nSEQ_INPUT ADC__enGetMaxInputNumber(ADC_nMODULE enModule)
{
    ADC_nSEQ_INPUT enSeqInput = ADC_enSEQ_INPUT_0;
    enSeqInput = (ADC_nSEQ_INPUT) (ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_PP_OFFSET,
                                                     ADC_PP_CH_MASK, ADC_PP_R_CH_BIT) - 1UL);
    return (enSeqInput);
}

ADC_nCOMPARATOR ADC_Comparator__enGetMaxNumber(ADC_nMODULE enModule)
{
    ADC_nCOMPARATOR enComparatorReg = ADC_enCOMPARATOR_0;
    enComparatorReg = (ADC_nCOMPARATOR) (ADC__u32GetGeneralGeneric((uint32_t) enModule,
                                   ADC_PP_OFFSET, ADC_PP_DC_MASK, ADC_PP_R_DC_BIT) - 1UL);
    return (enComparatorReg);
}
