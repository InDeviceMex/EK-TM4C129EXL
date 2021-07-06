/*
 * FLASH_Erase.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_ERASE_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_ERASE_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enPageErasePos, ".ramcode")
#pragma  CODE_SECTION(FLASH__enPageErase, ".ramcode")
#pragma  CODE_SECTION(FLASH__enMassErase, ".ramcode")

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page);
FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address);
FLASH_nSTATUS FLASH__enMassErase(void);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enMassErase(void) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_ERASE_H_ */
