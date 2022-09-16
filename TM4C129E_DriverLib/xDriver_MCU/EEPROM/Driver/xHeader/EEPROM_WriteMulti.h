/*
 * EEPROM_WriteMulti.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_WRITEMULTI_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_WRITEMULTI_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enWriteMultiWord(EEPROM_nMODULE enModuleArg, uint32_t *pu32Data,
                                       uint32_t u32Address,
                                       uint16_t u16Count);
EEPROM_nERROR EEPROM__enWriteMultiHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16Data,
                                           uint32_t u32Address,
                                           uint16_t u16Count);
EEPROM_nERROR EEPROM__enWriteMultiByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8Data,
                                       uint32_t u32Address,
                                       uint16_t u16Count);

EEPROM_nERROR EEPROM__enWriteMultiWordConstant(EEPROM_nMODULE enModuleArg, uint32_t u32Data,
                                               uint32_t u32Address,
                                               uint16_t u16Count);
EEPROM_nERROR EEPROM__enWriteMultiHalfWordConstant(EEPROM_nMODULE enModuleArg, uint16_t u16Data,
                                                   uint32_t u32Address,
                                                   uint16_t u16Count);
EEPROM_nERROR EEPROM__enWriteMultiByteConstant(EEPROM_nMODULE enModuleArg, uint8_t u8Data,
                                               uint32_t u32Address,
                                               uint16_t u16Count);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_WRITEMULTI_H_ */
