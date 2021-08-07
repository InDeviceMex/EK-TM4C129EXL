/**
 *
 * @file ADC_CompGeneric.h
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_XHEADER_ADC_COMPGENERIC_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_XHEADER_ADC_COMPGENERIC_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetCompGeneric(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RegisterOffset, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBit);
uint32_t ADC__u32GetCompGeneric(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RegisterOffset, uint32_t u32FeatureMask, uint32_t u32FeatureBit);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_XHEADER_ADC_COMPGENERIC_H_ */
