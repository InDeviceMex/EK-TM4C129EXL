/*
 * SYSCTL_MemoryTiming.h
 *
 *  Created on: 14 jun. 2021
 *      Author: InDeviceMex
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MEMORYTIMING_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MEMORYTIMING_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

void SYSCTL__vSetMemoryTiming(uint32_t u32SysClock);
void SYSCTL__vGetMemoryTiming(SYSCTL_nMEM_HIGHTIME* penMemoryHighTime,
                              SYSCTL_nMEM_WAITSTATE* penMemoryWaitState,
                              SYSCTL_nMEM_CLOCKEDGE* penMemoryClockEdge);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_MEMORYTIMING_H_ */
