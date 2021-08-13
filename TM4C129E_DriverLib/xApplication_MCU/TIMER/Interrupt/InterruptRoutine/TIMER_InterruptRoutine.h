/**
 *
 * @file TIMER_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_TIMER_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_TIMER_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Defines.h>
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/TIMER_InterruptRoutine_Vector_ModuleA_16.h>
#include <xApplication_MCU/TIMER/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/TIMER_InterruptRoutine_Vector_ModuleB_16.h>

void (*TIMER__pvfGetIRQVectorHandler(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void);
void (**TIMER__pvfGetIRQVectorHandlerPointer(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void);

#endif /* XAPPLICATION_MCU_TIMER_INTERRUPT_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_ */
