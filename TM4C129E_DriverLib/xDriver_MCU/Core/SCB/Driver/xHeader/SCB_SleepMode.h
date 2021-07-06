/**
 *
 * @file SCB_SleepMode.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_SLEEPMODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_SLEEPMODE_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

void SCB__vSetSleepMode(SCB_nSleepDeep enSleepMode);
void SCB__vDeepSleepMode(void);
SCB_nSleepDeep SCB__enGetSleepMode(void);

void SCB__vSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode);
SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_SLEEPMODE_H_ */
