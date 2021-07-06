/*
 * FLASH_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Write.h>

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteIntrinsics.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH_enIsDataErased, ".ramcode")
#pragma  CODE_SECTION(FLASH_vSetData, ".ramcode")
#pragma  CODE_SECTION(FLASH_enWriteAux, ".ramcode")

static FLASH_nSTATUS FLASH_enIsDataErased(uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType);
static void FLASH_vSetData(uint32_t* pu32DataOut, uint32_t u32Data, uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType);
static FLASH_nSTATUS FLASH_enWriteAux(uint32_t u32Data, uint32_t u32Address, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType);

#elif defined (__GNUC__ )

static FLASH_nSTATUS FLASH_enIsDataErased(uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType) __attribute__((section(".ramcode")));
static void FLASH_vSetData(uint32_t* pu32DataOut, uint32_t u32Data, uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType) __attribute__((section(".ramcode")));
static FLASH_nSTATUS FLASH_enWriteAux(uint32_t u32Data, uint32_t u32Address, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType)__attribute__((section(".ramcode")));

#endif


static void FLASH_vSetData(uint32_t* pu32DataOut, uint32_t u32Data, uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType)
{

    static uint32_t u32AuxValue = 0UL;
    uint8_t* pu8DataValue = 0UL;
    uint16_t* pu16DataValue = 0UL;
    uint32_t* pu32DataValue = 0UL;

    uint8_t u8DataValue = 0U;
    uint16_t u16DataValue = 0U;
    switch(enVariableType)
    {
        case FLASH_enVARIABLE_BYTE:
            u32AuxValue = *((uint32_t*) u32AddressBase);

            pu8DataValue = (uint8_t*) &u32AuxValue;
            pu8DataValue += u32AddressOffset;
            u8DataValue = (uint8_t) u32Data;
            *(pu8DataValue) = u8DataValue;

            *pu32DataOut = u32AuxValue;
        break;
        case FLASH_enVARIABLE_HALFWORD:
            u32AuxValue = *((uint32_t*) u32AddressBase);

            pu16DataValue = (uint16_t*) &u32AuxValue;
            pu16DataValue += u32AddressOffset;
            u16DataValue = (uint16_t) u32Data;
            *(pu16DataValue) = u16DataValue;

            *pu32DataOut = u32AuxValue;

        break;
        case FLASH_enVARIABLE_WORD:
            u32AuxValue = *((uint32_t*) u32AddressBase);

            pu32DataValue = (uint32_t*) &u32AuxValue;
            pu32DataValue += u32AddressOffset;
            *(pu32DataValue) = u32Data;

            *pu32DataOut = u32AuxValue;
        break;
        default:
        break;
    }
}

static FLASH_nSTATUS FLASH_enIsDataErased(uint32_t u32AddressBase, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType)
{
    FLASH_nSTATUS enStatus = FLASH_enERROR;
    uint8_t* pu8DataValue = 0UL;
    uint16_t* pu16DataValue = 0UL;
    uint32_t* pu32DataValue = 0UL;

    switch(enVariableType)
    {
        case FLASH_enVARIABLE_BYTE:
            pu8DataValue = (uint8_t*) u32AddressBase;
            pu8DataValue += u32AddressOffset;
            if((uint8_t) FLASH_ERASEBYTE == *(pu8DataValue))
            {
                enStatus = FLASH_enOK;
            }
        break;
        case FLASH_enVARIABLE_HALFWORD:
            pu16DataValue = (uint16_t*) u32AddressBase;
            pu16DataValue += u32AddressOffset;
            if((uint16_t) FLASH_ERASEHALFWORLD == *(pu16DataValue))
            {
                enStatus = FLASH_enOK;
            }
        break;
        case FLASH_enVARIABLE_WORD:
            pu32DataValue = (uint32_t*) u32AddressBase;
            pu32DataValue += u32AddressOffset;
            if((uint32_t) FLASH_ERASEWORLD == *(pu32DataValue))
            {
                enStatus = FLASH_enOK;
            }
        break;
        default:
            enStatus = FLASH_enERROR;
        break;
    }
    return enStatus;
}

static FLASH_nSTATUS FLASH_enWriteAux(uint32_t u32Data, uint32_t u32Address, uint32_t u32AddressOffset, FLASH_nVARIABLE enVariableType)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    FLASH_nSTATUS enDataErased = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0UL;
    uint32_t *pu32PageData = 0UL;
    uint32_t *pu32AuxData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32OffsetWorld = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32TempValue = 0UL;
    uint32_t u32FlashSize = FLASH__u32GetSize();
    uint32_t u32FlashSectorSize = FLASH__u32GetSectorSize();
    static uint32_t u32DataAux = 0UL;

    u32AddressCurrent = u32Address;
    u32AddressCurrent &= ~(uint32_t) 0x3UL;

    if(u32AddressCurrent < u32FlashSize)
    {
        enDataErased = FLASH_enIsDataErased(u32AddressCurrent, u32AddressOffset, enVariableType);
        if(FLASH_enOK == enDataErased)
        {
            FLASH_vSetData( &u32DataAux, u32Data, u32AddressCurrent, u32AddressOffset, enVariableType);
            enReturn = FLASH__enWrite(u32DataAux, u32Address);
        }
        else
        {
#if defined (__TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * u32FlashSectorSize));
#elif defined (__GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc( (size_t) (sizeof(uint8_t) * u32FlashSectorSize));
#endif
            if(0UL != (uint32_t) pu32PageDataInitial)
            {
                u32TempValue = u32FlashSectorSize;
                u32TempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent;
                u32AddressPage &= ~u32TempValue;
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld = u32AddressCurrent;
                u32OffsetWorld &= u32TempValue;
                u32OffsetWorld >>= 2UL;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
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
                pu32PageData = pu32PageDataInitial;
                pu32PageData += u32OffsetWorld;
                pu32AuxData = pu32PageData;
                FLASH_vSetData(pu32AuxData, u32Data, (uint32_t) pu32PageData, u32AddressOffset, enVariableType);

                FLASH__enPageErase(u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos = 0UL; u32Pos < 8UL; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf(pu32PageData, u32AddressPage, 32UL);
                    if(FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 = 0x80 = 128*/
                    pu32PageData += 32UL;
                }
                free(pu32PageDataInitial);
                pu32PageDataInitial = (uint32_t*) 0UL;
            }
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteWorld (uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enWriteAux(u32Data, u32Address, 0UL, FLASH_enVARIABLE_WORD);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteHalfWorld (uint16_t u16Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32AddressOffset = 0UL;

    u32AddressOffset = u32Address;
    u32AddressOffset &= 2UL;
    u32AddressOffset >>= 1UL;

    enReturn = FLASH_enWriteAux( (uint32_t) u16Data, u32Address, u32AddressOffset, FLASH_enVARIABLE_HALFWORD);
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteByte (uint8_t u8Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32AddressOffset = 0UL;

    u32AddressOffset = u32Address;
    u32AddressOffset &= 3UL;
    enReturn = FLASH_enWriteAux( (uint32_t) u8Data, u32Address, u32AddressOffset, FLASH_enVARIABLE_BYTE);
    return enReturn;
}
