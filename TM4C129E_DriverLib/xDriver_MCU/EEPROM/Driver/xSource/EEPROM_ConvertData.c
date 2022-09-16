/**
 *
 * @file EEPROM_ConvertData.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 15 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ConvertData.h>

EEPROM_nERROR EEPROM__enExtractData(void* pvDataExtractedArg, uint32_t* pu32InitialDataArg,uint32_t u32AddressArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32OffsetData;

    uint32_t* pu32DataAux;
    uint32_t* pu32Data;
    uint16_t* pu16DataAux;
    uint16_t* pu16Data;
    uint8_t* pu8DataAux;
    uint8_t* pu8Data;

    if((0UL != (uintptr_t) pvDataExtractedArg) && (0UL != (uintptr_t) pu32InitialDataArg))
    {
        enErrorReg = EEPROM_enERROR_OK;
        switch(enVariableTypeArg)
        {
            case EEPROM_enVARIABLE_BYTE:
                u32OffsetData = u32AddressArg;
                u32OffsetData &= 3UL;

                pu8Data = (uint8_t*) pvDataExtractedArg;
                pu8DataAux = (uint8_t*) pu32InitialDataArg;
                pu8DataAux += u32OffsetData;
                *pu8Data = *pu8DataAux;
            break;
            case EEPROM_enVARIABLE_HALFWORD:
                u32OffsetData = u32AddressArg;
                u32OffsetData >>= 1UL;
                u32OffsetData &= 1UL;

                pu16Data = (uint16_t*) pvDataExtractedArg;
                pu16DataAux = (uint16_t*) pu32InitialDataArg;
                pu16DataAux += u32OffsetData;
                *pu16Data = *pu16DataAux;
            break;
            case EEPROM_enVARIABLE_WORD:
                u32OffsetData = 0UL;

                pu32Data = (uint32_t*) pvDataExtractedArg;
                pu32DataAux = (uint32_t*) pu32InitialDataArg;
                pu32DataAux += u32OffsetData;
                *pu32Data = *pu32DataAux;
            break;
            default:
                enErrorReg = EEPROM_enERROR_VALUE;
            break;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enReplaceData(void* pvDataOutArg, uint32_t u32DataToReplaceArg,uint32_t u32AddressArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32OffsetData;

    uint32_t *pu32DataAux;
    uint32_t u32DataReg;
    uint16_t *pu16DataAux;
    uint16_t u16DataReg;
    uint8_t u8DataReg;
    uint8_t *pu8DataAux;

    if(0UL != (uintptr_t) pvDataOutArg)
    {
        enErrorReg = EEPROM_enERROR_OK;
        switch(enVariableTypeArg)
        {
        case EEPROM_enVARIABLE_BYTE:
            u32OffsetData = u32AddressArg;
            u32OffsetData &= 3UL;

            u8DataReg = (uint8_t) u32DataToReplaceArg;

            pu8DataAux = (uint8_t*) pvDataOutArg;
            pu8DataAux += u32OffsetData;
            *pu8DataAux = u8DataReg;
        break;
        case EEPROM_enVARIABLE_HALFWORD:
            u32OffsetData = u32AddressArg;
            u32OffsetData >>= 1UL;
            u32OffsetData &= 1UL;

            u16DataReg = (uint16_t) u32DataToReplaceArg;

            pu16DataAux = (uint16_t*) pvDataOutArg;
            pu16DataAux += u32OffsetData;
            *pu16DataAux = u16DataReg;
        break;
        case EEPROM_enVARIABLE_WORD:
            u32OffsetData = 0UL;

            u32DataReg = (uint32_t) u32DataToReplaceArg;

            pu32DataAux = (uint32_t*) pvDataOutArg;
            pu32DataAux += u32OffsetData;
            *pu32DataAux = u32DataReg;
        break;
        default:
            enErrorReg = EEPROM_enERROR_VALUE;
        break;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}





