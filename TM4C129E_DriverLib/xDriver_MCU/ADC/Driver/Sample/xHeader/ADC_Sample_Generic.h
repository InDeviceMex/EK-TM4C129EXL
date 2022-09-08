/**
 *
 * @file ADC_Sample_Generic.h
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_GENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_SAMPLE_XHEADER_ADC_SAMPLE_GENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Sample__enSetGeneric(ADC_nMODULE enModuleArg, ADC_nSEQUENCER  enSequencerArg,
                             ADC_nSAMPLE enSampleArg, ADC_Register_t* pstRegisterDataArg);

ADC_nERROR ADC_Sample__enGetGeneric(ADC_nMODULE enModuleArg, ADC_nSEQUENCER  enSequencerArg,
                                   ADC_nSAMPLE enSampleArg, ADC_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_GENERIC_H_ */
