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

EEPROM_nERROR EEPROM__enReadMultiAlt (EEPROM_nMODULE enModuleArg, void* pvDataArg, UBase_t uxAddressArg,
                                       uint16_t u16CountArg, EEPROM_nVARIABLE enVariableTypeArg);

EEPROM_nERROR EEPROM__enReadMultiAlt (EEPROM_nMODULE enModuleArg, void* pvDataArg, UBase_t uxAddressArg,
                                       uint16_t u16CountArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pvDataArg) ? EEPROM_enERROR_POINTER : EEPROM_enERROR_OK;

    UBase_t uxMaxAddress;
    uxMaxAddress = 0UL;
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enGetWordCount(enModuleArg, &uxMaxAddress);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxMaxAddress <<= 2UL;
        switch (enVariableTypeArg)
        {
            case EEPROM_enVARIABLE_BYTE:
            {
                uint8_t* pu8Data = (uint8_t*) pvDataArg;
                UBase_t uxOffsetReg = 1UL;
                while((uxMaxAddress > uxAddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadByte(enModuleArg, pu8Data, uxAddressArg);
                    pu8Data += 1UL;
                    uxAddressArg += uxOffsetReg;
                    u16CountArg--;
                }
            }
            break;
            case EEPROM_enVARIABLE_HALFWORD:
            {
                uint16_t* pu16Data = (uint16_t*) pvDataArg;
                UBase_t uxOffsetReg = 2UL;
                while((uxMaxAddress > uxAddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadHalfWord(enModuleArg, pu16Data, uxAddressArg);
                    pu16Data += 1UL;
                    uxAddressArg += uxOffsetReg;
                    u16CountArg--;
                }
            }
            break;
            case EEPROM_enVARIABLE_WORD:
            {
                UBase_t* puxData = (UBase_t*) pvDataArg;
                UBase_t uxOffsetReg = 4UL;
                while((uxMaxAddress > uxAddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enReadWord(enModuleArg, puxData, uxAddressArg);
                    puxData += 1UL;
                    uxAddressArg += uxOffsetReg;
                    u16CountArg--;
                }
            }
            break;
            default:
                enErrorReg = EEPROM_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiWord(EEPROM_nMODULE enModuleArg, UBase_t *puxData,
                                       UBase_t uxAddress,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) puxData, uxAddress,
                                         u16Count, EEPROM_enVARIABLE_WORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16Data,
                                           UBase_t uxAddress,
                                           uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) pu16Data, uxAddress,
                                         u16Count, EEPROM_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadMultiByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8Data,
                                      UBase_t uxAddress,
                                      uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enReadMultiAlt(enModuleArg, (void*) pu8Data, uxAddress,
                                         u16Count, EEPROM_enVARIABLE_BYTE);
    return (enErrorReg);
}
