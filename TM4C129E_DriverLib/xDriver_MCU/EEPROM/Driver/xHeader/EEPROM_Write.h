/*
 * EEPROM_Write.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enWriteAuxiliar(EEPROM_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg,
                                      EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enWriteHalfWord(EEPROM_nMODULE enModuleArg, uint16_t u16DataArg, uint32_t u32AddressArg);
EEPROM_nERROR EEPROM__enWriteWord(EEPROM_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg);
EEPROM_nERROR EEPROM__enWriteByte(EEPROM_nMODULE enModuleArg, uint8_t u8DataArg, uint32_t u32AddressArg);

EEPROM_nERROR EEPROM__enWriteWordBlock(EEPROM_nMODULE enModuleArg, const uint32_t* pu32DataArg, uint32_t u32AddressArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_ */
