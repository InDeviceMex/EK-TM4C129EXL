/*
 * EEPROM_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Read.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentAddress.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ConvertData.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ReadWrite.h>

EEPROM_nERROR EEPROM__enReadAuxiliar(EEPROM_nMODULE enModuleArg, void* pvDataArg, uint32_t u32AddressArg,
                                     EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enReadAuxiliar(EEPROM_nMODULE enModuleArg, void* pvDataArg, uint32_t u32AddressArg,
                                     EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    static uint32_t u32DataAux;

    enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, u32AddressArg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enReadData(enModuleArg, &u32DataAux);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enExtractData(pvDataArg, &u32DataAux, u32AddressArg, enVariableTypeArg);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadWord(EEPROM_nMODULE enModuleArg, uint32_t *pu32DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar(enModuleArg, (void*) pu32DataArg, u32AddressArg, EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar(enModuleArg, (void*) pu16DataArg, u32AddressArg, EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar (enModuleArg, (void*) pu8DataArg, u32AddressArg, EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}
