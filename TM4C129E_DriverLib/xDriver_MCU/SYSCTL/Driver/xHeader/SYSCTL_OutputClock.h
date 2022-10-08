/*
 * SYSCTL_OutputClock.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetOutputClockEnable(SYSCTL_nOUTCLK enOutputEnableArg);
void SYSCTL__vSetOutputClockDivisor(UBase_t uxDivisor);
void SYSCTL__vSetOutputClockSource(SYSCTL_nOUTCLK_SRC enOutputSource);

void SYSCTL__vDisOutputClock(void);
void SYSCTL__vEnOutputClock(void);

void SYSCTL__vSetOutputClock(SYSCTL_nOUTCLK enOutputEnableArg,
                             SYSCTL_nOUTCLK_SRC enOutputSource,
                             UBase_t uxDivisor);

SYSCTL_nOUTCLK SYSCTL__enGetOutputClockEnable(void);
UBase_t SYSCTL__uxGetOutputClockDivisor(void);
SYSCTL_nOUTCLK_SRC SYSCTL__enGetOutputClockSource(void);

void SYSCTL__vGetOutputClock(SYSCTL_nOUTCLK* penOutputEnableArg,
                             SYSCTL_nOUTCLK_SRC* penOutputSource,
                             UBase_t* puxDivisor);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_OUTPUTCLOCK_H_ */
