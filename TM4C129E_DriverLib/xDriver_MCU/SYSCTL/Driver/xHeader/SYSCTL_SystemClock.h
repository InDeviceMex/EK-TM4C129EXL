/*
 * SYSCTL_SystemClock.h
 *
 *  Created on: 15 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enGetPIOSCFrequency(UBase_t* puxFrequencyArg);
SYSCTL_nERROR SYSCTL__enGetMOSCFrequency(UBase_t* puxFrequencyArg);
SYSCTL_nERROR SYSCTL__enGetLFIOSCFrequency(UBase_t* puxFrequencyArg);

SYSCTL_nERROR SYSCTL__enGetOutputClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg);
SYSCTL_nERROR SYSCTL__enGetVCOClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t *puxVCOFrequency);
SYSCTL_nERROR SYSCTL__enGetPLLClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg);
SYSCTL_nERROR SYSCTL__enGetOscillatorFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg);
SYSCTL_nERROR SYSCTL__enGetAlternateClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg);

SYSCTL_nERROR SYSCTL__enSetSystemClock(SYSCTL_nMODULE enModuleArg, UBase_t uxSystemClockArg, const SYSCTL_CONFIG_t* pstClockConfig, UBase_t uxTimeoutArg);
SYSCTL_nERROR SYSCTL__enGetSystemClockFrequency(SYSCTL_nMODULE enModuleArg, UBase_t* puxFrequencyArg);
#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_ */
