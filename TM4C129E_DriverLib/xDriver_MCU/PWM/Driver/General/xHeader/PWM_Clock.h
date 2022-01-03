/**
 *
 * @file PWM_Clock.h
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_CLOCK_H_
#define XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_CLOCK_H_

#include <xDriver_MCU/PWM/Peripheral/xHeader/PWM_Enum.h>

void PWM__vSetClockSource(PWM_nMODULE enModule, PWM_nCLOCK enClock);
PWM_nCLOCK PWM__enGetClockSource(PWM_nMODULE enModule);

void PWM__vSetClockDivisor(PWM_nMODULE enModule, PWM_nCLOCK_DIV enDivisorArg);
void PWM__vSetClockDivisorNum(PWM_nMODULE enModule, uint32_t u32DivisorArg);

PWM_nCLOCK_DIV PWM__enGetClockDivisor(PWM_nMODULE enModule);
uint32_t PWM__u32GetClockDivisor(PWM_nMODULE enModule);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_CLOCK_H_ */
