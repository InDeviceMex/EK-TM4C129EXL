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

FLASH_nERROR FLASH__enGetSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PP_R_SIZE_BIT;
        stRegister.uxMask = FLASH_PP_SIZE_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *puxSizeArg = (UBase_t)  stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInKBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg;
        uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetSize(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg++;
            uxSizeReg *= 2UL;
            *puxSizeInKBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetSizeInKBytes(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg *= 1024UL;
            *puxSizeInBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSectorSizeArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PP_R_MAINSS_BIT;
        stRegister.uxMask = FLASH_PP_MAINSS_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *puxSectorSizeArg = (UBase_t)  stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInKBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetSectorSize(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg = 1UL;
            uxSizeReg <<= uxSizeReg;
            *puxSizeInKBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetSectorSizeInKBytes(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg *= 1024UL;
            *puxSizeInBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enGetEEPROMSectorSize(FLASH_nMODULE enModuleArg, UBase_t* puxSectorSizeArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSectorSizeArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PP_R_EESS_BIT;
        stRegister.uxMask = FLASH_PP_EESS_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *puxSectorSizeArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetEEPROMSectorSizeInKBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInKBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInKBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetEEPROMSectorSize(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg = 1UL;
            uxSizeReg <<= uxSizeReg;
            *puxSizeInKBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetEEPROMSectorSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetEEPROMSectorSizeInKBytes(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg *= 1024UL;
            *puxSizeInBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSRAMSize(FLASH_nMODULE enModuleArg, UBase_t* puxSizeArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = SRAM_SIZE_R_SIZE_BIT;
        stRegister.uxMask = SRAM_SIZE_SIZE_MASK;
        stRegister.uptrAddress = SRAM_SIZE_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *puxSizeArg = (UBase_t) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetSRAMSizeInBytes(FLASH_nMODULE enModuleArg, UBase_t* puxSizeInBytesArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxSizeInBytesArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        UBase_t uxSizeReg = 0UL;
        enErrorReg = FLASH__enGetSRAMSize(enModuleArg, &uxSizeReg);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            uxSizeReg++;
            uxSizeReg *= 256UL;
            *puxSizeInBytesArg = (UBase_t) uxSizeReg;
        }
    }
    return (enErrorReg);
}
