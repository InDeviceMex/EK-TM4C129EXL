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

EEPROM_nERROR EEPROM__enSetCurrentBlock(EEPROM_nMODULE enModuleArg, UBase_t uxCurrentBlockArg)
{
    EEPROM_Register_t stRegister;
    stRegister.uxShift = EEPROM_BLOCK_R_BLOCK_BIT;
    stRegister.uxMask = EEPROM_BLOCK_BLOCK_MASK;
    stRegister.uptrAddress = EEPROM_BLOCK_OFFSET;
    stRegister.uxValue = uxCurrentBlockArg;

    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetCurrentBlock(EEPROM_nMODULE enModuleArg, UBase_t* puxCurrentBlockArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxCurrentBlockArg) ? EEPROM_enERROR_POINTER : EEPROM_enERROR_OK;

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        EEPROM_Register_t stRegister;
        stRegister.uxShift = EEPROM_BLOCK_R_BLOCK_BIT;
        stRegister.uxMask = EEPROM_BLOCK_BLOCK_MASK;
        stRegister.uptrAddress = EEPROM_BLOCK_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *puxCurrentBlockArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

