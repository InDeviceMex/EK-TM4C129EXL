/**
 *
 * @file SYSTICK_InterruptRoutine.h
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTROUTINE_SYSTICK_INTERRUPTROUTINE_H_
#define XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTROUTINE_SYSTICK_INTERRUPTROUTINE_H_

#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRoutine/xHeader/SYSTICK_InterruptRoutine_Vector.h>

void (*SYSTICK__pvfGetIRQVectorHandler(void))(void);
void (**SYSTICK__pvfGetIRQVectorHandlerPointer(void))(void);

#endif /* XAPPLICATION_MCU_CORE_SYSTICK_INTERRUPT_INTERRUPTROUTINE_SYSTICK_INTERRUPTROUTINE_H_ */
