/**
 *
 * @file TIMER_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void (*TIMER__pvfGetIRQSourceHandler(TIMER_nSUBMODULE enTIMERSubmodule,
                                     TIMER_nMODULE_NUM enTIMERModuleNumber,
                                     TIMER_nINTERRUPT enTIMERInterruptNum))(void);
void (**TIMER__pvfGetIRQSourceHandlerPointer(TIMER_nSUBMODULE enTIMERSubmodule,
                                             TIMER_nMODULE_NUM enTIMERModuleNumber,
                                             TIMER_nINTERRUPT enTIMERInterruptNum))(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_ */
