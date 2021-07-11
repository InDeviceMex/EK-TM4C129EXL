/**
 *
 * @file TIMER_DMAEvent.h
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
 * @verbatim 11 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_DMAEVENT_H_
#define XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_DMAEVENT_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetDMAEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam);
TIMER_nEVENT TIMER__enGetDMAEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam);

#endif /* XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_DMAEVENT_H_ */
