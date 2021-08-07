/**
 *
 * @file ADC_Comparator_GenericRange.h
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
#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_GENERICRANGE_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_GENERICRANGE_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

void ADC__vSetCompGenericRange(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32Range, uint32_t u32RangeMask, uint32_t u32RangeBit);
uint32_t ADC__u32GetCompGenericRange(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RangeMask, uint32_t u32RangeBit);





#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_GENERICRANGE_H_ */
