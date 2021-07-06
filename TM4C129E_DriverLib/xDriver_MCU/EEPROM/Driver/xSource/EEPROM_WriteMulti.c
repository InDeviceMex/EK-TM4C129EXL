/*
 * EEPROM_WriteMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_WriteMulti.h>

#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Write.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enWriteMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, EEPROM_nVARIABLE enVariableType, EEPROM_nCONSTANT enconstantType);

EEPROM_nSTATUS EEPROM__enWriteMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, EEPROM_nVARIABLE enVariableType, EEPROM_nCONSTANT enconstantType)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint8_t *pu8DataAux = 0UL;
    uint16_t *pu16DataAux = 0UL;
    uint32_t *pu32DataAux = 0UL;

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress <<= 2UL;

    if(0UL != (uint32_t) pvData)
    {
        enReturn = EEPROM_enOK;
        EEPROM__vSetReady();
        switch (enVariableType)
        {
        case EEPROM_enVARIABLE_BYTE:
            pu8DataAux = (uint8_t*) pvData;
            if( EEPROM_enCONSTANT_OFF == enconstantType)
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteByte( *pu8DataAux, u32Address);
                    pu8DataAux += 1UL;
                    u32Address += 1UL;
                    u16Count--;
                }
            }
            else
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteByte( *pu8DataAux, u32Address);
                    u32Address += 1UL;
                    u16Count--;
                }
            }
        break;
        case EEPROM_enVARIABLE_HALFWORD:
            pu16DataAux = (uint16_t*) pvData;
            if( EEPROM_enCONSTANT_OFF == enconstantType)
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteHalfWorld( *pu16DataAux, u32Address);
                    pu16DataAux += 1UL;
                    u32Address += 2UL;
                    u16Count--;
                }
            }
            else
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteHalfWorld( *pu16DataAux, u32Address);
                    u32Address += 2UL;
                    u16Count--;
                }
            }
        break;
        case EEPROM_enVARIABLE_WORD:
            pu32DataAux = (uint32_t*) pvData;
            if( EEPROM_enCONSTANT_OFF == enconstantType)
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteWorld( *pu32DataAux, u32Address);
                    pu32DataAux += 1UL;
                    u32Address += 4UL;
                    u16Count--;
                }
            }
            else
            {
                while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                {
                    enReturn = EEPROM__enWriteWorld( *pu32DataAux, u32Address);
                    u32Address += 4UL;
                    u16Count--;
                }
            }
        break;
        default:
            enReturn = EEPROM_enERROR;
        break;
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiWorld (uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu32Data, u32Address, u16Count, EEPROM_enVARIABLE_WORD, EEPROM_enCONSTANT_OFF);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld (uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu16Data, u32Address, u16Count, EEPROM_enVARIABLE_HALFWORD, EEPROM_enCONSTANT_OFF);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiByte (uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu8Data, u32Address, u16Count, EEPROM_enVARIABLE_BYTE, EEPROM_enCONSTANT_OFF);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiWorldConstant (uint32_t u32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) &u32Data, u32Address, u16Count, EEPROM_enVARIABLE_WORD, EEPROM_enCONSTANT_ON);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorldConstant (uint16_t u16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) &u16Data, u32Address, u16Count, EEPROM_enVARIABLE_HALFWORD, EEPROM_enCONSTANT_ON);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiByteConstant (uint8_t u8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) &u8Data, u32Address, u16Count, EEPROM_enVARIABLE_BYTE, EEPROM_enCONSTANT_ON);
    return enReturn;
}
