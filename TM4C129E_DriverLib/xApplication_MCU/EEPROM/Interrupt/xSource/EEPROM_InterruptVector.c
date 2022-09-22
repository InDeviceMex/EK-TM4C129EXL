/**
 *
 * @file EEPROM_InterruptVector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/EEPROM/Interrupt/xHeader/EEPROM_InterruptVector.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>


EEPROM_nERROR EEPROM__enSetInterruptVectorState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE enStateArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (EEPROM_nERROR) FLASH__enSetInterruptSourceStateByNumber(FLASH_enMODULE_0, FLASH_enINT_EEPROM, (FLASH_nSTATE) enStateArg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enSetInterruptSourceState(enModuleArg, enStateArg);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetInterruptVectorState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE* penStateArg)
{
    EEPROM_nERROR enErrorReg;
    FLASH_nSTATE enFlashStateReg;
    EEPROM_nSTATE enEepromStateReg;
    enFlashStateReg = FLASH_enSTATE_DIS;
    enEepromStateReg = EEPROM_enSTATE_DIS;
    enErrorReg = (EEPROM_nERROR) FLASH__enGetInterruptSourceStateByNumber(FLASH_enMODULE_0, FLASH_enINT_EEPROM, &enFlashStateReg);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enGetInterruptSourceState(enModuleArg, &enEepromStateReg);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        if((FLASH_enSTATE_DIS == enFlashStateReg) || (EEPROM_enSTATE_DIS == enEepromStateReg))
        {
            *penStateArg = EEPROM_enSTATE_DIS;
        }
        else
        {
            *penStateArg = EEPROM_enSTATE_ENA;
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enEnableInterruptVector(EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enSetInterruptVectorState(enModuleArg, EEPROM_enSTATE_ENA);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enDisableInterruptVector(EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enSetInterruptVectorState(enModuleArg, EEPROM_enSTATE_DIS);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enClearInterruptVector(EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (EEPROM_nERROR) FLASH__enClearInterruptSourceByNumber(FLASH_enMODULE_0, FLASH_enINT_EEPROM);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enStatusInterruptVector(EEPROM_nMODULE enModuleArg, EEPROM_nSTATUS* enStatusArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (EEPROM_nERROR) FLASH__enStatusInterruptSourceByNumber(FLASH_enMODULE_0, FLASH_enINT_EEPROM, (FLASH_nSTATUS*) enStatusArg);
    return (enErrorReg);
}
