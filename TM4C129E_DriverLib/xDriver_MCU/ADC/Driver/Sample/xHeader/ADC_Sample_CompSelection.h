/**
 *
 * @file ADC_Sample_CompSelection.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_COMPSELECTION_H_
#define XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_COMPSELECTION_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetSampleCompSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_nCOMPARATOR enSampleComparator);
ADC_nCOMPARATOR ADC__enGetSampleCompSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_COMPSELECTION_H_ */
