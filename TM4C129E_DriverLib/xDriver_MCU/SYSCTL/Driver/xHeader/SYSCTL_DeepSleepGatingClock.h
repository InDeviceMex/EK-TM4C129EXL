/**
 *
 * @file SYSCTL_DeepSleepGatingClock.h
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
 * @verbatim 28 oct. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 oct. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_DEEPSLEEPGATINGCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_DEEPSLEEPGATINGCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetPIOSCStateOnDeepSleep(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enGetPIOSCStateOnDeepSleep(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg);

SYSCTL_nERROR SYSCTL__enAllowDisableMOSCOnFailure(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN enStateArg);
SYSCTL_nERROR SYSCTL__enIsAllowedDisableMOSCOnFailure(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg);

SYSCTL_nERROR SYSCTL__enSetDeepSleepOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC enSourceArg);
SYSCTL_nERROR SYSCTL__enGetDeepSleepOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC* penSourceArg);

SYSCTL_nERROR SYSCTL__enSetDeepSleepOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg);
SYSCTL_nERROR SYSCTL__enGetDeepSleepOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_DEEPSLEEPGATINGCLOCK_H_ */
