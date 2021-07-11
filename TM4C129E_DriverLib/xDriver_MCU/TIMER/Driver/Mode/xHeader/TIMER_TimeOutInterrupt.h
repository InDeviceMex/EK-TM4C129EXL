/**
 *
 * @file TIMER_TimeOutInterrupt.h
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

#ifndef XDRIVER_MCU_TIMER_DRIVER_MODE_XHEADER_TIMER_TIMEOUTINTERRUPT_H_
#define XDRIVER_MCU_TIMER_DRIVER_MODE_XHEADER_TIMER_TIMEOUTINTERRUPT_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vSetTimeOutIntFunctionality(TIMER_nMODULE enModule, TIMER_nTIMEOUT_INT enTimeoutFuncionArg);
TIMER_nTIMEOUT_INT TIMER__enGetTimeOutIntFunctionality(TIMER_nMODULE enModule);

#endif /* XDRIVER_MCU_TIMER_DRIVER_MODE_XHEADER_TIMER_TIMEOUTINTERRUPT_H_ */
