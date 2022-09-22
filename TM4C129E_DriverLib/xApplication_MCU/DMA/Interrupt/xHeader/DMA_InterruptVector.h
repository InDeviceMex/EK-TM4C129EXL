/**
 *
 * @file DMA_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_DMA_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_DMA_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_

#include <xApplication_MCU/DMA/Intrinsics/xHeader/DMA_Defines.h>

DMA_nERROR DMA__enSetInterruptVectorState(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nSTATE enStateArg);
DMA_nERROR DMA__enSetInterruptVectorStateWithPriority(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nSTATE enStateArg, DMA_nPRIORITY enPriorityArg);
DMA_nERROR DMA__enGetInterruptVectorState(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nSTATE* penStateArg);
DMA_nERROR DMA__enGetInterruptVectorStateWithPriority(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nSTATE* penStateArg, DMA_nPRIORITY* penPriorityArg);
DMA_nERROR DMA__enEnableInterruptVector(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg);
DMA_nERROR DMA__enEnableInterruptVectorWithPriority(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nPRIORITY enPriorityArg);
DMA_nERROR DMA__enDisableInterruptVector(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg);
DMA_nERROR DMA__enDisableInterruptVectorWithPriority(DMA_nMODULE enModuleArg, DMA_nVECTOR enInterruptArg, DMA_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_DMA_INTERRUPT_XHEADER_DMA_INTERRUPTVECTOR_H_ */
