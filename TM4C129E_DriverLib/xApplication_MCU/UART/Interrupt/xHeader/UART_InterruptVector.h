/**
 *
 * @file UART_InterruptVector.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_UART_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_UART_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Defines.h>

UART_nERROR UART__enSetInterruptVectorState(UART_nMODULE enModuleArg, UART_nSTATE enStateArg);
UART_nERROR UART__enSetInterruptVectorStateWithPriority(UART_nMODULE enModuleArg, UART_nSTATE enStateArg, UART_nPRIORITY enPriorityArg);

UART_nERROR UART__enGetInterruptVectorState(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg);
UART_nERROR UART__enGetInterruptVectorStateWithPriority(UART_nMODULE enModuleArg, UART_nSTATE* penStateArg, UART_nPRIORITY* penPriorityArg);

UART_nERROR UART__enEnableInterruptVector(UART_nMODULE enModuleArg);
UART_nERROR UART__enEnableInterruptVectorWithPriority(UART_nMODULE enModuleArg, UART_nPRIORITY enPriorityArg);

UART_nERROR UART__enDisableInterruptVector(UART_nMODULE enModuleArg);
UART_nERROR UART__enDisableInterruptVectorWithPriority(UART_nMODULE enModuleArg, UART_nPRIORITY enPriorityArg);


#endif /* XAPPLICATION_MCU_UART_INTERRUPT_XHEADER_UART_INTERRUPTVECTOR_H_ */
