/*
 * EEPROM_Read.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <xUtils/Standard/Standard.h>

/*!
 * Read a world from EEPROM Memory section
 * @param[out] pu32Data The Data read from EEPROM Memory section (u32Address).
 * @param[in]  u32Address  The absolute Address from EEPROM Peripheral .
 */
EEPROM_nSTATUS EEPROM__enReadWorld(uint32_t* pu32Data, uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadHalfWorld(uint16_t* pu16Data, uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadByte(uint8_t* pu8Data, uint32_t u32Address);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_ */
