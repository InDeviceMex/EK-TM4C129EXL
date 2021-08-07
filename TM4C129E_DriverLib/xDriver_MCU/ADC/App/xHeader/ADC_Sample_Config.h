/**
 *
 * @file ADC_Sample_Config.h
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
 * @verbatim 24 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_APP_XHEADER_ADC_Sample_CONFIG_H_
#define XDRIVER_MCU_ADC_APP_XHEADER_ADC_Sample_CONFIG_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nSTATUS ADC__enSetSampleConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, const ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig);
ADC_nSTATUS ADC__enSetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, const ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig);
ADC_nSTATUS ADC__enGetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_SAMPLE_CONFIG_Typedef* pstSampleConfig);

#endif /* XDRIVER_MCU_ADC_APP_XHEADER_ADC_Sample_CONFIG_H_ */
