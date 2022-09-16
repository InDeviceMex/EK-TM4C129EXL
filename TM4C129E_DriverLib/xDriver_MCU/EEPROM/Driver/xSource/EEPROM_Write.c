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

EEPROM_nERROR EEPROM__enWriteAuxiliar(EEPROM_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg,
                                          EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    static uint32_t u32DataAux;

    enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, u32AddressArg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enReadData(enModuleArg, &u32DataAux);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            enErrorReg = EEPROM__enReplaceData(&u32DataAux, u32DataArg, u32AddressArg, enVariableTypeArg);
            if(EEPROM_enERROR_OK == enErrorReg)
            {
                enErrorReg = EEPROM__enWriteData(enModuleArg, u32DataAux);
            }
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteHalfWord(EEPROM_nMODULE enModuleArg, uint16_t u16DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (uint32_t) u16DataArg, u32AddressArg,
                                       EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteWord(EEPROM_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (uint32_t) u32DataArg, u32AddressArg,
                                       EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteByte(EEPROM_nMODULE enModuleArg, uint8_t u8DataArg, uint32_t u32AddressArg)
{
    EEPROM_nERROR enErrorReg ;
    enErrorReg = EEPROM__enWriteAuxiliar(enModuleArg, (uint32_t) u8DataArg, u32AddressArg,
                                       EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteWordBlock(EEPROM_nMODULE enModuleArg, const uint32_t* pu32DataArg, uint32_t u32StartAddressArg, uint32_t* pu32Count)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32OffsetReg;
    uint32_t u32CurrentCountReg;
    uint32_t u32MaxCountReg;

    if((0UL != (uintptr_t) pu32DataArg) && (0UL != (uintptr_t) pu32Count))
    {
        if(0UL != *pu32Count)
        {
            enErrorReg = EEPROM__enSetCurrentAddress(enModuleArg, u32StartAddressArg);
            if(EEPROM_enERROR_OK == enErrorReg)
            {
                u32CurrentCountReg = 0U;
                u32MaxCountReg = *pu32Count;
                do
                {
                    enErrorReg = EEPROM__enWriteDataWithIncrement(enModuleArg, *pu32DataArg);
                    if(EEPROM_enERROR_OK == enErrorReg)
                    {
                        u32CurrentCountReg += 1UL;
                        pu32DataArg += 1U;
                        enErrorReg = EEPROM__enGetCurrentOffset(enModuleArg, &u32OffsetReg);
                    }
                }while((EEPROM_enERROR_OK == enErrorReg) && (0UL != u32OffsetReg) && (u32MaxCountReg > u32CurrentCountReg));

                if(EEPROM_enERROR_OK == enErrorReg)
                {
                    *pu32Count = (uint32_t) u32CurrentCountReg;
                }
            }
        }
        else
        {
            enErrorReg = EEPROM_enERROR_VALUE;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}
