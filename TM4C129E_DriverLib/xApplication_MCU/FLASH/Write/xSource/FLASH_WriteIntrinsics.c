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

FLASH_nERROR FLASH__enWriteWord(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32AddressArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32FlashSize;

    u32FlashSize = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &u32FlashSize);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32AddressArg, u32FlashSize);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enSetData(enModuleArg, u32DataArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32AddressArg &= ~ (uint32_t) 0x3UL;
        enErrorReg = FLASH__enSetAddress(enModuleArg, u32AddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_WORD_WRITE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enWriteBuffer(FLASH_nMODULE enModuleArg, const uint32_t* pu32Data, uint32_t u32AddressArg, uint32_t* pu32Count)
{
    FLASH_nERROR enErrorReg;

    uint32_t u32StartIndexReg;
    uint32_t u32FlashSizeReg;

    u32StartIndexReg = 0U;
    u32FlashSizeReg = 0UL;
    enErrorReg = FLASH__enGetSize(enModuleArg, &u32FlashSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32AddressArg, u32FlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32StartIndexReg = u32AddressArg;
        u32StartIndexReg &= 0x7FUL;
        u32StartIndexReg >>= 2UL;
        enErrorReg = FLASH__enSetDataBuffer(enModuleArg, (uint32_t*) pu32Data, u32StartIndexReg, pu32Count);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32AddressArg = ~(uint32_t) 0x7F;
        enErrorReg = FLASH__enSetAddress(enModuleArg, u32AddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_BUFFER_WRITE);
    }
    return (enErrorReg);
}
