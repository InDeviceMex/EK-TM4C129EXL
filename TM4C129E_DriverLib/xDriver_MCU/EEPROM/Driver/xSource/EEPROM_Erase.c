/**
 *
 * @file EEPROM_Erase.c
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
 * @verbatim 16 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Erase.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enMassErase(EEPROM_nMODULE enModuleArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    stRegister.uxShift = 0UL;
    stRegister.uxMask = MCU_MASK_BASE;
    stRegister.uptrAddress = EEPROM_DBGME_OFFSET;
    stRegister.uxValue = EEPROM_DBGME_R_KEY_ERASE | EEPROM_DBGME_R_ME_ERASE;
    enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enIsEraseInProgress(EEPROM_nMODULE enModuleArg, EEPROM_nBOOLEAN* penErasingArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) penErasingArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = EEPROM_DBGME_R_ME_BIT;
        stRegister.uxMask = EEPROM_DBGME_ME_ERASE;
        stRegister.uptrAddress = EEPROM_DBGME_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penErasingArg = (EEPROM_nBOOLEAN) stRegister.uxValue;
    }
    return (enErrorReg);
}

