/**
 *
 * @file FLASH_Address.c
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Address.h>

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Size.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>


FLASH_nERROR FLASH__enSetAddress(FLASH_nMODULE enModuleArg, uint32_t u32AddressArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.u32Shift = FLASH_ADDRESS_R_OFFSET_BIT;
    stRegister.u32Mask = FLASH_ADDRESS_OFFSET_MASK;
    stRegister.uptrAddress = FLASH_ADDRESS_OFFSET;
    stRegister.u32Value = u32AddressArg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetAddress(FLASH_nMODULE enModuleArg, uint32_t* pu32AddressArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32AddressArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_ADDRESS_R_OFFSET_BIT;
        stRegister.u32Mask = FLASH_ADDRESS_OFFSET_MASK;
        stRegister.uptrAddress = FLASH_ADDRESS_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32AddressArg = stRegister.u32Value;
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enStartAddressToErase(FLASH_nMODULE enModuleArg, uint32_t u32AddressArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32SectorSizeReg;
    FLASH_nERROR enErrorReg;

    u32SectorSizeReg = 0UL;
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
        u32SectorSizeReg--;
        if(0UL != (u32AddressArg & u32SectorSizeReg))
        {
            enErrorReg = FLASH_enERROR_VALUE;
        }
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_ADDRESS_R_OFFSET_BIT;
        stRegister.u32Mask = FLASH_ADDRESS_OFFSET_MASK;
        stRegister.uptrAddress = FLASH_ADDRESS_OFFSET;
        stRegister.u32Value = (uint32_t) u32AddressArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}


