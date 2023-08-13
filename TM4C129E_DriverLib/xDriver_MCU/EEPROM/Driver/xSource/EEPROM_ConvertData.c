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

EEPROM_nERROR EEPROM__enExtractData(void* pvDataExtractedArg, UBase_t* puxInitialDataArg,UBase_t uxAddressArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM_enERROR_OK;
    if((0UL == (uintptr_t) pvDataExtractedArg) || (0UL == (uintptr_t) puxInitialDataArg))
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
            case EEPROM_enVARIABLE_BYTE:
            {
                UBase_t uxOffsetData = uxAddressArg;
                uxOffsetData &= 3UL;

                uint8_t* pu8Data = (uint8_t*) pvDataExtractedArg;
                uint8_t* pu8DataAux = (uint8_t*) puxInitialDataArg;
                pu8DataAux += uxOffsetData;
                *pu8Data = *pu8DataAux;
            }
            break;
            case EEPROM_enVARIABLE_HALFWORD:
            {
                UBase_t uxOffsetData = uxAddressArg;
                uxOffsetData >>= 1UL;
                uxOffsetData &= 1UL;

                uint16_t* pu16Data = (uint16_t*) pvDataExtractedArg;
                uint16_t* pu16DataAux = (uint16_t*) puxInitialDataArg;
                pu16DataAux += uxOffsetData;
                *pu16Data = *pu16DataAux;
            }
            break;
            case EEPROM_enVARIABLE_WORD:
            {
                UBase_t uxOffsetData = 0UL;

                UBase_t* puxData = (UBase_t*) pvDataExtractedArg;
                UBase_t* puxDataAux = (UBase_t*) puxInitialDataArg;
                puxDataAux += uxOffsetData;
                *puxData = *puxDataAux;
            }
            break;
            default:
                enErrorReg = EEPROM_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}


EEPROM_nERROR EEPROM__enReplaceData(void* pvDataOutArg, UBase_t uxDataToReplaceArg,UBase_t uxAddressArg, EEPROM_nVARIABLE enVariableTypeArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pvDataOutArg) ? EEPROM_enERROR_POINTER : EEPROM_enERROR_OK;

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
        case EEPROM_enVARIABLE_BYTE:
        {
            UBase_t uxOffsetData = uxAddressArg;
            uxOffsetData &= 3UL;

            uint8_t u8DataReg = (uint8_t) uxDataToReplaceArg;

            uint8_t *pu8DataAux = (uint8_t*) pvDataOutArg;
            pu8DataAux += uxOffsetData;
            *pu8DataAux = u8DataReg;
        }
        break;
        case EEPROM_enVARIABLE_HALFWORD:
        {
            UBase_t uxOffsetData = uxAddressArg;
            uxOffsetData >>= 1UL;
            uxOffsetData &= 1UL;

            uint16_t u16DataReg = (uint16_t) uxDataToReplaceArg;

            uint16_t *pu16DataAux = (uint16_t*) pvDataOutArg;
            pu16DataAux += uxOffsetData;
            *pu16DataAux = u16DataReg;
        }
        break;
        case EEPROM_enVARIABLE_WORD:
        {
            UBase_t uxOffsetData = 0UL;

            UBase_t uxDataReg = (UBase_t) uxDataToReplaceArg;

            UBase_t *puxDataAux = (UBase_t*) pvDataOutArg;
            puxDataAux += uxOffsetData;
            *puxDataAux = uxDataReg;
        }
        break;
        default:
            enErrorReg = EEPROM_enERROR_VALUE;
        break;
        }
    }
    return (enErrorReg);
}
