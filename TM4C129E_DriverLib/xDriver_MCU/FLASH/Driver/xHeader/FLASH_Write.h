/*
 * FLASH_Write.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITE_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITE_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWriteWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteHalfWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteByte, ".ramcode")

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITE_H_ */
