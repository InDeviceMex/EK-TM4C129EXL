/**
 *
 * @file SYSTICK_InterruptVector.h
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_

#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

SYSTICK_nERROR SYSTICK__enSetInterruptVectorState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg);
SYSTICK_nERROR SYSTICK__enSetInterruptVectorStateWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE enStateArg, SYSTICK_nPRIORITY enPriorityArg);
SYSTICK_nERROR SYSTICK__enGetInterruptVectorState(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg);
SYSTICK_nERROR SYSTICK__enGetInterruptVectorStateWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nSTATE* penStateArg, SYSTICK_nSTATUS* penStatusArg, SYSTICK_nPRIORITY* penPriorityArg);
SYSTICK_nERROR SYSTICK__enEnableInterruptVector(SYSTICK_nMODULE enModuleArg);
SYSTICK_nERROR SYSTICK__enEnableInterruptVectorWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nPRIORITY enPriorityArg);
SYSTICK_nERROR SYSTICK__enDisableInterruptVector(SYSTICK_nMODULE enModuleArg);
SYSTICK_nERROR SYSTICK__enDisableInterruptVectorWithPriority(SYSTICK_nMODULE enModuleArg, SYSTICK_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_XHEADER_SYSTICK_INTERRUPTVECTOR_H_ */
