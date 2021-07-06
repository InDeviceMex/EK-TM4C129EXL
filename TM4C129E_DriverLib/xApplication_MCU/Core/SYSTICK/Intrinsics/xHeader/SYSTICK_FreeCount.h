/*
 * SYSTICK_FreeCount.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */

void SYSTICK__vSetFreeCount(uint32_t u32Count);
uint32_t SYSTICK__u32GetFreeCount(void);
void SYSTICK__vClearFreeCount(void);

void SYSTICK__vSetFreeCountOv(uint32_t u32Count);
uint32_t SYSTICK__u32GetFreeCountOv(void);
void SYSTICK__vClearFreeCountOv(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_ */
