/*
 * SYSCTL_GatingClock.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetGatingClock(SYSCTL_nGATING enGating);
SYSCTL_nGATING SYSCTL__enGetGatingClock(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_GATINGCLOCK_H_ */
