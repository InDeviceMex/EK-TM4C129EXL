/*
 * EEPROM_Write.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enWriteAuxiliar(EEPROM_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg,
                                      EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enWriteHalfWord(EEPROM_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t uxAddressArg);
EEPROM_nERROR EEPROM__enWriteWord(EEPROM_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg);
EEPROM_nERROR EEPROM__enWriteByte(EEPROM_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxAddressArg);

EEPROM_nERROR EEPROM__enWriteWordBlock(EEPROM_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t uxStartAddressArg, UBase_t* puxCount);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_WRITE_H_ */
