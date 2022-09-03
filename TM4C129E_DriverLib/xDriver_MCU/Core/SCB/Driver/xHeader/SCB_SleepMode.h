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

SCB_nERROR SCB__enSetSleepMode(SCB_nMODULE enModuleArg, SCB_nSLEEPMODE enSleepModeArg);
SCB_nERROR SCB__enGetSleepMode(SCB_nMODULE enModuleArg, SCB_nSLEEPMODE* penSleepModeArg);
SCB_nERROR SCB__enEnterDeepSleep(SCB_nMODULE enModuleArg);
SCB_nERROR SCB__enEnterSleep(SCB_nMODULE enModuleArg);

SCB_nERROR SCB__enSetSleepOnExit(SCB_nMODULE enModuleArg, SCB_nSLEEPONEXIT enSleepOnExitArg);
SCB_nERROR SCB__enGetSleepOnExit(SCB_nMODULE enModuleArg, SCB_nSLEEPONEXIT* enSleepOnExitArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_SLEEPMODE_H_ */
