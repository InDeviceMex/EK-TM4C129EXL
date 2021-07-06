/*
 * FLASH_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteMulti.h>

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteIntrinsics.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH_vFillBlock, ".ramcode")
#pragma  CODE_SECTION(FLASH_enWriteMultiAux, ".ramcode")

static void FLASH_vFillBlock(uint32_t u32InitialAddress, uint32_t u32AddressOffset, void* pvData, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType);
static FLASH_nSTATUS FLASH_enWriteMultiAux(uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType);

#elif defined (__GNUC__ )
static void FLASH_vFillBlock(uint32_t u32InitialAddress, uint32_t u32AddressOffset, void* pvData, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType)__attribute__((section(".ramcode")));

static FLASH_nSTATUS FLASH_enWriteMultiAux(uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType)__attribute__((section(".ramcode")));
#endif

static void FLASH_vFillBlock(uint32_t u32InitialAddress, uint32_t u32AddressOffset, void* pvData, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType)
{
    uint32_t u32Pos = 0UL;
    uint8_t* pu8PageData = 0UL;
    uint16_t* pu16PageData = 0UL;
    uint32_t* pu32PageData = 0UL;
    uint8_t* pu8Data = 0UL;
    uint16_t* pu16Data = 0UL;
    uint32_t* pu32Data = 0UL;

    switch(enVariableType)
    {
    case FLASH_enVARIABLE_BYTE:
        pu8Data = (uint8_t*) pvData;
        pu8PageData = (uint8_t*) u32InitialAddress;
        pu8PageData += u32AddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu8PageData = *pu8Data;
                pu8PageData += 1UL;
                pu8Data += 1UL;
            }
        }
        else
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu8PageData = *pu8Data;
                pu8PageData += 1UL;
            }
        }
    break;
    case FLASH_enVARIABLE_HALFWORD:
        pu16Data = (uint16_t*) pvData;
        pu16PageData = (uint16_t*) u32InitialAddress;
        pu16PageData += u32AddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu16PageData = *pu16Data;
                pu16PageData += 1UL;
                pu16Data += 1UL;
            }
        }
        else
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu16PageData = *pu16Data;
                pu16PageData += 1UL;
            }

        }
    break;
    case FLASH_enVARIABLE_WORD:
        pu32Data = (uint32_t*) pvData;
        pu32PageData = (uint32_t*) u32InitialAddress;
        pu32PageData += u32AddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu32PageData = *pu32Data;
                pu32PageData += 1UL;
                pu32Data += 1UL;
            }
        }
        else
        {
            for(u32Pos = 0UL ; u32Pos < u32Count; u32Pos++)
            {
                *pu32PageData = *pu32Data;
                pu32PageData += 1UL;
            }
        }
    break;
    default:
    break;
    }
}

static FLASH_nSTATUS FLASH_enWriteMultiAux(uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count, FLASH_nVARIABLE enVariableType, FLASH_nCONSTANT enConstantType)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0UL;
    uint32_t *pu32PageData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Dif = 0UL;
    uint32_t u32DifPage = 0UL;
    uint32_t u32OffsetVariable = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32AddressTotal = 0UL;
    uint32_t u32Offset = 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32AddressNextPage = 0UL;
    uint32_t u32TempValue = 0UL;
    uint32_t u32VariableSize = 0UL;
    uint32_t u32FlashSize = FLASH__u32GetSize();
    uint32_t u32FlashSectorSize = FLASH__u32GetSectorSize();

    u32VariableSize = 1UL;
    u32VariableSize <<= (uint32_t) enVariableType;

    u32AddressCurrent = u32Address;
    u32AddressCurrent &= ~(uint32_t) (u32VariableSize - 1UL);

    u32Offset = u32Count;
    u32Offset *= u32VariableSize;
    u32AddressTotal = u32AddressCurrent;
    u32AddressTotal += u32Offset;

    if((u32AddressTotal <= u32FlashSize) && (0UL != u32Count))
    {
#if defined (__TI_ARM__ )
        pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * u32FlashSectorSize));
#elif defined (__GNUC__ )
        pu32PageDataInitial = (uint32_t*) malloc( (size_t) (sizeof(uint8_t) * u32FlashSectorSize));
#endif
        if(0UL != (uint32_t) pu32PageDataInitial)
        {
            do
            {
                u32TempValue = u32FlashSectorSize;
                u32TempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent;
                u32AddressPage &= ~u32TempValue;
                /*Inicio de la pagina sigueinte de 1KB actual*/
                u32AddressNextPage = u32AddressPage;
                u32AddressNextPage += u32FlashSectorSize;
                /*Offset en nbit world de mi direccion actual*/
                u32OffsetVariable = u32AddressCurrent;
                u32OffsetVariable &= u32TempValue;
                u32OffsetVariable >>= (uint32_t) enVariableType;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Diferencia de mi final de pagina con mi direccion actual en nbit Worlds*/
                u32DifPage = u32AddressNextPage;
                u32DifPage -= u32AddressCurrent;
                u32DifPage >>= (uint32_t) enVariableType;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                u32TempValue = u32FlashSectorSize;
                u32TempValue >>= 2UL;
                for(u32Pos = 0UL; u32Pos < u32TempValue; u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData += 1UL;
                    pu32Address += 1UL;
                }
                /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                 * delimita en la pagina
                 */
                if(u32Count > u32DifPage)
                {
                    u32Dif = u32DifPage;
                }
                else
                {
                    u32Dif = u32Count;
                }
                FLASH_vFillBlock( (uint32_t) pu32PageDataInitial, u32OffsetVariable, (void*) pu32Data, u32Dif, enVariableType, enConstantType);

                FLASH__enPageErase(u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                u32TempValue /= 32UL;
                for(u32Pos = 0UL; u32Pos < u32TempValue; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf(pu32PageData, u32AddressPage, 32UL);
                    if(FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 = 0x80 = 128*/
                    pu32PageData += 32UL;
                }
                u32AddressCurrent = u32AddressPage;
                u32Count -= u32Dif;
            }while(0UL != u32Count);

            free(pu32PageDataInitial);
            pu32PageDataInitial = (uint32_t*) 0UL;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux(pu32Data, u32Address, u32Count, FLASH_enVARIABLE_WORD, FLASH_enCONSTANT_OFF);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux( (uint32_t*) pu16Data, u32Address, u32Count, FLASH_enVARIABLE_HALFWORD, FLASH_enCONSTANT_OFF);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux( (uint32_t*) pu8Data, u32Address, u32Count, FLASH_enVARIABLE_BYTE, FLASH_enCONSTANT_OFF);
    return enReturn;
}


FLASH_nSTATUS FLASH__enWriteMultiWorldConstant(uint32_t u32Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux(&u32Data, u32Address, u32Count, FLASH_enVARIABLE_WORD, FLASH_enCONSTANT_ON);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiHalfWorldConstant(uint16_t u16Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux( (uint32_t*) &u16Data, u32Address, u32Count, FLASH_enVARIABLE_HALFWORD, FLASH_enCONSTANT_ON);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiByteConstant(uint8_t u8Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteMultiAux( (uint32_t*) &u8Data, u32Address, u32Count, FLASH_enVARIABLE_BYTE, FLASH_enCONSTANT_ON);
    return enReturn;
}
