/**
 *
 * @file TIMER_MatchEventInterrupt.h
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_MATCHEVENTINTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_MATCHEVENTINTERRUPT_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetMatchEventInterrupt(TIMER_nMODULE enModule, TIMER_nEVENT_INT enEventInterruptParam);
TIMER_nEVENT_INT TIMER__enGetMatchEventInterrupt(TIMER_nMODULE enModule);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_MODE_TIMER_MATCHEVENTINTERRUPT_H_ */
