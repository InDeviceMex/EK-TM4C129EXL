/*
 * SYSCTL_OutputClock.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enSetOutputClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE enStateArg);
SYSCTL_nERROR SYSCTL__enGetOutputClockState(SYSCTL_nMODULE enModuleArg, SYSCTL_nSTATE* penStateArg);

SYSCTL_nERROR SYSCTL__enSetOutputClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOUTCLK_SRC enSourceArg);
SYSCTL_nERROR SYSCTL__enGetOutputClockSource(SYSCTL_nMODULE enModuleArg, SYSCTL_nOUTCLK_SRC* penSourceArg);

SYSCTL_nERROR SYSCTL__enSetOutputClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t uxDivisorArg);
SYSCTL_nERROR SYSCTL__enGetOutputClockDivisor(SYSCTL_nMODULE enModuleArg, UBase_t* puxDivisorArg);

SYSCTL_nERROR SYSCTL__enSetOutputClockConfig(SYSCTL_nMODULE enModuleArg,
                                   SYSCTL_nSTATE enStateArg,
                                   SYSCTL_nOUTCLK_SRC enSourceArg,
                                   UBase_t uxDivisorArg);
SYSCTL_nERROR SYSCTL__enGetOutputClockConfig(SYSCTL_nMODULE enModuleArg,
                                   SYSCTL_nSTATE* penStateArg,
                                   SYSCTL_nOUTCLK_SRC* penSourceArg,
                                   UBase_t* puxDivisorArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_ */
