/*
 * EEPROM_Write.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

EEPROM_nSTATUS EEPROM__enWriteWorld(uint32_t u32Data, uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data, uint32_t u32Address);

EEPROM_nSTATUS EEPROM__enWriteWorldBlock(const uint32_t* pu32Data, uint32_t u32Address);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_ */
