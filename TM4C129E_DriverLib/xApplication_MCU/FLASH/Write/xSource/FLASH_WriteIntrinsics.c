/**
 *
 * @file FLASH_WriteIntrinsics.c
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
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_WriteIntrinsics.h>

#include <xApplication_MCU/FLASH/xHeader/FLASH_InitProcess.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nERROR FLASH__enWriteWord(FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxAddressArg)
{
    FLASH_nERROR enErrorReg;
    UBase_t uxFlashSize;

    uxFlashSize = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &uxFlashSize);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxAddressArg, uxFlashSize);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enSetData(enModuleArg, uxDataArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxAddressArg &= ~ (UBase_t) 0x3UL;
        enErrorReg = FLASH__enSetAddress(enModuleArg, uxAddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_WORD_WRITE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteBuffer(FLASH_nMODULE enModuleArg, const UBase_t* puxData, UBase_t uxAddressArg, UBase_t* puxCount)
{
    FLASH_nERROR enErrorReg;

    UBase_t uxStartIndexReg;
    UBase_t uxFlashSizeReg;

    uxStartIndexReg = 0U;
    uxFlashSizeReg = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &uxFlashSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxAddressArg, uxFlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxStartIndexReg = uxAddressArg;
        uxStartIndexReg &= 0x7FUL;
        uxStartIndexReg >>= 2UL;
        enErrorReg = FLASH__enSetDataBuffer(enModuleArg, puxData, uxStartIndexReg, puxCount);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxAddressArg = ~(UBase_t) 0x7F;
        enErrorReg = FLASH__enSetAddress(enModuleArg, uxAddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_BUFFER_WRITE);
    }
    return (enErrorReg);
}
