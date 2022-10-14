/**
 *
 * @file QEI_InterruptVector.h
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Defines.h>

QEI_nERROR QEI__enSetInterruptVectorState(QEI_nMODULE enModuleArg, QEI_nSTATE enStateArg);
QEI_nERROR QEI__enSetInterruptVectorStateWithPriority(QEI_nMODULE enModuleArg, QEI_nSTATE enStateArg, QEI_nPRIORITY enPriorityArg);

QEI_nERROR QEI__enGetInterruptVectorState(QEI_nMODULE enModuleArg, QEI_nSTATE* penStateArg);
QEI_nERROR QEI__enGetInterruptVectorStateWithPriority(QEI_nMODULE enModuleArg, QEI_nSTATE* penStateArg, QEI_nPRIORITY* penPriorityArg);

QEI_nERROR QEI__enEnableInterruptVector(QEI_nMODULE enModuleArg);
QEI_nERROR QEI__enEnableInterruptVectorWithPriority(QEI_nMODULE enModuleArg, QEI_nPRIORITY enPriorityArg);

QEI_nERROR QEI__enDisableInterruptVector(QEI_nMODULE enModuleArg);
QEI_nERROR QEI__enDisableInterruptVectorWithPriority(QEI_nMODULE enModuleArg, QEI_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_QEI_INTERRUPT_XHEADER_QEI_INTERRUPTVECTOR_H_ */
