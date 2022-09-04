/**
 *
 * @file ADC_Sample_Differential.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_DIFFERENTIAL_H_
#define XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_DIFFERENTIAL_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC_Sample__vSetDifferential(ADC_nMODULE enModule,
                                 ADC_nSEQUENCER enSequencer,
                                 ADC_nMUX enMux,
                                 ADC_nSTATE enSampleDifferential);
ADC_nSTATE ADC_Sample__enGetDifferential(ADC_nMODULE enModule,
                                                 ADC_nSEQUENCER enSequencer,
                                                 ADC_nMUX enMux);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_DIFFERENTIAL_H_ */
