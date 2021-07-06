/*
 * SYSTICK_Init.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_

#include <xDriver_MCU/Core/SYSTICK/Peripheral/xHeader/SYSTICK_Enum.h>

SYSTICK_nSTATUS SYSTICK__enInitTickVector(uint32_t u32Tick, SYSTICK_nPRIORITY enPriority, SYSTICK_nCLKSOURCE enClockSource, void(*pfvVector) (void));
SYSTICK_nSTATUS SYSTICK__enInitTick(uint32_t u32Tick, SYSTICK_nPRIORITY enPriority, SYSTICK_nCLKSOURCE enClockSource);

SYSTICK_nSTATUS SYSTICK__enInitUsVector(uint32_t u32TimeUs, SYSTICK_nPRIORITY enPriority, void(*pfvVector) (void));
SYSTICK_nSTATUS SYSTICK__enInitUs(uint32_t u32TimeUs, SYSTICK_nPRIORITY enPriority);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_ */
