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
                                      UBase_t uxAddressArg,
                                      uint16_t u16CountArg,
                                      EEPROM_nVARIABLE enVariableTypeArg,
                                      EEPROM_nCONSTANT enConstantTypeArg);

EEPROM_nERROR EEPROM__enWriteMultiAlt(EEPROM_nMODULE enModuleArg, void* pvDataArg,
                                      UBase_t uxAddressArg,
                                      uint16_t u16CountArg,
                                      EEPROM_nVARIABLE enVariableTypeArg,
                                      EEPROM_nCONSTANT enConstantTypeArg)
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
        UBase_t uxAddingReg = (EEPROM_enCONSTANT_OFF == enConstantTypeArg) ? 1U : 0U;

        switch (enVariableTypeArg)
        {
        case EEPROM_enVARIABLE_BYTE:
        {
            uint8_t *pu8DataAux = (uint8_t*) pvDataArg;
            UBase_t uxOffsetReg = 1UL;
            while((uxMaxAddress > uxAddressArg) &&
                  (u16CountArg > 0U) &&
                  (EEPROM_enERROR_OK == enErrorReg))
            {
                enErrorReg = EEPROM__enWriteByte(enModuleArg, *pu8DataAux, uxAddressArg);
                pu8DataAux += uxAddingReg;
                uxAddressArg += uxOffsetReg;
                u16CountArg--;
            }
        }
        break;
        case EEPROM_enVARIABLE_HALFWORD:
        {
            uint16_t *pu16DataAux = (uint16_t*) pvDataArg;
            UBase_t uxOffsetReg = 2UL;
            while((uxMaxAddress > uxAddressArg) &&
                  (u16CountArg > 0U) &&
                  (EEPROM_enERROR_OK == enErrorReg))
            {
                enErrorReg = EEPROM__enWriteHalfWord(enModuleArg, *pu16DataAux, uxAddressArg);
                pu16DataAux += uxAddingReg;
                uxAddressArg += uxOffsetReg;
                u16CountArg--;
            }
        }
        break;
        case EEPROM_enVARIABLE_WORD:
        {
            UBase_t *puxDataAux = (UBase_t*) pvDataArg;
            UBase_t uxOffsetReg = 4UL;
            while((uxMaxAddress > uxAddressArg) &&
                  (u16CountArg >  0U) &&
                  (EEPROM_enERROR_OK == enErrorReg))
            {
                enErrorReg = EEPROM__enWriteWord(enModuleArg, *puxDataAux, uxAddressArg);
                puxDataAux += uxAddingReg;
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

EEPROM_nERROR EEPROM__enWriteMultiWord(EEPROM_nMODULE enModuleArg, UBase_t *puxData,
                                       UBase_t uxAddress,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) puxData, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_WORD,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiHalfWord(EEPROM_nMODULE enModuleArg, uint16_t *pu16Data,
                                           UBase_t uxAddress,
                                           uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) pu16Data, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_HALFWORD,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiByte(EEPROM_nMODULE enModuleArg, uint8_t *pu8Data,
                                       UBase_t uxAddress,
                                       uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) pu8Data, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_BYTE,
                                          EEPROM_enCONSTANT_OFF);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiWordConstant(EEPROM_nMODULE enModuleArg, UBase_t uxData,
                                               UBase_t uxAddress,
                                               uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &uxData, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_WORD,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiHalfWordConstant(EEPROM_nMODULE enModuleArg, uint16_t u16Data,
                                                   UBase_t uxAddress,
                                                   uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &u16Data, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_HALFWORD,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWriteMultiByteConstant(EEPROM_nMODULE enModuleArg, uint8_t u8Data,
                                               UBase_t uxAddress,
                                               uint16_t u16Count)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteMultiAlt(enModuleArg, (void*) &u8Data, uxAddress,
                                          u16Count,
                                          EEPROM_enVARIABLE_BYTE,
                                          EEPROM_enCONSTANT_ON);
    return (enErrorReg);
}
