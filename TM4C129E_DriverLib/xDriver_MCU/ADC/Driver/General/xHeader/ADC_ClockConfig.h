/**
 *
 * @file ADC_ClockConfig.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CLOCKCONFIG_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CLOCKCONFIG_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC__enSetClockSource(ADC_nMODULE enModuleArg, ADC_nCLOCK enClockSourceArg);
ADC_nERROR ADC__enGetClockSource(ADC_nMODULE enModuleArg, ADC_nCLOCK* penClockSourceArg);

ADC_nERROR ADC__enSetVCODivisor(ADC_nMODULE enModuleArg, uint32_t u32VCODivisorArg);
ADC_nERROR ADC__enGetVCODivisor(ADC_nMODULE enModuleArg, uint32_t* pu32VCODivisorArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_CLOCKCONFIG_H_ */
