/*
 * EEPROM_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Read.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enReadAux (void* pvData, uint32_t u32Address, EEPROM_nVARIABLE enVariableType);

EEPROM_nSTATUS EEPROM__enReadAux (void* pvData, uint32_t u32Address, EEPROM_nVARIABLE enVariableType)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;
    uint32_t u32Offset = 0UL;
    uint32_t u32OffsetData = 0UL;

    static volatile uint8_t* pu8DataAux = 0UL;
    static volatile uint16_t* pu16DataAux = 0UL;
    static volatile uint32_t* pu32DataAux = 0UL;

    static volatile uint8_t* pu8Data = 0UL;
    static volatile uint16_t* pu16Data = 0UL;
    static volatile uint32_t* pu32Data = 0UL;

    static volatile uint32_t u32DataAux = 0UL;

    if(0UL != (uint32_t) pvData)
    {
        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            u32MaxAddress = EEPROM__u32GetWorldCount();
            u32MaxAddress <<= 2UL;

            u32Block = u32Address;
            u32Block >>= 6UL;

            u32Offset = u32Address;
            u32Offset >>= 2UL;
            u32Offset &= 0xFUL;

            if((u32MaxAddress > u32Address))
            {
                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
                u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_R_VALUE_MASK, 0UL);
                enReturn = EEPROM__enWait();

                if(EEPROM_enOK == enReturn)
                {
                    switch(enVariableType)
                    {
                        case EEPROM_enVARIABLE_BYTE:

                            u32OffsetData = u32Address;
                            u32OffsetData &= 3UL;

                            pu8Data = (uint8_t*) pvData;
                            pu8DataAux = (volatile uint8_t*) &u32DataAux;
                            pu8DataAux += u32OffsetData;
                            *pu8Data = *pu8DataAux;
                        break;
                        case EEPROM_enVARIABLE_HALFWORD:

                            u32OffsetData = u32Address;
                            u32OffsetData >>= 1UL;
                            u32OffsetData &= 1UL;

                            pu16Data = (uint16_t*) pvData;
                            pu16DataAux = (volatile uint16_t*) &u32DataAux;
                            pu16DataAux += u32OffsetData;
                            *pu16Data = *pu16DataAux;
                        break;
                        case EEPROM_enVARIABLE_WORD:

                            u32OffsetData = 0UL;

                            pu32Data = (uint32_t*) pvData;
                            pu32DataAux = (volatile uint32_t*) &u32DataAux;
                            pu32DataAux += u32OffsetData;
                            *pu32Data = *pu32DataAux;
                        break;
                        default:
                            enReturn = EEPROM_enERROR;
                        break;
                    }
                }
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadWorld (uint32_t *pu32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enReadAux ( (void*) pu32Data, u32Address, EEPROM_enVARIABLE_WORD);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadHalfWorld (uint16_t *pu16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enReadAux ( (void*) pu16Data, u32Address, EEPROM_enVARIABLE_HALFWORD);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadByte (uint8_t *pu8Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enReadAux ( (void*) pu8Data, u32Address, EEPROM_enVARIABLE_BYTE);
    return enReturn;
}
