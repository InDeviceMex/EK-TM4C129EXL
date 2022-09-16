/*
 * EEPROM_Read.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enReadWord(EEPROM_nMODULE enModuleArg, uint32_t *pu32DataArg, uint32_t u32AddressArg);
EEPROM_nERROR EEPROM__enReadHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16DataArg, uint32_t u32AddressArg);
EEPROM_nERROR EEPROM__enReadByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8DataArg, uint32_t u32AddressArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_ */
