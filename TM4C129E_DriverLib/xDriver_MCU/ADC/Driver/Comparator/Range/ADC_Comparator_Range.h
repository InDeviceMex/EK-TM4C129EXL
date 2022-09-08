/**
 *
 * @file ADC_Comparator_Range.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_ADC_COMPARATOR_RANGE_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_ADC_COMPARATOR_RANGE_H_

#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeLower.h>

ADC_nERROR ADC_Comparator__enSetRangeByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                            uint32_t u32RangeLowArg, uint32_t u32RangeHighArg);
ADC_nERROR ADC_Comparator__enSetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              uint32_t u32RangeLowArg, uint32_t u32RangeHighArg);
ADC_nERROR ADC_Comparator__enGetRangeByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                              uint32_t* pu32RangeLowArg, uint32_t* pu32RangeHighArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_ADC_COMPARATOR_RANGE_H_ */
