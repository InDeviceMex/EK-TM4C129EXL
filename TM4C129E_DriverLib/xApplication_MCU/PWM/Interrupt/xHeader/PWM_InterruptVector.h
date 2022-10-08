/**
 *
 * @file PWM_InterruptVector.h
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
 * @verbatim 9 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_

#include <xApplication_MCU/PWM/Intrinsics/xHeader/PWM_Defines.h>

PWM_nERROR PWM_Generator__enSetInterruptVectorState(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Generator__enSetInterruptVectorStateWithPriority(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE enStateArg, PWM_nPRIORITY enPriorityArg);
PWM_nERROR PWM_Generator__enGetInterruptVectorState(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_Generator__enGetInterruptVectorStateWithPriority(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nSTATE* penStateArg, PWM_nPRIORITY* penPriorityArg);
PWM_nERROR PWM_Generator__enEnableInterruptVector(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_nERROR PWM_Generator__enEnableInterruptVectorWithPriority(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nPRIORITY enPriorityArg);
PWM_nERROR PWM_Generator__enDisableInterruptVector(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_nERROR PWM_Generator__enDisableInterruptVectorWithPriority(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg, PWM_nPRIORITY enPriorityArg);

PWM_nERROR PWM_Fault__enSetInterruptVectorState(PWM_nMODULE enModuleArg, PWM_nSTATE enStateArg);
PWM_nERROR PWM_Fault__enSetInterruptVectorStateWithPriority(PWM_nMODULE enModuleArg, PWM_nSTATE enStateArg, PWM_nPRIORITY enPriorityArg);
PWM_nERROR PWM_Fault__enGetInterruptVectorState(PWM_nMODULE enModuleArg, PWM_nSTATE* penStateArg);
PWM_nERROR PWM_Fault__enGetInterruptVectorStateWithPriority(PWM_nMODULE enModuleArg, PWM_nSTATE* penStateArg, PWM_nPRIORITY* penPriorityArg);
PWM_nERROR PWM_Fault__enEnableInterruptVector(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_nERROR PWM_Fault__enEnableInterruptVectorWithPriority(PWM_nMODULE enModuleArg, PWM_nPRIORITY enPriorityArg);
PWM_nERROR PWM_Fault__enDisableInterruptVector(PWM_nMODULE enModuleArg, PWM_nGENERATOR enGeneratorArg);
PWM_nERROR PWM_Fault__enDisableInterruptVectorWithPriority(PWM_nMODULE enModuleArg, PWM_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_PWM_INTERRUPT_XHEADER_PWM_INTERRUPTVECTOR_H_ */
