/*
 * EEPROM_WriteMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_WriteMulti.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_WorldCount.h>

#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Write.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enWriteMultiAlt(EEPROM_nMODULE enModuleArg, void* pvDataArg,
                                      uint32_t u32AddressArg,
                                      uint16_t u16CountArg,
                                      EEPROM_nVARIABLE enVariableTypeArg,
                                      EEPROM_nCONSTANT enConstantTypeArg);

EEPROM_nERROR EEPROM__enWriteMultiAlt(EEPROM_nMODULE enModuleArg, void* pvDataArg,
                                      uint32_t u32AddressArg,
                                      uint16_t u16CountArg,
                                      EEPROM_nVARIABLE enVariableTypeArg,
                                      EEPROM_nCONSTANT enConstantTypeArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32OffsetReg;
    uint32_t u32AddingReg;
    uint32_t u32MaxAddress;
    uint8_t *pu8DataAux;
    uint16_t *pu16DataAux;
    uint32_t *pu32DataAux;


    if(0UL != (uint32_t) pvDataArg)
    {
        u32MaxAddress = 0UL;
        enErrorReg = EEPROM__enGetWordCount(enModuleArg, &u32MaxAddress);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            u32MaxAddress <<= 2UL;

            if(EEPROM_enCONSTANT_OFF == enConstantTypeArg)
            {
                u32AddingReg = 1U;
            }
            else
            {
                u32AddingReg = 0U;
            }

            switch (enVariableTypeArg)
            {
            case EEPROM_enVARIABLE_BYTE:
                pu8DataAux = (uint8_t*) pvDataArg;
                u32OffsetReg = 1UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enWriteByte(enModuleArg, *pu8DataAux, u32AddressArg);
                    pu8DataAux += u32AddingReg;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            case EEPROM_enVARIABLE_HALFWORD:
                pu16DataAux = (uint16_t*) pvDataArg;
                u32OffsetReg = 2UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg > 0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enWriteHalfWord(enModuleArg, *pu16DataAux, u32AddressArg);
                    pu16DataAux += u32AddingReg;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            case EEPROM_enVARIABLE_WORD:
                pu32DataAux = (uint32_t*) pvDataArg;
                u32OffsetReg = 4UL;
                while((u32MaxAddress > u32AddressArg) &&
                      (u16CountArg >  0U) &&
                      (EEPROM_enERROR_OK == enErrorReg))
                {
                    enErrorReg = EEPROM__enWriteWord(enModuleArg, *pu32DataAux, u32AddressArg);
                    pu32DataAux += u32AddingReg;
                    u32AddressArg += u32OffsetReg;
                    u16CountArg--;
                }
            break;
            default:
                enErrorReg = EEPROM_enERROR_VALUE;
            break;
            }
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiWord(EEPROM_nMODULE enModuleArg, uint32_t *pu32Data,
                                       uint32_t u32Address,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) pu32Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_WORD,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16Data,
                                           uint32_t u32Address,
                                           uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) pu16Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_HALFWORD,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8Data,
                                       uint32_t u32Address,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) pu8Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_BYTE,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiWordConstant(EEPROM_nMODULE enModuleArg, uint32_t u32Data,
                                               uint32_t u32Address,
                                               uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &u32Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_WORD,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiHalfWordConstant(EEPROM_nMODULE enModuleArg, uint16_t u16Data,
                                                   uint32_t u32Address,
                                                   uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &u16Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_HALFWORD,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiByteConstant(EEPROM_nMODULE enModuleArg, uint8_t u8Data,
                                               uint32_t u32Address,
                                               uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &u8Data, u32Address,
                                          u16Count,
                                          EEPROM_enVARIABLE_BYTE,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}
