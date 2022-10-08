/**
 *
 * @file TIMER_EventCommon.h
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

#ifndef XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_EVENTCOMMON_H_
#define XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_EVENTCOMMON_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam,
                      UBase_t uxOffsetReg);
TIMER_nEVENT TIMER__enGetEvent(TIMER_nMODULE enModule, TIMER_nEVENT enEventParam,
                               UBase_t uxOffsetReg);

#endif /* XDRIVER_MCU_TIMER_DRIVER_EVENT_XHEADER_TIMER_EVENTCOMMON_H_ */
