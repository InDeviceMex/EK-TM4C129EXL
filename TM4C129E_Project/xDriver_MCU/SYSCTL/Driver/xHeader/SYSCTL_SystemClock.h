/*
 * SYSCTL_SystemClock.h
 *
 *  Created on: 15 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nSTATUS SYSCTL__enSetSystemClock(uint32_t u32SystemClock, SYSCTL_CONFIG_TypeDef stClockConfig);
uint32_t SYSCTL__u32GetSystemClock(void);
SYSCTL_nSTATUS SYSCTL__enGetVCOClock(uint32_t *pu32VCOFrequency);




#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_SYSTEMCLOCK_H_ */
