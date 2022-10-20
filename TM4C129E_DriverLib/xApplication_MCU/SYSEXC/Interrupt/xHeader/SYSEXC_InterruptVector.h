/**
 *
 * @file SYSEXC_InterruptVector.h
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_SYSEXC_INTERRUPT_XHEADER_SYSEXC_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_SYSEXC_INTERRUPT_XHEADER_SYSEXC_INTERRUPTVECTOR_H_

#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Defines.h>

SYSEXC_nERROR SYSEXC__enSetInterruptVectorState(SYSEXC_nMODULE enModuleArg, SYSEXC_nSTATE enStateArg);
SYSEXC_nERROR SYSEXC__enSetInterruptVectorStateWithPriority(SYSEXC_nMODULE enModuleArg, SYSEXC_nSTATE enStateArg, SYSEXC_nPRIORITY enPriorityArg);

SYSEXC_nERROR SYSEXC__enGetInterruptVectorState(SYSEXC_nMODULE enModuleArg, SYSEXC_nSTATE* penStateArg);
SYSEXC_nERROR SYSEXC__enGetInterruptVectorStateWithPriority(SYSEXC_nMODULE enModuleArg, SYSEXC_nSTATE* penStateArg, SYSEXC_nPRIORITY* penPriorityArg);

SYSEXC_nERROR SYSEXC__enEnableInterruptVector(SYSEXC_nMODULE enModuleArg);
SYSEXC_nERROR SYSEXC__enEnableInterruptVectorWithPriority(SYSEXC_nMODULE enModuleArg, SYSEXC_nPRIORITY enPriorityArg);

SYSEXC_nERROR SYSEXC__enDisableInterruptVector(SYSEXC_nMODULE enModuleArg);
SYSEXC_nERROR SYSEXC__enDisableInterruptVectorWithPriority(SYSEXC_nMODULE enModuleArg, SYSEXC_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_SYSEXC_INTERRUPT_XHEADER_SYSEXC_INTERRUPTVECTOR_H_ */
