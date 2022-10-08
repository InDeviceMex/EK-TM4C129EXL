/*
 * SYSCTL_SystemClock.h
 *
 *  Created on: 15 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nSTATUS SYSCTL__enSetSystemClock(UBase_t uxSystemClock,
                                        SYSCTL_CONFIG_t stClockConfig);
UBase_t SYSCTL__uxGetSystemClock(void);
SYSCTL_nSTATUS SYSCTL__enGetVCOClock(UBase_t *puxVCOFrequency);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_ */
