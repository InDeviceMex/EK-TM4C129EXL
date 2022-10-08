/**
 *
 * @file FLASH_ConvertData.c
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
 * @verbatim 20 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_ConvertData.h>

FLASH_nERROR FLASH__enExtractData(void* pvDataExtractedArg, UBase_t* puxInitialDataArg,UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg;
    UBase_t uxOffsetData;

    UBase_t* puxDataAux;
    UBase_t* puxData;
    uint16_t* pu16DataAux;
    uint16_t* pu16Data;
    uint8_t* pu8DataAux;
    uint8_t* pu8Data;

    enErrorReg = FLASH_enERROR_OK;
    if((0UL == (uintptr_t) pvDataExtractedArg) || (0UL == (uintptr_t) puxInitialDataArg))
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
            case FLASH_enVARIABLE_BYTE:
                uxOffsetData = uxAddressArg;
                uxOffsetData &= 3UL;

                pu8Data = (uint8_t*) pvDataExtractedArg;
                pu8DataAux = (uint8_t*) puxInitialDataArg;
                pu8DataAux += uxOffsetData;
                *pu8Data = *pu8DataAux;
            break;
            case FLASH_enVARIABLE_HALFWORD:
                uxOffsetData = uxAddressArg;
                uxOffsetData >>= 1UL;
                uxOffsetData &= 1UL;

                pu16Data = (uint16_t*) pvDataExtractedArg;
                pu16DataAux = (uint16_t*) puxInitialDataArg;
                pu16DataAux += uxOffsetData;
                *pu16Data = *pu16DataAux;
            break;
            case FLASH_enVARIABLE_WORD:
                uxOffsetData = 0UL;

                puxData = (UBase_t*) pvDataExtractedArg;
                puxDataAux = (UBase_t*) puxInitialDataArg;
                puxDataAux += uxOffsetData;
                *puxData = *puxDataAux;
            break;
            default:
                enErrorReg = FLASH_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enReplaceData(void* pvDataOutArg, UBase_t uxDataToReplaceArg,UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg;
    UBase_t uxOffsetData;

    UBase_t *puxDataAux;
    UBase_t uxDataReg;
    uint16_t *pu16DataAux;
    uint16_t u16DataReg;
    uint8_t u8DataReg;
    uint8_t *pu8DataAux;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pvDataOutArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
        case FLASH_enVARIABLE_BYTE:
            uxOffsetData = uxAddressArg;
            uxOffsetData &= 3UL;

            u8DataReg = (uint8_t) uxDataToReplaceArg;

            pu8DataAux = (uint8_t*) pvDataOutArg;
            pu8DataAux += uxOffsetData;
            *pu8DataAux = u8DataReg;
        break;
        case FLASH_enVARIABLE_HALFWORD:
            uxOffsetData = uxAddressArg;
            uxOffsetData >>= 1UL;
            uxOffsetData &= 1UL;

            u16DataReg = (uint16_t) uxDataToReplaceArg;

            pu16DataAux = (uint16_t*) pvDataOutArg;
            pu16DataAux += uxOffsetData;
            *pu16DataAux = u16DataReg;
        break;
        case FLASH_enVARIABLE_WORD:
            uxOffsetData = 0UL;

            uxDataReg = (UBase_t) uxDataToReplaceArg;

            puxDataAux = (UBase_t*) pvDataOutArg;
            puxDataAux += uxOffsetData;
            *puxDataAux = uxDataReg;
        break;
        default:
            enErrorReg = FLASH_enERROR_VALUE;
        break;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH_enIsDataErased(UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg, FLASH_nERASED* penErrasedArg)
{
    FLASH_nERROR enErrorReg;
    uint8_t* pu8DataValue;
    uint16_t* pu16DataValue;
    UBase_t* puxDataValue;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penErrasedArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
            case FLASH_enVARIABLE_BYTE:
                pu8DataValue = (uint8_t*) uxAddressArg;
                if((uint8_t) MCU_MASK_8 == *(pu8DataValue))
                {
                    *penErrasedArg = FLASH_enERASED_YES;
                }
                else
                {
                    *penErrasedArg = FLASH_enERASED_NO;
                }
            break;
            case FLASH_enVARIABLE_HALFWORD:
                uxAddressArg &= ~ (UBase_t) 1UL;
                pu16DataValue = (uint16_t*) uxAddressArg;
                if((uint16_t) MCU_MASK_16 == *(pu16DataValue))
                {
                    *penErrasedArg = FLASH_enERASED_YES;
                }
                else
                {
                    *penErrasedArg = FLASH_enERASED_NO;
                }
            break;
            case FLASH_enVARIABLE_WORD:
                uxAddressArg &= ~ (UBase_t) 3UL;
                puxDataValue = (UBase_t*) uxAddressArg;
                if((UBase_t) MCU_MASK_BASE == *(puxDataValue))
                {
                    *penErrasedArg = FLASH_enERASED_YES;
                }
                else
                {
                    *penErrasedArg = FLASH_enERASED_NO;
                }
            break;
            default:
                enErrorReg = FLASH_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}




