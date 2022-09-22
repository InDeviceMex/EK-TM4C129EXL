/**
 *
 * @file FLASH_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_

#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Defines.h>

FLASH_nERROR FLASH__enSetInterruptVectorState(FLASH_nMODULE enModuleArg, FLASH_nSTATE enStateArg);
FLASH_nERROR FLASH__enSetInterruptVectorStateWithPriority(FLASH_nMODULE enModuleArg, FLASH_nSTATE enStateArg, FLASH_nPRIORITY enPriorityArg);
FLASH_nERROR FLASH__enGetInterruptVectorState(FLASH_nMODULE enModuleArg, FLASH_nSTATE* penStateArg);
FLASH_nERROR FLASH__enGetInterruptVectorStateWithPriority(FLASH_nMODULE enModuleArg, FLASH_nSTATE* penStateArg, FLASH_nPRIORITY* penPriorityArg);
FLASH_nERROR FLASH__enEnableInterruptVector(FLASH_nMODULE enModuleArg);
FLASH_nERROR FLASH__enEnableInterruptVectorWithPriority(FLASH_nMODULE enModuleArg, FLASH_nPRIORITY enPriorityArg);
FLASH_nERROR FLASH__enDisableInterruptVector(FLASH_nMODULE enModuleArg);
FLASH_nERROR FLASH__enDisableInterruptVectorWithPriority(FLASH_nMODULE enModuleArg, FLASH_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_FLASH_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_ */
