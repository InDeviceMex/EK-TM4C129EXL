/*
 * SYSTICK_TimeUsBase.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_

#include <xUtils/Standard/Standard.h>

void SYSTICK__vClearTimeUsBase(void);
void SYSTICK__vSetTimeUsBase(float32_t f32Base);
float32_t SYSTICK__f32GetTimeUsBase(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_ */
