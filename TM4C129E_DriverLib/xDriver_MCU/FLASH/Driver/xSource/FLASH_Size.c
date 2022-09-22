/**
 *
 * @file FLASH_Size.c
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
 * @verbatim 22 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

FLASH_nERROR FLASH__enGetSize(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_PP_R_SIZE_BIT;
        stRegister.u32Mask = FLASH_PP_SIZE_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32SizeArg = (uint32_t)  stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSizeInKBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInKBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInKBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSize(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg++;
        u32SizeReg *= 2UL;
        *pu32SizeInKBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSizeInBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSizeInKBytes(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg *= 1024UL;
        *pu32SizeInBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSize(FLASH_nMODULE enModuleArg, uint32_t* pu32SectorSizeArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SectorSizeArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_PP_R_MAINSS_BIT;
        stRegister.u32Mask = FLASH_PP_MAINSS_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32SectorSizeArg = (uint32_t)  stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSizeInKBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInKBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInKBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSectorSize(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg = 1UL;
        u32SizeReg <<= u32SizeReg;
        *pu32SizeInKBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSizeInBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSectorSizeInKBytes(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg *= 1024UL;
        *pu32SizeInBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enGetEEPROMSectorSize(FLASH_nMODULE enModuleArg, uint32_t* pu32SectorSizeArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SectorSizeArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_PP_R_EESS_BIT;
        stRegister.u32Mask = FLASH_PP_EESS_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32SectorSizeArg = (uint32_t) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetEEPROMSectorSizeInKBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInKBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInKBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetEEPROMSectorSize(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg = 1UL;
        u32SizeReg <<= u32SizeReg;
        *pu32SizeInKBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetEEPROMSectorSizeInBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetEEPROMSectorSizeInKBytes(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg *= 1024UL;
        *pu32SizeInBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}



FLASH_nERROR FLASH__enGetSRAMSize(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = SRAM_SIZE_R_SIZE_BIT;
        stRegister.u32Mask = SRAM_SIZE_SIZE_MASK;
        stRegister.uptrAddress = SRAM_SIZE_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32SizeArg = (uint32_t) stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSRAMSizeInBytes(FLASH_nMODULE enModuleArg, uint32_t* pu32SizeInBytesArg)
{
    uint32_t u32SizeReg;
    FLASH_nERROR enErrorReg;

    u32SizeReg = 0UL;
    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32SizeInBytesArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enGetSRAMSize(enModuleArg, &u32SizeReg);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32SizeReg++;
        u32SizeReg *= 256UL;
        *pu32SizeInBytesArg = (uint32_t) u32SizeReg;
    }
    return (enErrorReg);
}


