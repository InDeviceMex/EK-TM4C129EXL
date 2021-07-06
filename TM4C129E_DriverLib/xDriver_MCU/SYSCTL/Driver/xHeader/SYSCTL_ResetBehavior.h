/*
 * SYSCTL_ResetBehavior.h
 *
 *  Created on: 13 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_RESETBEHAVIOR_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_RESETBEHAVIOR_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetResetBehavior_External(SYSCTL_nRESET_BEHAVIOR enBehavior);
SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_External(void);

void SYSCTL__vSetResetBehavior_BOR(SYSCTL_nRESET_BEHAVIOR enBehavior);
SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_BOR(void);

void SYSCTL__vSetResetBehavior_Watchdog0(SYSCTL_nRESET_BEHAVIOR enBehavior);
SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog0(void);

void SYSCTL__vSetResetBehavior_Watchdog1(SYSCTL_nRESET_BEHAVIOR enBehavior);
SYSCTL_nRESET_BEHAVIOR SYSCTL__enGetResetBehavior_Watchdog1(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_RESETBEHAVIOR_H_ */
