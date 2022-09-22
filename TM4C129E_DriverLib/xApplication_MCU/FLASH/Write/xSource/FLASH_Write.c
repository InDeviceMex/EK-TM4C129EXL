/**
 *
 * @file FLASH_Write.c
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_Write.h>

#include <stdlib.h>
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_WriteIntrinsics.h>
#include <xApplication_MCU/FLASH/xHeader/FLASH_Erase.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>


#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH_enWriteAux, ".ramcode")

static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg);

#elif defined (__GNUC__ )

static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg) __attribute__((section(".ramcode")));

#endif


static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg = FLASH_enERROR_UNDEF;
    uint32_t *pu32PageData = 0UL;
    uint32_t *pu32AuxData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32OffsetWorld = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32TempValue = 0UL;


    static uint32_t u32DataAux;
    uint32_t *pu32PageDataInitial;
    uint32_t u32SectorSizeReg;
    uint32_t u32AddressAligned;
    uint32_t u32FlashSize;
    uint32_t u32Counter;
    FLASH_nERASED enErasedReg;

    enErasedReg = FLASH_enERASED_YES;
    u32FlashSize = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &u32FlashSize);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32AddressArg, u32FlashSize);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH_enIsDataErased(u32AddressArg, enVariableTypeArg, &enErasedReg);
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32AddressAligned = u32AddressArg;
        u32AddressAligned &= 0x3UL;
        if(FLASH_enERASED_YES == enErasedReg)
        {
            u32DataAux = *((uint32_t*) u32AddressAligned);
            enErrorReg = FLASH__enReplaceData((void*) &u32DataAux, u32DataArg, u32AddressArg, enVariableTypeArg);
            if(FLASH_enERROR_OK == enErrorReg)
            {
                enErrorReg = FLASH__enWriteWord(enModuleArg, u32DataAux, u32AddressAligned);
            }
        }
        else
        {
            u32SectorSizeReg = 0UL;
            pu32PageDataInitial = (uint32_t*) 0UL;
            enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &u32SectorSizeReg);
            if(FLASH_enERROR_OK == enErrorReg)
            {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
                pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * u32SectorSizeReg));
#elif defined (__GNUC__ )
                pu32PageDataInitial = (uint32_t*) malloc( (size_t) (sizeof(uint8_t) * u32SectorSizeReg));
#endif
                if(0UL == (uintptr_t) pu32PageDataInitial)
                {
                    enErrorReg = FLASH_enERROR_POINTER;
                }
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                u32TempValue = u32SectorSizeReg;
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
                u32TempValue = u32SectorSizeReg;
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
                enErrorReg = FLASH__enReplaceData((void*) pu32AuxData, u32DataArg, (uint32_t) pu32PageData, enVariableTypeArg);
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                enErrorReg = FLASH__enPageEraseByAddress(enModuleArg, u32AddressPage);
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                pu32PageData = pu32PageDataInitial;
                u32Counter = 32UL;
                for(u32Pos = 0UL; u32Pos < 8UL; u32Pos++)
                {
                    enErrorReg = FLASH__enWriteBuffer(enModuleArg, (const uint32_t*) pu32PageData, u32AddressPage, &u32Counter);
                    if(FLASH_enERROR_OK != enErrorReg)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 = 0x80 = 128*/
                    pu32PageData += 32UL;
                }
            }
            if(0UL != (uintptr_t) pu32PageDataInitial)
            {
                free(pu32PageDataInitial);
                pu32PageDataInitial = (uint32_t*) 0UL;
            }
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteWorld (FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, u32DataArg, u32AddressArg, FLASH_enVARIABLE_WORD);
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteHalfWorld (FLASH_nMODULE enModuleArg, uint16_t u16DataArg, uint32_t u32AddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, (uint32_t) u16DataArg, u32AddressArg, FLASH_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteByte (FLASH_nMODULE enModuleArg, uint8_t u8DataArg, uint32_t u32AddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, (uint32_t) u8DataArg, u32AddressArg, FLASH_enVARIABLE_BYTE);
    return (enErrorReg);
}
