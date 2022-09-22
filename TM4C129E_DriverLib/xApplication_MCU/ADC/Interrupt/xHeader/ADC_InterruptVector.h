/**
 *
 * @file ADC_InterruptVector.h
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
 * @verbatim 10 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_ADC_INTERRUPT_XHEADER_ADC_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_ADC_INTERRUPT_XHEADER_ADC_INTERRUPTVECTOR_H_

#include <xApplication_MCU/ADC/Intrinsics/xHeader/ADC_Defines.h>

ADC_nERROR ADC__enSetInterruptVectorState(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSTATE enStateArg);
ADC_nERROR ADC__enSetInterruptVectorStateWithPriority(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSTATE enStateArg, ADC_nPRIORITY enPriorityArg);

ADC_nERROR ADC__enGetInterruptVectorState(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSTATE* penStateArg);
ADC_nERROR ADC__enGetInterruptVectorStateWithPriority(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nSTATE* penStateArg, ADC_nPRIORITY* penPriorityArg);

ADC_nERROR ADC__enEnableInterruptVector(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);
ADC_nERROR ADC__enEnableInterruptVectorWithPriority(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nPRIORITY enPriorityArg);

ADC_nERROR ADC__enDisableInterruptVector(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg);
ADC_nERROR ADC__enDisableInterruptVectorWithPriority(ADC_nMODULE enModuleArg, ADC_nSEQUENCER enSequencerArg, ADC_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_ADC_INTERRUPT_XHEADER_ADC_INTERRUPTVECTOR_H_ */
