/*
 * EEPROM_WriteMulti.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITEMULTI_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITEMULTI_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

EEPROM_nSTATUS EEPROM__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address, uint16_t u16Count);

EEPROM_nSTATUS EEPROM__enWriteMultiWorldConstant(uint32_t u32Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorldConstant(uint16_t u16Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiByteConstant(uint8_t u8Data, uint32_t u32Address, uint16_t u16Count);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITEMULTI_H_ */
