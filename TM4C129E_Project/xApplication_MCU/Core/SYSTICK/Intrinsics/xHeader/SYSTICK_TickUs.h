/*
 * SYSTICK_TickUs.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_

#include <xUtils/Standard/Standard.h>

void SYSTICK__vClearTickUs(void);
void SYSTICK__vSetTickUs(float32_t f32Tick);
float32_t SYSTICK__f32GetTickUs(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_ */
