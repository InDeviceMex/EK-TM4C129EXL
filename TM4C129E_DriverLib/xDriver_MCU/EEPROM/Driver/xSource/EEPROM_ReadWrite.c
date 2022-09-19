/**
 *
 * @file EEPROM_ReadWrite.c
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
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_ReadWrite.h>

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enWriteData(EEPROM_nMODULE enModuleArg, uint32_t u32WordArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = EEPROM_RDWR_R_VALUE_BIT;
        stRegister.u32Mask = EEPROM_RDWR_VALUE_MASK;
        stRegister.uptrAddress = EEPROM_RDWR_OFFSET;
        stRegister.u32Value = u32WordArg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadData(EEPROM_nMODULE enModuleArg, uint32_t* pu32WordArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) pu32WordArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = EEPROM_RDWR_R_VALUE_BIT;
        stRegister.u32Mask = EEPROM_RDWR_VALUE_MASK;
        stRegister.uptrAddress = EEPROM_RDWR_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *pu32WordArg = stRegister.u32Value;
    }
    return (enErrorReg);
}



EEPROM_nERROR EEPROM__enWriteDataWithIncrement(EEPROM_nMODULE enModuleArg, uint32_t u32WordArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = EEPROM_RDWRINC_R_VALUE_BIT;
        stRegister.u32Mask = EEPROM_RDWRINC_VALUE_MASK;
        stRegister.uptrAddress = EEPROM_RDWRINC_OFFSET;
        stRegister.u32Value = u32WordArg;
        enErrorReg = EEPROM__enWriteRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enReadDataWithIncrement(EEPROM_nMODULE enModuleArg, uint32_t* pu32WordArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) pu32WordArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = EEPROM__enWait(enModuleArg, EEPROM_TIMEOUT_MAX);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = EEPROM_RDWRINC_R_VALUE_BIT;
        stRegister.u32Mask = EEPROM_RDWRINC_VALUE_MASK;
        stRegister.uptrAddress = EEPROM_RDWRINC_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *pu32WordArg = stRegister.u32Value;
    }
    return (enErrorReg);
}




