/**
 *
 * @file SSI_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_SSI_INTERRUPT_XHEADER_SSI_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_SSI_INTERRUPT_XHEADER_SSI_INTERRUPTVECTOR_H_

#include <xApplication_MCU/SSI/Intrinsics/xHeader/SSI_Defines.h>


SSI_nERROR SSI__enSetInterruptVectorState(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg);
SSI_nERROR SSI__enSetInterruptVectorStateWithPriority(SSI_nMODULE enModuleArg, SSI_nSTATE enStateArg, SSI_nPRIORITY enPriorityArg);

SSI_nERROR SSI__enGetInterruptVectorState(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg);
SSI_nERROR SSI__enGetInterruptVectorStateWithPriority(SSI_nMODULE enModuleArg, SSI_nSTATE* penStateArg, SSI_nPRIORITY* penPriorityArg);

SSI_nERROR SSI__enEnableInterruptVector(SSI_nMODULE enModuleArg);
SSI_nERROR SSI__enEnableInterruptVectorWithPriority(SSI_nMODULE enModuleArg, SSI_nPRIORITY enPriorityArg);

SSI_nERROR SSI__enDisableInterruptVector(SSI_nMODULE enModuleArg);
SSI_nERROR SSI__enDisableInterruptVectorWithPriority(SSI_nMODULE enModuleArg, SSI_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_SSI_INTERRUPT_XHEADER_SSI_INTERRUPTVECTOR_H_ */
