/*
 * SYSCTL_NMICause.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_NMICAUSE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_NMICAUSE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vClearNMICause(SYSCTL_nNMI enNMICause);
SYSCTL_nNMI SYSCTL__enGetNMICause(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_NMICAUSE_H_ */
