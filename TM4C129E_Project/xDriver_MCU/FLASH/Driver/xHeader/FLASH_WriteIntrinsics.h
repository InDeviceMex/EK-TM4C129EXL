/*
 * FLASH_WriteIntrinsics.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEINTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEINTRINSICS_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWrite, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteBuf, ".ramcode")

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count)__attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEINTRINSICS_H_ */
