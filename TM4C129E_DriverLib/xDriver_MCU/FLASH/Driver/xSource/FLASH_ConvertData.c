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

FLASH_nERROR FLASH__enExtractData(void* pvDataExtractedArg, uint32_t* pu32InitialDataArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32OffsetData;

    uint32_t* pu32DataAux;
    uint32_t* pu32Data;
    uint16_t* pu16DataAux;
    uint16_t* pu16Data;
    uint8_t* pu8DataAux;
    uint8_t* pu8Data;

    enErrorReg = FLASH_enERROR_OK;
    if((0UL == (uintptr_t) pvDataExtractedArg) || (0UL == (uintptr_t) pu32InitialDataArg))
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        switch(enVariableTypeArg)
        {
            case FLASH_enVARIABLE_BYTE:
                u32OffsetData = u32AddressArg;
                u32OffsetData &= 3UL;

                pu8Data = (uint8_t*) pvDataExtractedArg;
                pu8DataAux = (uint8_t*) pu32InitialDataArg;
                pu8DataAux += u32OffsetData;
                *pu8Data = *pu8DataAux;
            break;
            case FLASH_enVARIABLE_HALFWORD:
                u32OffsetData = u32AddressArg;
                u32OffsetData >>= 1UL;
                u32OffsetData &= 1UL;

                pu16Data = (uint16_t*) pvDataExtractedArg;
                pu16DataAux = (uint16_t*) pu32InitialDataArg;
                pu16DataAux += u32OffsetData;
                *pu16Data = *pu16DataAux;
            break;
            case FLASH_enVARIABLE_WORD:
                u32OffsetData = 0UL;

                pu32Data = (uint32_t*) pvDataExtractedArg;
                pu32DataAux = (uint32_t*) pu32InitialDataArg;
                pu32DataAux += u32OffsetData;
                *pu32Data = *pu32DataAux;
            break;
            default:
                enErrorReg = FLASH_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enReplaceData(void* pvDataOutArg, uint32_t u32DataToReplaceArg,uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32OffsetData;

    uint32_t *pu32DataAux;
    uint32_t u32DataReg;
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
            u32OffsetData = u32AddressArg;
            u32OffsetData &= 3UL;

            u8DataReg = (uint8_t) u32DataToReplaceArg;

            pu8DataAux = (uint8_t*) pvDataOutArg;
            pu8DataAux += u32OffsetData;
            *pu8DataAux = u8DataReg;
        break;
        case FLASH_enVARIABLE_HALFWORD:
            u32OffsetData = u32AddressArg;
            u32OffsetData >>= 1UL;
            u32OffsetData &= 1UL;

            u16DataReg = (uint16_t) u32DataToReplaceArg;

            pu16DataAux = (uint16_t*) pvDataOutArg;
            pu16DataAux += u32OffsetData;
            *pu16DataAux = u16DataReg;
        break;
        case FLASH_enVARIABLE_WORD:
            u32OffsetData = 0UL;

            u32DataReg = (uint32_t) u32DataToReplaceArg;

            pu32DataAux = (uint32_t*) pvDataOutArg;
            pu32DataAux += u32OffsetData;
            *pu32DataAux = u32DataReg;
        break;
        default:
            enErrorReg = FLASH_enERROR_VALUE;
        break;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH_enIsDataErased(uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg, FLASH_nERASED* penErrasedArg)
{
    FLASH_nERROR enErrorReg;
    uint8_t* pu8DataValue;
    uint16_t* pu16DataValue;
    uint32_t* pu32DataValue;

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
                pu8DataValue = (uint8_t*) u32AddressArg;
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
                u32AddressArg &= ~ (uint32_t) 1UL;
                pu16DataValue = (uint16_t*) u32AddressArg;
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
                u32AddressArg &= ~ (uint32_t) 3UL;
                pu32DataValue = (uint32_t*) u32AddressArg;
                if((uint32_t) MCU_MASK_32 == *(pu32DataValue))
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




