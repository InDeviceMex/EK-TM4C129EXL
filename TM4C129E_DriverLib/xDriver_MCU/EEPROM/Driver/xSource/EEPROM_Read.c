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

EEPROM_nERROR EEPROM__enReadAuxiliar(EEPROM_nMODULE enModuleArg, void* pvDataArg, UBase_t uxAddressArg,
                                     EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enReadAuxiliar(EEPROM_nMODULE enModuleArg, void* pvDataArg, UBase_t uxAddressArg,
                                     EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, uxAddressArg);

    UBase_t uxDataAux;
    uxDataAux = 0;
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enReadData(enModuleArg, &uxDataAux);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enExtractData(pvDataArg, &uxDataAux, uxAddressArg, enVariableTypeArg);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadWord(EEPROM_nMODULE enModuleArg, UBase_t *puxDataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar(enModuleArg, (void*) puxDataArg, uxAddressArg, EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16DataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar(enModuleArg, (void*) pu16DataArg, uxAddressArg, EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8DataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadAuxiliar (enModuleArg, (void*) pu8DataArg, uxAddressArg, EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}
