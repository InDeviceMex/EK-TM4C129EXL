/*
 * EEPROM_ReadMulti.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READMULTI_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READMULTI_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

EEPROM_nSTATUS EEPROM__enReadMultiWorld(uint32_t* pu32Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address, uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enReadMultiByte(uint8_t* pu8Data, uint32_t u32Address, uint16_t u16Count);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READMULTI_H_ */
