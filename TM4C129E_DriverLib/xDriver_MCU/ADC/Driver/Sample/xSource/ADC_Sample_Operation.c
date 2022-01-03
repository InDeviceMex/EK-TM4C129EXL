/**
 *
 * @file ADC_Sample_Operation.c
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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Operation.h>

#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC_Sample__vSetOperation(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer,
                              ADC_nMUX enMux, ADC_nSEQ_INPUT_OPERATION enSampleOperation)
{
    ADC_Sample__vSetGeneric((uint32_t) enModule, (uint32_t) enSequencer, ADC_SS_OP_OFFSET,
                           (uint32_t) enMux, (uint32_t) enSampleOperation,
                           ADC_SSOP_S0DCOP_MASK, ADC_SSOP_R_S0DCOP_BIT);
}

ADC_nSEQ_INPUT_OPERATION ADC_Sample__enGetOperation(ADC_nMODULE enModule,
                                                   ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    ADC_nSEQ_INPUT_OPERATION enSeqInputOp = ADC_enSEQ_INPUT_OPERATION_SAMPLE;
    enSeqInputOp = (ADC_nSEQ_INPUT_OPERATION) ADC_Sample__u32GetGeneric((uint32_t) enModule,
                                               (uint32_t) enSequencer, ADC_SS_OP_OFFSET,
                                               (uint32_t) enMux, ADC_SSOP_S0DCOP_MASK,
                                               ADC_SSOP_R_S0DCOP_BIT);
    return (enSeqInputOp);
}



