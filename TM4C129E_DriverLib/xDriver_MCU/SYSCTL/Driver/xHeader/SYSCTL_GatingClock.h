/*
 * SYSCTL_GatingClock.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enUpdateMemoryTiming(SYSCTL_nMODULE enModuleArg);

SYSCTL_nERROR SYSCTL__enUpdatePLLValues(SYSCTL_nMODULE enModuleArg);

SYSCTL_nERROR SYSCTL__enAllowChangeToSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN enStateArg);
SYSCTL_nERROR SYSCTL__enIsAllowedChangeToSleepMode(SYSCTL_nMODULE enModuleArg, SYSCTL_nBOOLEAN* penStateArg);

SYSCTL_nERROR SYSCTL__enSetSystemClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nSYSCLK_SRC enSourceArg);
SYSCTL_nERROR SYSCTL__enGetSystemClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nSYSCLK_SRC* penSourceArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC enSourceArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC* penSourceArg);

SYSCTL_nERROR SYSCTL__enSetOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC enSourceArg);
SYSCTL_nERROR SYSCTL__enGetOscillatorClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOSCCLK_SRC* penSourceArg);

SYSCTL_nERROR SYSCTL__enSetOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg);
SYSCTL_nERROR SYSCTL__enGetOscillatorClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg);

SYSCTL_nERROR SYSCTL__enSetPLLClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg);
SYSCTL_nERROR SYSCTL__enGetPLLClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg);


#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_ */
