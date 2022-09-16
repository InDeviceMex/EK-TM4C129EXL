/**
 *
 * @file EEPROM_CurrentOffset.c
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
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_CurrentOffset.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enSetCurrentOffset(EEPROM_nMODULE enModuleArg, uint32_t u32CurrentOffsetArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    stRegister.u32Shift = EEPROM_OFFSET_R_OFFSET_BIT;
    stRegister.u32Mask = EEPROM_OFFSET_OFFSET_MASK;
    stRegister.uptrAddress = EEPROM_OFFSET_OFFSET;
    stRegister.u32Value = u32CurrentOffsetArg;
    enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enGetCurrentOffset(EEPROM_nMODULE enModuleArg, uint32_t* pu32CurrentOffsetArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    if(0UL != (uintptr_t) pu32CurrentOffsetArg)
    {
        stRegister.u32Shift = EEPROM_OFFSET_R_OFFSET_BIT;
        stRegister.u32Mask = EEPROM_OFFSET_OFFSET_MASK;
        stRegister.uptrAddress = EEPROM_OFFSET_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *pu32CurrentOffsetArg = stRegister.u32Value;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    return (enErrorReg);
}





