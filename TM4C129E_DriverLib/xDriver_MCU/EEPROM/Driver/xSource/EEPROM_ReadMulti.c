/*
 * EEPROM_ReadMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ReadMulti.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_WorldCount.h>

#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Read.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enReadMultiAlt (EEPROM_nMODULE enModuleArg, void* pvDataArg, uint32_t u32AddressArg,
                                       uint16_t u16CountArg, EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enReadMultiAlt (EEPROM_nMODULE enModuleArg, void* pvDataArg, uint32_t u32AddressArg,
                                       uint16_t u16CountArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32MaxAddress;
    uint32_t u32OffsetReg;

    uint8_t* pu8Data;
    uint16_t* pu16Data;
    uint32_t* pu32Data;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) pvDataArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        u32MaxAddress = 0UL;
        enErrorReg = EEPROM__enGetWordCount(enModuleArg, &u32MaxAddress);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        u32MaxAddress <<= 2UL;

        switch (enVariableTypeArg)
        {
            case EEPROM_enVARIABLE_BYTE:
                pu8Data = (uint8_t*) pvDataArg;
                u32OffsetReg = 1UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadByte(enModuleArg, pu8Data, u32AddressArg);
                    pu8Data += 1UL;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            case EEPROM_enVARIABLE_HALFWORD:
                pu16Data = (uint16_t*) pvDataArg;
                u32OffsetReg = 2UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadHalfWord(enModuleArg, pu16Data, u32AddressArg);
                    pu16Data += 1UL;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            case EEPROM_enVARIABLE_WORD:

                pu32Data = (uint32_t*) pvDataArg;
                u32OffsetReg = 4UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadWord(enModuleArg, pu32Data, u32AddressArg);
                    pu32Data += 1UL;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            default:
                enErrorReg = EEPROM_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiWord(EEPROM_nMODULE enModuleArg, uint32_t *pu32Data,
                                       uint32_t u32Address,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) pu32Data, u32Address,
                                         u16Count, EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16Data,
                                           uint32_t u32Address,
                                           uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) pu16Data, u32Address,
                                         u16Count, EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8Data,
                                      uint32_t u32Address,
                                      uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) pu8Data, u32Address,
                                         u16Count, EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}
