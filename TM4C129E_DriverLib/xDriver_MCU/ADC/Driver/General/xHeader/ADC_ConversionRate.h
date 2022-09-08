/**
 *
 * @file ADC_ConversionRate.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CONVERSIONRATE_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CONVERSIONRATE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC__enSetConversionRate(ADC_nMODULE enModuleArg, ADC_nCONVERSION_RATE enConversionRateArg);
ADC_nERROR ADC__enGetConversionRate(ADC_nMODULE enModuleArg, ADC_nCONVERSION_RATE* penConversionRateArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CONVERSIONRATE_H_ */
