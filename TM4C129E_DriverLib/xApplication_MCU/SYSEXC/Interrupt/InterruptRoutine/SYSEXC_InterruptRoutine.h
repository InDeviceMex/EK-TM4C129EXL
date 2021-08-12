/**
 *
 * @file SYSEXC_InterruptRoutine.h
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

#ifndef XAPPLICATION_MCU_SYSEXC_INTERRUPT_INTERRUPTROUTINE_SYSEXC_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_SYSEXC_INTERRUPT_INTERRUPTROUTINE_SYSEXC_INTERRUPTROUTINE_H_

#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Defines.h>
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Vector.h>

void (*SYSEXC__pvfGetIRQVectorHandler(void))(void);
void (**SYSEXC__pvfGetIRQVectorHandlerPointer(void))(void);

#endif /* XAPPLICATION_MCU_SYSEXC_INTERRUPT_INTERRUPTROUTINE_SYSEXC_INTERRUPTROUTINE_H_ */
