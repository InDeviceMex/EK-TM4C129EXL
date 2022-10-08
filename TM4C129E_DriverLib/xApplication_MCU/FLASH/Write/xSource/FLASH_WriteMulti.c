/**
 *
 * @file FLASH_WriteMulti.c
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
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_WriteMulti.h>

#include <stdlib.h>
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_WriteIntrinsics.h>
#include <xApplication_MCU/FLASH/xHeader/FLASH_Erase.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

#if 0
#if defined (__TI_ARM__ ) || defined (__MSP430__ )

#pragma  CODE_SECTION(FLASH_vFillBlock, ".ramcode")
#pragma  CODE_SECTION(FLASH_enWriteMultiAux, ".ramcode")

static void FLASH_vFillBlock(UBase_t uxInitialAddress,
                             UBase_t uxAddressOffset,
                             void* pvData,
                             UBase_t uxCount,
                             FLASH_nVARIABLE enVariableType,
                             FLASH_nCONSTANT enConstantType);
static FLASH_nERROR FLASH_enWriteMultiAux(UBase_t* puxData,
                                           UBase_t uxAddress,
                                           UBase_t uxCount,
                                           FLASH_nVARIABLE enVariableType,
                                           FLASH_nCONSTANT enConstantType);

#elif defined (__GNUC__ )
__attribute__((section(".ramcode")))
static void FLASH_vFillBlock(UBase_t uxInitialAddress,
                             UBase_t uxAddressOffset,
                             void* pvData,
                             UBase_t uxCount,
                             FLASH_nVARIABLE enVariableType,
                             FLASH_nCONSTANT enConstantType);
__attribute__((section(".ramcode")))
static FLASH_nERROR FLASH_enWriteMultiAux(UBase_t* puxData,
                                           UBase_t uxAddress,
                                           UBase_t uxCount,
                                           FLASH_nVARIABLE enVariableType,
                                           FLASH_nCONSTANT enConstantType);
#endif

static void FLASH_vFillBlock(UBase_t uxInitialAddress,
                             UBase_t uxAddressOffset,
                             void* pvData,
                             UBase_t uxCount,
                             FLASH_nVARIABLE enVariableType,
                             FLASH_nCONSTANT enConstantType)
{
    UBase_t uxPos = 0UL;
    uint8_t* pu8PageData = 0UL;
    uint16_t* pu16PageData = 0UL;
    UBase_t* puxPageData = 0UL;
    uint8_t* pu8Data = 0UL;
    uint16_t* pu16Data = 0UL;
    UBase_t* puxData = 0UL;

    switch(enVariableType)
    {
    case FLASH_enVARIABLE_BYTE:
        pu8Data = (uint8_t*) pvData;
        pu8PageData = (uint8_t*) uxInitialAddress;
        pu8PageData += uxAddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *pu8PageData = *pu8Data;
                pu8PageData += 1UL;
                pu8Data += 1UL;
            }
        }
        else
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *pu8PageData = *pu8Data;
                pu8PageData += 1UL;
            }
        }
    break;
    case FLASH_enVARIABLE_HALFWORD:
        pu16Data = (uint16_t*) pvData;
        pu16PageData = (uint16_t*) uxInitialAddress;
        pu16PageData += uxAddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *pu16PageData = *pu16Data;
                pu16PageData += 1UL;
                pu16Data += 1UL;
            }
        }
        else
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *pu16PageData = *pu16Data;
                pu16PageData += 1UL;
            }

        }
    break;
    case FLASH_enVARIABLE_WORD:
        puxData = (UBase_t*) pvData;
        puxPageData = (UBase_t*) uxInitialAddress;
        puxPageData += uxAddressOffset;
        if(FLASH_enCONSTANT_OFF == enConstantType)
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *puxPageData = *puxData;
                puxPageData += 1UL;
                puxData += 1UL;
            }
        }
        else
        {
            for(uxPos = 0UL ; uxPos < uxCount; uxPos++)
            {
                *puxPageData = *puxData;
                puxPageData += 1UL;
            }
        }
    break;
    default:
    break;
    }
}

static FLASH_nERROR FLASH_enWriteMultiAux(UBase_t* puxData,
                                           UBase_t uxAddress,
                                           UBase_t uxCount,
                                           FLASH_nVARIABLE enVariableType,
                                           FLASH_nCONSTANT enConstantType)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_UNDEF;
    UBase_t *puxPageDataInitial = 0UL;
    UBase_t *puxPageData = 0UL;
    UBase_t *puxAddress = 0UL;
    UBase_t uxPos = 0UL;
    UBase_t uxDif = 0UL;
    UBase_t uxDifPage = 0UL;
    UBase_t uxOffsetVariable = 0UL;
    UBase_t uxAddressCurrent = 0UL;
    UBase_t uxAddressTotal = 0UL;
    UBase_t uxOffset = 0UL;
    UBase_t uxAddressPage = 0UL;
    UBase_t uxAddressNextPage = 0UL;
    UBase_t uxTempValue = 0UL;
    UBase_t uxVariableSize = 0UL;
    UBase_t uxFlashSize = FLASH__uxGetSize();
    UBase_t uxFlashSectorSize = FLASH__uxGetSectorSize();

    uxVariableSize = 1UL;
    uxVariableSize <<= (UBase_t) enVariableType;

    uxAddressCurrent = uxAddress;
    uxAddressCurrent &= ~(UBase_t) (uxVariableSize - 1UL);

    uxOffset = uxCount;
    uxOffset *= uxVariableSize;
    uxAddressTotal = uxAddressCurrent;
    uxAddressTotal += uxOffset;

    if((uxAddressTotal <= uxFlashSize) && (0UL != uxCount))
    {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        puxPageDataInitial =
                (UBase_t*) memalign( (size_t) 4UL,
                                      (size_t) (sizeof(uint8_t) * uxFlashSectorSize));
#elif defined (__GNUC__ )
        puxPageDataInitial =
                (UBase_t*) malloc( (size_t) (sizeof(uint8_t) * uxFlashSectorSize));
#endif
        if(0UL != (UBase_t) puxPageDataInitial)
        {
            do
            {
                uxTempValue = uxFlashSectorSize;
                uxTempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                uxAddressPage = uxAddressCurrent;
                uxAddressPage &= ~uxTempValue;
                /*Inicio de la pagina sigueinte de 1KB actual*/
                uxAddressNextPage = uxAddressPage;
                uxAddressNextPage += uxFlashSectorSize;
                /*Offset en nbit world de mi direccion actual*/
                uxOffsetVariable = uxAddressCurrent;
                uxOffsetVariable &= uxTempValue;
                uxOffsetVariable >>= (UBase_t) enVariableType;
                /*Bufferactual = Buffer Incial*/
                puxPageData = puxPageDataInitial;
                /*Diferencia de mi final de pagina con mi direccion actual en nbit Worlds*/
                uxDifPage = uxAddressNextPage;
                uxDifPage -= uxAddressCurrent;
                uxDifPage >>= (UBase_t) enVariableType;
                /*Puntero al inico de la page actual de 1KB*/
                puxAddress = (UBase_t*) uxAddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                uxTempValue = uxFlashSectorSize;
                uxTempValue >>= 2UL;
                for(uxPos = 0UL; uxPos < uxTempValue; uxPos++)
                {
                    *puxPageData = *puxAddress;
                    puxPageData += 1UL;
                    puxAddress += 1UL;
                }
                /*Identificar si el contador actual sigue sienod mayor
                 * al limite de mi pagina o se
                 * delimita en la pagina
                 */
                if(uxCount > uxDifPage)
                {
                    uxDif = uxDifPage;
                }
                else
                {
                    uxDif = uxCount;
                }
                FLASH_vFillBlock( (UBase_t) puxPageDataInitial, uxOffsetVariable,
                                  (void*) puxData, uxDif, enVariableType, enConstantType);

                FLASH__enPageErase(uxAddressPage);
                puxPageData = puxPageDataInitial;
                uxTempValue /= 32UL;
                for(uxPos = 0UL; uxPos < uxTempValue; uxPos++)
                {
                    enStatusReg = FLASH__enWriteBuf(puxPageData, uxAddressPage, 32UL);
                    if(FLASH_enERROR_UNDEF == enStatusReg)
                    {
                        break;
                    }
                    uxAddressPage += 0x80UL;/*32World = 4Bytes*32 = 0x80 = 128*/
                    puxPageData += 32UL;
                }
                uxAddressCurrent = uxAddressPage;
                uxCount -= uxDif;
            }while(0UL != uxCount);

            free(puxPageDataInitial);
            puxPageDataInitial = (UBase_t*) 0UL;
        }
    }
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiWorld(UBase_t* puxData,
                                       UBase_t uxAddress,
                                       UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux(puxData, uxAddress,
                         uxCount, FLASH_enVARIABLE_WORD, FLASH_enCONSTANT_OFF);
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data,
                                           UBase_t uxAddress,
                                           UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux( (UBase_t*) pu16Data, uxAddress,
                          uxCount, FLASH_enVARIABLE_HALFWORD, FLASH_enCONSTANT_OFF);
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiByte(uint8_t* pu8Data,
                                      UBase_t uxAddress,
                                      UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux( (UBase_t*) pu8Data, uxAddress,
                          uxCount, FLASH_enVARIABLE_BYTE, FLASH_enCONSTANT_OFF);
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiWorldConstant(UBase_t uxData,
                                               UBase_t uxAddress,
                                               UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux(&uxData, uxAddress,
                         uxCount, FLASH_enVARIABLE_WORD, FLASH_enCONSTANT_ON);
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiHalfWorldConstant(uint16_t u16Data,
                                                   UBase_t uxAddress,
                                                   UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux( (UBase_t*) &u16Data, uxAddress,
                          uxCount, FLASH_enVARIABLE_HALFWORD, FLASH_enCONSTANT_ON);
    return (enStatusReg);
}

FLASH_nERROR FLASH__enWriteMultiByteConstant(uint8_t u8Data,
                                              UBase_t uxAddress,
                                              UBase_t uxCount)
{
    FLASH_nERROR enStatusReg = FLASH_enERROR_OK;
    enStatusReg = FLASH_enWriteMultiAux( (UBase_t*) &u8Data, uxAddress,
                              uxCount, FLASH_enVARIABLE_BYTE, FLASH_enCONSTANT_ON);
    return (enStatusReg);
}
#endif
