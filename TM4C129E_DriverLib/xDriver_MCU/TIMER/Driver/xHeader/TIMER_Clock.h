/**
 *
 * @file TIMER_Clock.h
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

#ifndef XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_CLOCK_H_
#define XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_CLOCK_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetClockSource(TIMER_nMODULE enModule, TIMER_nCLOCK enClockSourceArg);
TIMER_nCLOCK TIMER__enGetClockSource(TIMER_nMODULE enModule);

#endif /* XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_CLOCK_H_ */
