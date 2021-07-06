/*
 * FLASH_Wait.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWait, ".ramcode")

FLASH_nSTATUS FLASH__enWait (uint32_t u32FMC, uint32_t u32RegisterMask);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enWait (uint32_t u32FMC, uint32_t u32RegisterMask) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_ */
