/*
 * SYSCTL_AlternateClock.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_ALTERNATECLOCK_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_ALTERNATECLOCK_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetAlternateClock(SYSCTL_nALTCLK enAlternateClock);
SYSCTL_nALTCLK SYSCTL__enGetAlternateClock(void);
UBase_t SYSCTL__uxGetAlternateClock(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_ALTERNATECLOCK_H_ */
