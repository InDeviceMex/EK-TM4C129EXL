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

PWM_nERROR PWM__enSetClockSource(PWM_nMODULE enModuleArg, PWM_nCLOCK enClockArg);
PWM_nERROR PWM__enGetClockSource(PWM_nMODULE enModuleArg, PWM_nCLOCK* penClockArg);

PWM_nERROR PWM__enSetClockDivisor(PWM_nMODULE enModuleArg, PWM_nCLOCK_DIV enDivisorArg);
PWM_nERROR PWM__enGetClockDivisor(PWM_nMODULE enModuleArg, PWM_nCLOCK_DIV* penDivisorArg);

PWM_nERROR PWM__enSetClockDivisorInteger(PWM_nMODULE enModuleArg, UBase_t uxDivisorArg);
PWM_nERROR PWM__enGetClockDivisorInteger(PWM_nMODULE enModuleArg, UBase_t* puxDivisorArg);

#endif /* XDRIVER_MCU_PWM_DRIVER_GENERAL_XHEADER_PWM_CLOCK_H_ */
