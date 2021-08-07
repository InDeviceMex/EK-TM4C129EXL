/**
 *
 * @file ADC_Comparator_Generic.h
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_GENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_GENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBit);
uint32_t ADC__u32GetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32FeatureMask, uint32_t u32FeatureBit);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_CONTROL_XHEADER_ADC_COMPARATOR_GENERIC_H_ */
