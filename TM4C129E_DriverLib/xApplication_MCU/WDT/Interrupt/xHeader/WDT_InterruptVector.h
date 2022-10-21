/**
 *
 * @file WDT_InterruptVector.h
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_

#include <xApplication_MCU/WDT/Intrinsics/xHeader/WDT_Defines.h>

WDT_nERROR WDT__enSetInterruptVectorState(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg);
WDT_nERROR WDT__enSetInterruptVectorStateWithPriority(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg, WDT_nPRIORITY enPriorityArg);

WDT_nERROR WDT__enGetInterruptVectorState(WDT_nMODULE enModuleArg, WDT_nSTATE* penStateArg);
WDT_nERROR WDT__enGetInterruptVectorStateWithPriority(WDT_nMODULE enModuleArg, WDT_nSTATE* penStateArg, WDT_nPRIORITY* penPriorityArg);

WDT_nERROR WDT__enEnableInterruptVector(WDT_nMODULE enModuleArg);
WDT_nERROR WDT__enEnableInterruptVectorWithPriority(WDT_nMODULE enModuleArg, WDT_nPRIORITY enPriorityArg);

WDT_nERROR WDT__enDisableInterruptVector(WDT_nMODULE enModuleArg);
WDT_nERROR WDT__enDisableInterruptVectorWithPriority(WDT_nMODULE enModuleArg, WDT_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_WDT_INTERRUPT_XHEADER_WDT_INTERRUPTVECTOR_H_ */
