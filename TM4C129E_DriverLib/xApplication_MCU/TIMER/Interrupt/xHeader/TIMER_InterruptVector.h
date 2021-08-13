/**
 *
 * @file TIMER_InterruptVector.h
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

#ifndef XAPPLICATION_MCU_TIMER_INTERRUPT_XHEADER_TIMER_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_TIMER_INTERRUPT_XHEADER_TIMER_INTERRUPTVECTOR_H_

#include <xApplication_MCU/TIMER/Intrinsics/xHeader/TIMER_Defines.h>

void TIMER__vEnInterruptVector(TIMER_nMODULE enModule, TIMER_nPRIORITY enTimerPriority);
void TIMER__vDisInterruptVector(TIMER_nMODULE enModule);

#endif /* XAPPLICATION_MCU_TIMER_INTERRUPT_XHEADER_TIMER_INTERRUPTVECTOR_H_ */
