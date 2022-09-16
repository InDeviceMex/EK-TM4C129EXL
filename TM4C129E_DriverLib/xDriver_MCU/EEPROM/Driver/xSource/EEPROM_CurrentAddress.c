/**
 *
 * @file EEPROM_CurrentAddress.c
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
 * @verbatim 15 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentAddress.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_WorldCount.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentBlock.h>
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentOffset.h>

EEPROM_nERROR EEPROM__enSetCurrentAddress(EEPROM_nMODULE enModuleArg, uint32_t u32CurrentAddressArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32MaxAddressReg;
    uint32_t u32BlockReg;
    uint32_t u32OffsetReg;

    u32MaxAddressReg = 0UL;
    enErrorReg = EEPROM__enGetWordCount(EEPROM_enMODULE_0 , &u32MaxAddressReg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        u32MaxAddressReg <<= 2UL;
        if(u32MaxAddressReg > u32CurrentAddressArg)
        {
            u32BlockReg = u32CurrentAddressArg;
            u32BlockReg >>= 6UL;
            enErrorReg = EEPROM__enSetCurrentBlock(enModuleArg, u32BlockReg);
            if(EEPROM_enERROR_OK == enErrorReg)
            {
                u32OffsetReg = u32CurrentAddressArg;
                u32OffsetReg >>= 2UL;
                u32OffsetReg &= 0xFUL;
                enErrorReg = EEPROM__enSetCurrentOffset(enModuleArg, u32OffsetReg);
            }
        }
        else
        {
            enErrorReg = EEPROM_enERROR_RANGE;
        }
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetCurrentAddress(EEPROM_nMODULE enModuleArg, uint32_t* pu32CurrentAddressArg)
{
    EEPROM_nERROR enErrorReg;
    uint32_t u32CurrentAddressReg;
    uint32_t u32BlockReg;
    uint32_t u32OffsetReg;

    if(0UL != (uintptr_t) pu32CurrentAddressArg)
    {
        u32BlockReg = 0UL;
        enErrorReg = EEPROM__enGetCurrentBlock(enModuleArg, &u32BlockReg);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            u32BlockReg <<= 6UL;
            u32OffsetReg = 0UL;
            enErrorReg = EEPROM__enGetCurrentOffset(enModuleArg, &u32OffsetReg);
            if(EEPROM_enERROR_OK == enErrorReg)
            {
                u32OffsetReg <<= 2UL;
                u32CurrentAddressReg = (uint32_t) u32BlockReg;
                u32CurrentAddressReg |= u32OffsetReg;
                *pu32CurrentAddressArg = (uint32_t) u32CurrentAddressReg;
            }
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}

