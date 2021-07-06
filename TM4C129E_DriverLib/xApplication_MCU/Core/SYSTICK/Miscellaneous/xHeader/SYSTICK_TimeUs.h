/*
 * SYSTICK_TimeUs.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUS_H_

#include <xUtils/Standard/Standard.h>

uint64_t SYSTICK__u64GetTimePs(void);
uint64_t SYSTICK__u64GetTimeNs(void);
uint64_t SYSTICK__u64GetTimeUs(void);
uint64_t SYSTICK__u64GetTimeMs(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUS_H_ */
