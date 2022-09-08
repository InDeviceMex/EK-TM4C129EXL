/**
 *
 * @file ADC_InterruptSource_SeqComp.h
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

#ifndef XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_
#define XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

ADC_nERROR ADC_Comparator__enSetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                           ADC_nSTATE enStateArg);
ADC_nERROR ADC_Comparator__enSetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                             ADC_nSTATE enStateArg);

ADC_nERROR ADC_Comparator__enGetInterruptSourceStateByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                           ADC_nCOMPMASK* penComparatorGetArg);
ADC_nERROR ADC_Comparator__enGetInterruptSourceStateByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                             ADC_nSTATE* penStateArg);

ADC_nERROR ADC_Comparator__enEnableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg);
ADC_nERROR ADC_Comparator__enEnableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg);
ADC_nERROR ADC_Comparator__enDisableInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg);
ADC_nERROR ADC_Comparator__enDisableInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg);

ADC_nERROR ADC_Comparator__enClearInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg);
ADC_nERROR ADC_Comparator__enClearInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg);

ADC_nERROR ADC_Comparator__enStatusInterruptSourceByMask(ADC_nMODULE enModuleArg, ADC_nCOMPMASK enComparatorMaskArg,
                                                         ADC_nCOMPMASK* penComparatorGetArg);
ADC_nERROR ADC_Comparator__enStatusInterruptSourceByNumber(ADC_nMODULE enModuleArg, ADC_nCOMPARATOR enComparatorArg,
                                                           ADC_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_ADC_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ADC_INTERRUPTSOURCE_SEQCOMP_H_ */
