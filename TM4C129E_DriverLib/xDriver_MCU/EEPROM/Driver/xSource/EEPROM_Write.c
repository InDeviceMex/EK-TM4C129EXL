/*
 * EEPROM_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Write.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentAddress.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentOffset.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ConvertData.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ReadWrite.h>

EEPROM_nERROR EEPROM__enWriteAuxiliar(EEPROM_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg,
                                          EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    static UBase_t uxDataAux;

    enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, uxAddressArg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enReadData(enModuleArg, &uxDataAux);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enReplaceData(&uxDataAux, uxDataArg, uxAddressArg, enVariableTypeArg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWriteData(enModuleArg, uxDataAux);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteHalfWord(EEPROM_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (UBase_t) u16DataArg, uxAddressArg,
                                       EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteWord(EEPROM_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (UBase_t) uxDataArg, uxAddressArg,
                                       EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteByte(EEPROM_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxAddressArg)
{
    EEPROM_nERROR enErrorReg ;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (UBase_t) u8DataArg, uxAddressArg,
                                       EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteWordBlock(EEPROM_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t uxStartAddressArg, UBase_t* puxCount)
{
    EEPROM_nERROR enErrorReg;
    UBase_t uxOffsetReg;
    UBase_t uxCurrentCountReg;
    UBase_t uxMaxCountReg;

    uxCurrentCountReg = 0U;
    enErrorReg = EEPROM_enERROR_OK;
    if((0UL == (uintptr_t) puxDataArg) || (0UL == (uintptr_t) puxCount))
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        if(0UL == *puxCount)
        {
            enErrorReg = EEPROM_enERROR_VALUE;
        }
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, uxStartAddressArg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxMaxCountReg = *puxCount;
        do
        {
            enErrorReg = EEPROM__enWriteDataWithIncrement(enModuleArg, *puxDataArg);
            if(EEPROM_enERROR_OK == enErrorReg)
            {
                uxCurrentCountReg += 1UL;
                puxDataArg += 1U;
                enErrorReg = EEPROM__enGetCurrentOffset(enModuleArg, &uxOffsetReg);
            }
        }while((EEPROM_enERROR_OK == enErrorReg) && (0UL != uxOffsetReg) && (uxMaxCountReg > uxCurrentCountReg));
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *puxCount = (UBase_t) uxCurrentCountReg;
    }
    return (enErrorReg);
}
