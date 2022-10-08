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

static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg);

#elif defined (__GNUC__ )

static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg) __attribute__((section(".ramcode")));

#endif


static FLASH_nERROR FLASH_enWriteAux(FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg, FLASH_nVARIABLE enVariableTypeArg)
{
    FLASH_nERROR enErrorReg = FLASH_enERROR_UNDEF;
    UBase_t *puxPageData = 0UL;
    UBase_t *puxAuxData = 0UL;
    UBase_t *puxAddress = 0UL;
    UBase_t uxPos = 0UL;
    UBase_t uxOffsetWorld = 0UL;
    UBase_t uxAddressCurrent = 0UL;
    UBase_t uxAddressPage = 0UL;
    UBase_t uxTempValue = 0UL;


    static UBase_t uxDataAux;
    UBase_t *puxPageDataInitial;
    UBase_t uxSectorSizeReg;
    UBase_t uxAddressAligned;
    UBase_t uxFlashSize;
    UBase_t uxCounter;
    FLASH_nERASED enErasedReg;

    enErasedReg = FLASH_enERASED_YES;
    uxFlashSize = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &uxFlashSize);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxAddressArg, uxFlashSize);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH_enIsDataErased(uxAddressArg, enVariableTypeArg, &enErasedReg);
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxAddressAligned = uxAddressArg;
        uxAddressAligned &= 0x3UL;
        if(FLASH_enERASED_YES == enErasedReg)
        {
            uxDataAux = *((UBase_t*) uxAddressAligned);
            enErrorReg = FLASH__enReplaceData((void*) &uxDataAux, uxDataArg, uxAddressArg, enVariableTypeArg);
            if(FLASH_enERROR_OK == enErrorReg)
            {
                enErrorReg = FLASH__enWriteWord(enModuleArg, uxDataAux, uxAddressAligned);
            }
        }
        else
        {
            uxSectorSizeReg = 0UL;
            puxPageDataInitial = (UBase_t*) 0UL;
            enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &uxSectorSizeReg);
            if(FLASH_enERROR_OK == enErrorReg)
            {
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
                puxPageDataInitial = (UBase_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * uxSectorSizeReg));
#elif defined (__GNUC__ )
                puxPageDataInitial = (UBase_t*) malloc( (size_t) (sizeof(uint8_t) * uxSectorSizeReg));
#endif
                if(0UL == (uintptr_t) puxPageDataInitial)
                {
                    enErrorReg = FLASH_enERROR_POINTER;
                }
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                uxTempValue = uxSectorSizeReg;
                uxTempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                uxAddressPage = uxAddressCurrent;
                uxAddressPage &= ~uxTempValue;
                /*Offset en 32bit world de mi direccion actual*/
                uxOffsetWorld = uxAddressCurrent;
                uxOffsetWorld &= uxTempValue;
                uxOffsetWorld >>= 2UL;
                /*Bufferactual = Buffer Incial*/
                puxPageData = puxPageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                puxAddress = (UBase_t*) uxAddressPage;

                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                uxTempValue = uxSectorSizeReg;
                uxTempValue >>= 2UL;
                for(uxPos = 0UL; uxPos < uxTempValue; uxPos++)
                {
                    *puxPageData = *puxAddress;
                    puxPageData += 1UL;
                    puxAddress += 1UL;
                }
                puxPageData = puxPageDataInitial;
                puxPageData += uxOffsetWorld;
                puxAuxData = puxPageData;
                enErrorReg = FLASH__enReplaceData((void*) puxAuxData, uxDataArg, (UBase_t) puxPageData, enVariableTypeArg);
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                enErrorReg = FLASH__enPageEraseByAddress(enModuleArg, uxAddressPage);
            }
            if(FLASH_enERROR_OK == enErrorReg)
            {
                puxPageData = puxPageDataInitial;
                uxCounter = 32UL;
                for(uxPos = 0UL; uxPos < 8UL; uxPos++)
                {
                    enErrorReg = FLASH__enWriteBuffer(enModuleArg, (const UBase_t*) puxPageData, uxAddressPage, &uxCounter);
                    if(FLASH_enERROR_OK != enErrorReg)
                    {
                        break;
                    }
                    uxAddressPage += 0x80UL;/*32World = 4Bytes*32 = 0x80 = 128*/
                    puxPageData += 32UL;
                }
            }
            if(0UL != (uintptr_t) puxPageDataInitial)
            {
                free(puxPageDataInitial);
                puxPageDataInitial = (UBase_t*) 0UL;
            }
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteWorld (FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, uxDataArg, uxAddressArg, FLASH_enVARIABLE_WORD);
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteHalfWorld (FLASH_nMODULE enModuleArg, uint16_t u16DataArg, UBase_t uxAddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, (UBase_t) u16DataArg, uxAddressArg, FLASH_enVARIABLE_HALFWORD);
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteByte (FLASH_nMODULE enModuleArg, uint8_t u8DataArg, UBase_t uxAddressArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH_enWriteAux(enModuleArg, (UBase_t) u8DataArg, uxAddressArg, FLASH_enVARIABLE_BYTE);
    return (enErrorReg);
}
