/*
 * SYSTICK_TickCount.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */

void SYSTICK__vClearTickCount(void);
void SYSTICK__vSetTickCount(uint32_t u32Tick);
uint32_t SYSTICK__u32GetTickCount(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_ */
