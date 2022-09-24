/**
 *
 * @file GPIO_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_GPIO_INTERRUPT_XHEADER_GPIO_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_GPIO_INTERRUPT_XHEADER_GPIO_INTERRUPTVECTOR_H_

#include <xApplication_MCU/GPIO/Intrinsics/xHeader/GPIO_Defines.h>

GPIO_nERROR GPIO__enSetInterruptVectorState(GPIO_nPORT enPortArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO__enSetInterruptVectorStateWithPriority(GPIO_nPORT enPortArg, GPIO_nSTATE enStateArg, GPIO_nPRIORITY enPriorityArg);
GPIO_nERROR GPIO__enGetInterruptVectorState(GPIO_nPORT enPortArg, GPIO_nSTATE* penStateArg);
GPIO_nERROR GPIO__enGetInterruptVectorStateWithPriority(GPIO_nPORT enPortArg, GPIO_nSTATE* penStateArg, GPIO_nPRIORITY* penPriorityArg);
GPIO_nERROR GPIO__enEnableInterruptVector(GPIO_nPORT enPortArg);
GPIO_nERROR GPIO__enEnableInterruptVectorWithPriority(GPIO_nPORT enPortArg, GPIO_nPRIORITY enPriorityArg);
GPIO_nERROR GPIO__enDisableInterruptVector(GPIO_nPORT enPortArg);
GPIO_nERROR GPIO__enDisableInterruptVectorWithPriority(GPIO_nPORT enPortArg, GPIO_nPRIORITY enPriorityArg);

GPIO_nERROR GPIO_PQ__enSetInterruptVectorState(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE enStateArg);
GPIO_nERROR GPIO_PQ__enSetInterruptVectorStateWithPriority(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE enStateArg, GPIO_nPRIORITY enPriorityArg);
GPIO_nERROR GPIO_PQ__enGetInterruptVectorState(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE* penStateArg);
GPIO_nERROR GPIO_PQ__enGetInterruptVectorStateWithPriority(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE* penStateArg, GPIO_nPRIORITY* penPriorityArg);
GPIO_nERROR GPIO_PQ__enEnableInterruptVector(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO_PQ__enEnableInterruptVectorWithPriority(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nPRIORITY enPriorityArg);
GPIO_nERROR GPIO_PQ__enDisableInterruptVector(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg);
GPIO_nERROR GPIO_PQ__enDisableInterruptVectorWithPriority(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_GPIO_INTERRUPT_XHEADER_GPIO_INTERRUPTVECTOR_H_ */
