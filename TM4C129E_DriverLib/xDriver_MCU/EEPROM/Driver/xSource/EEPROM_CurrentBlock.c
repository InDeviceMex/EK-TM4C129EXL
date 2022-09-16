/**
 *
 * @file EEPROM_CurrentBlock.c
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
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentBlock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enSetCurrentBlock(EEPROM_nMODULE enModuleArg, uint32_t u32CurrentBlockArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    stRegister.u32Shift = EEPROM_BLOCK_R_BLOCK_BIT;
    stRegister.u32Mask = EEPROM_BLOCK_BLOCK_MASK;
    stRegister.uptrAddress = EEPROM_BLOCK_OFFSET;
    stRegister.u32Value = u32CurrentBlockArg;
    enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetCurrentBlock(EEPROM_nMODULE enModuleArg, uint32_t* pu32CurrentBlockArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32CurrentBlockArg)
    {
        stRegister.u32Shift = EEPROM_BLOCK_R_BLOCK_BIT;
        stRegister.u32Mask = EEPROM_BLOCK_BLOCK_MASK;
        stRegister.uptrAddress = EEPROM_BLOCK_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *pu32CurrentBlockArg = stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}

