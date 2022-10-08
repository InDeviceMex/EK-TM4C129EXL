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

EEPROM_nERROR EEPROM__enSetCurrentAddress(EEPROM_nMODULE enModuleArg, UBase_t uxCurrentAddressArg)
{
    EEPROM_nERROR enErrorReg;
    UBase_t uxMaxAddressReg;
    UBase_t uxBlockReg;
    UBase_t uxOffsetReg;

    uxMaxAddressReg = 0UL;
    enErrorReg = EEPROM__enGetWordCount(EEPROM_enMODULE_0 , &uxMaxAddressReg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxMaxAddressReg <<= 2UL;
        if(uxMaxAddressReg <= uxCurrentAddressArg)
        {
            enErrorReg = EEPROM_enERROR_RANGE;
        }
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxBlockReg = uxCurrentAddressArg;
        uxBlockReg >>= 6UL;
        enErrorReg = EEPROM__enSetCurrentBlock(enModuleArg, uxBlockReg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = uxCurrentAddressArg;
        uxOffsetReg >>= 2UL;
        uxOffsetReg &= 0xFUL;
        enErrorReg = EEPROM__enSetCurrentOffset(enModuleArg, uxOffsetReg);
    }

    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetCurrentAddress(EEPROM_nMODULE enModuleArg, UBase_t* puxCurrentAddressArg)
{
    EEPROM_nERROR enErrorReg;
    UBase_t uxCurrentAddressReg;
    UBase_t uxBlockReg;
    UBase_t uxOffsetReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) puxCurrentAddressArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxBlockReg = 0UL;
        enErrorReg = EEPROM__enGetCurrentBlock(enModuleArg, &uxBlockReg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxBlockReg <<= 6UL;
        uxOffsetReg = 0UL;
        enErrorReg = EEPROM__enGetCurrentOffset(enModuleArg, &uxOffsetReg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        uxOffsetReg <<= 2UL;
        uxCurrentAddressReg = (UBase_t) uxBlockReg;
        uxCurrentAddressReg |= uxOffsetReg;
        *puxCurrentAddressArg = (UBase_t) uxCurrentAddressReg;
    }
    return (enErrorReg);
}

