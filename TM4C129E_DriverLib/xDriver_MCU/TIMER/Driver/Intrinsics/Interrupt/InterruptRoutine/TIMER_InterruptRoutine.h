/**
 *
 * @file TIMER_InterruptRoutine.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/TIMER_InterruptRoutine_Vector_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/TIMER_InterruptRoutine_Vector_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>

void (*TIMER__pvfGetIRQVectorHandler(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void);
void (**TIMER__pvfGetIRQVectorHandlerPointer(TIMER_nSUBMODULE enTIMERSubmodule, TIMER_nMODULE_NUM enTIMERModuleNumber))(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_ */
