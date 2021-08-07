/**
 *
 * @file ADC_Sample_FifoStat.h
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
 * @verbatim 26 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_FIFOSTAT_H_
#define XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_FIFOSTAT_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nSEQ_FIFO ADC__enGetSampleFifoStat(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer);
uint32_t ADC__u32GetSampleFifoValues(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, uint32_t* pu32FifoArray);
uint32_t ADC__u32GetSampleValue(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer);

#endif /* XDRIVER_MCU_ADC_DRIVER_Sample_XHEADER_ADC_Sample_FIFOSTAT_H_ */
