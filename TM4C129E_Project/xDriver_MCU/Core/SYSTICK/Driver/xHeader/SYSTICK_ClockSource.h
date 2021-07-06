/**
 *
 * @file SYSTICK_ClockSource.h
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
 * @verbatim 18 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_CLOCKSOURCE_H_
#define XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_CLOCKSOURCE_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

void SYSTICK__vSetClockSource(SYSTICK_nCLKSOURCE enClockSource);
SYSTICK_nCLKSOURCE SYSTICK__enGetClockSource(void);

#endif /* XDRIVER_MCU_CORE_SYSTICK_DRIVER_XHEADER_SYSTICK_CLOCKSOURCE_H_ */
