/**
 *
 * @file EEPROM_InterruptSource.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>

EEPROM_nERROR EEPROM__enSetInterruptSourceState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE enStateArg)
{
    EEPROM_Register_t stRegister;
    stRegister.uxShift = EEPROM_INT_R_INT_BIT;
    stRegister.uxMask = EEPROM_INT_INT_MASK;
    stRegister.uptrAddress = EEPROM_INT_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;

    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetInterruptSourceState(EEPROM_nMODULE enModuleArg, EEPROM_nSTATE* penStateArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? EEPROM_enERROR_POINTER : EEPROM_enERROR_OK;

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        EEPROM_Register_t stRegister;
        stRegister.uxShift = EEPROM_INT_R_INT_BIT;
        stRegister.uxMask = EEPROM_INT_INT_MASK;
        stRegister.uptrAddress = EEPROM_INT_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *penStateArg = (EEPROM_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enEnableInterruptSource(EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enSetInterruptSourceState(enModuleArg, EEPROM_enSTATE_ENA);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enDisableInterruptSource(EEPROM_nMODULE enModuleArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = EEPROM__enSetInterruptSourceState(enModuleArg, EEPROM_enSTATE_DIS);
    return (enErrorReg);
}

