/**
 *
 * @file EEPROM_Wait.c
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

#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

/**
 *
 * Local Definitions
 */

EEPROM_nERROR EEPROM__enIsWorking(EEPROM_nMODULE enModuleArg, EEPROM_nSTATUS* penStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    if(0UL != (uintptr_t) penStatusArg)
    {
        stRegister.u32Shift = EEPROM_DONE_R_WORKING_BIT;
        stRegister.u32Mask = EEPROM_DONE_WORKING_MASK;
        stRegister.uptrAddress = EEPROM_DONE_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (EEPROM_nSTATUS) stRegister.u32Value;
        }
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWait(EEPROM_nMODULE enModuleArg, uint32_t u32RetriesArg)
{
    EEPROM_nERROR enErrorReg;
    EEPROM_nSTATUS enStatusReg;

    if(0UL != u32RetriesArg)
    {
        do
        {
            enErrorReg = EEPROM__enIsWorking(enModuleArg, &enStatusReg);
            u32RetriesArg--;
        }while((EEPROM_enSTATUS_ACTIVE == enStatusReg) &&
               (0UL != u32RetriesArg) &&
               (EEPROM_enERROR_OK == enErrorReg));

        if((0UL == u32RetriesArg) &&
           (EEPROM_enERROR_OK == enErrorReg) &&
           (EEPROM_enSTATUS_ACTIVE == enStatusReg))
        {
            enErrorReg = EEPROM_enERROR_TIMEOUT;
        }
    }
    else
    {
        enErrorReg = EEPROM_enERROR_VALUE;
    }
    return (enErrorReg);
}




