/**
 *
 * @file ADC_Sample_Config.h
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_ADC_XHEADER_ADC_SAMPLE_CONFIG_H_
#define XAPPLICATION_MCU_ADC_XHEADER_ADC_SAMPLE_CONFIG_H_

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

ADC_nERROR ADC_Sample__enSetConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nSAMPLE enMux, const ADC_SAMPLE_CONFIG_t* pstSampleConfig);
ADC_nERROR ADC_Sample__enSetConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nSAMPLE enMux, const ADC_SAMPLE_CONFIG_t* pstSampleConfig);
ADC_nERROR ADC_Sample__enGetConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nSAMPLE enMux, ADC_SAMPLE_CONFIG_t* pstSampleConfig);

#endif /* XAPPLICATION_MCU_ADC_XHEADER_ADC_SAMPLE_CONFIG_H_ */
