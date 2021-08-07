/**
 *
 * @file ADC_GeneralGeneric.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GENERALGENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GENERALGENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
uint32_t ADC__u32GetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_ADC_DRIVER_GENERAL_XHEADER_ADC_GENERALGENERIC_H_ */
