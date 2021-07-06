/*
 * EEPROM_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Write.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

static EEPROM_nSTATUS EEPROM__enWriteAux (uint32_t u32Data, uint32_t u32Address, EEPROM_nVARIABLE enVariableType);

static EEPROM_nSTATUS EEPROM__enWriteAux (uint32_t u32Data, uint32_t u32Address, EEPROM_nVARIABLE enVariableType)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address / 16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/
    uint32_t u32Pos = 0UL;

    static volatile uint8_t *pu8DataAux = 0UL;
    static volatile uint16_t *pu16DataAux = 0UL;
    static volatile uint32_t *pu32DataAux = 0UL;
    static volatile uint32_t u32DataAux = 0UL;

    uint8_t u8DataReg = 0UL;
    uint16_t u16DataReg = 0UL;
    uint32_t u32DataReg = 0UL;

    EEPROM__vSetReady();

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress <<= 2UL;

    u32Block = u32Address;
    u32Block >>= 6UL;

    u32Offset = u32Address;
    u32Offset >>= 2UL;
    u32Offset &= 0xFUL;

    if(u32MaxAddress > u32Address)
    {
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            switch(enVariableType)
            {
            case EEPROM_enVARIABLE_BYTE:
                u8DataReg = (uint8_t) u32Data;

                u32Pos = u32Address;
                u32Pos &= 3UL;

                pu8DataAux = (volatile uint8_t*) &u32DataAux;
                pu8DataAux += u32Pos;
                *pu8DataAux = u8DataReg;

                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32DataAux, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
                enReturn = EEPROM__enWait();
            break;
            case EEPROM_enVARIABLE_HALFWORD:
                u16DataReg = (uint16_t) u32Data;

                u32Pos = u32Address;
                u32Pos >>= 1UL;
                u32Pos &= 1UL;

                pu16DataAux = (volatile uint16_t*) &u32DataAux;
                pu16DataAux += u32Pos;
                *pu16DataAux = u16DataReg;

                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32DataAux, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
                enReturn = EEPROM__enWait();
            break;
            case EEPROM_enVARIABLE_WORD:
                u32DataReg = (uint32_t) u32Data;

                u32Pos = 0UL;

                pu32DataAux = (volatile uint32_t*) &u32DataAux;
                pu32DataAux += u32Pos;
                *pu32DataAux = u32DataReg;

                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32DataAux, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
                enReturn = EEPROM__enWait();
            break;
            default:
                enReturn = EEPROM_enERROR;
            break;
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteHalfWorld (uint16_t u16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteAux ( (uint32_t) u16Data, u32Address, EEPROM_enVARIABLE_HALFWORD);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteWorld (uint32_t u32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteAux ( (uint32_t) u32Data, u32Address, EEPROM_enVARIABLE_WORD);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteAux ( (uint32_t) u8Data, u32Address, EEPROM_enVARIABLE_BYTE);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteWorldBlock(const uint32_t* pu32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address / 16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/

    if(0UL != (uint32_t) pu32Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress <<= 2UL;

        u32Block = u32Address;
        u32Block >>= 6UL;

        u32Offset = u32Address;
        u32Offset >>= 2UL;
        u32Offset &= 0xFUL;

        if(u32MaxAddress > u32Address )
        {
            EEPROM__vSetReady();
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_BLOCK_MASK, EEPROM_EEBLOCK_R_BLOCK_BIT);
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_OFFSET_MASK, EEPROM_EEOFFSET_R_OFFSET_BIT);
            do
            {
                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWRINC_OFFSET, *pu32Data, EEPROM_EERDWRINC_VALUE_MASK, EEPROM_EERDWRINC_R_VALUE_BIT);
                pu32Data += 1U;
                enReturn = EEPROM__enWait();
                u32Offset = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, EEPROM_EEOFFSET_OFFSET_MASK, EEPROM_EEOFFSET_R_OFFSET_BIT);
            }while(0UL != u32Offset);
        }
    }
    return enReturn;
}
