/**
 *
 * @file ADC_Average.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_AVERAGE_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_AVERAGE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC__enSetAverageSampling(ADC_nMODULE enModuleArg, ADC_nAVERAGE enAverageArg);
ADC_nERROR ADC__enGetAverageSampling(ADC_nMODULE enModuleArg, ADC_nAVERAGE* penAverageArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_AVERAGE_H_ */
