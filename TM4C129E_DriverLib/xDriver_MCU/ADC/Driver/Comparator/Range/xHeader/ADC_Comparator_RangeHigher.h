/**
 *
 * @file ADC_Comparator_RangeHigher.h
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
#ifndef XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEHIGHER_H_
#define XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEHIGHER_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Comparator__enSetRangeHighByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                            UBase_t uxRangeHighArg);
ADC_nERROR ADC_Comparator__enSetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t uxRangeHighArg);
ADC_nERROR ADC_Comparator__enGetRangeHighByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                  UBase_t* puxRangeHighArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_COMPARATOR_RANGE_XHEADER_ADC_COMPARATOR_RANGEHIGHER_H_ */
