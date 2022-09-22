/**
 *
 * @file FLASH_Erase.c
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
#include <xApplication_MCU/FLASH/xHeader/FLASH_Erase.h>

#include <xApplication_MCU/FLASH/xHeader/FLASH_InitProcess.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nERROR FLASH__enPageEraseByAddress(FLASH_nMODULE enModuleArg, uint32_t u32AddressArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32FlashSizeReg;
    uint32_t u32SectorSizeReg;

    u32FlashSizeReg = 0UL;
    u32SectorSizeReg = 0UL;
    enErrorReg = FLASH__enGetSizeInBytes(enModuleArg, &u32FlashSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32AddressArg, u32FlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &u32SectorSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(0UL == u32SectorSizeReg)
        {
            enErrorReg = FLASH_enERROR_VALUE;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SectorSizeReg--;
        u32AddressArg &= u32SectorSizeReg;
        enErrorReg = FLASH__enStartAddressToErase(enModuleArg, u32AddressArg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_PAGE_ERASE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enPageEraseBySector(FLASH_nMODULE enModuleArg, uint32_t u32SectorArg)
{
    FLASH_nERROR enErrorReg;
    uint32_t u32FlashSizeReg;
    uint32_t u32AddressReg;
    uint32_t u32SectorSizeReg;

    u32FlashSizeReg = 0UL;
    u32SectorSizeReg = 0UL;
    u32AddressReg = 0UL;
    enErrorReg = FLASH__enGetSectorSizeInBytes(enModuleArg, &u32SectorSizeReg);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        if(0UL == u32SectorSizeReg)
        {
            enErrorReg = FLASH_enERROR_VALUE;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSizeInBytes(enModuleArg, &u32FlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32AddressReg = u32SectorArg;
        u32AddressReg *= u32SectorSizeReg;
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32AddressReg, u32FlashSizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enStartAddressToErase(enModuleArg, u32AddressReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_PAGE_ERASE);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enMassErase(FLASH_nMODULE enModuleArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enInitProcessAndWait(enModuleArg, FLASH_enPROCESS_MASS_ERASE);
    return (enErrorReg);
}
