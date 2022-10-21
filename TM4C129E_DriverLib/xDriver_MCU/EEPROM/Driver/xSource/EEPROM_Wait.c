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

EEPROM_nERROR EEPROM__enIsWorking(EEPROM_nMODULE enModuleArg, EEPROM_nBOOLEAN* penStatusArg)
{
    EEPROM_Register_t stRegister;
    EEPROM_nERROR enErrorReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = EEPROM_enERROR_POINTER;
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = EEPROM_DONE_R_WORKING_BIT;
        stRegister.uxMask = EEPROM_DONE_WORKING_MASK;
        stRegister.uptrAddress = EEPROM_DONE_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
    }
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (EEPROM_nBOOLEAN) stRegister.uxValue;
    }
    return (enErrorReg);
}

EEPROM_nERROR EEPROM__enWait(EEPROM_nMODULE enModuleArg, UBase_t uxRetriesArg)
{
    EEPROM_nERROR enErrorReg;
    EEPROM_nBOOLEAN enStatusReg;

    enErrorReg = EEPROM_enERROR_OK;
    if(0UL == uxRetriesArg)
    {
        do
        {
            enErrorReg = EEPROM__enIsWorking(enModuleArg, &enStatusReg);
        }while((EEPROM_enTRUE == enStatusReg) &&
               (EEPROM_enERROR_OK == enErrorReg));
    }
    else
    {
        do
        {
            enErrorReg = EEPROM__enIsWorking(enModuleArg, &enStatusReg);
            uxRetriesArg--;
        }while((EEPROM_enTRUE == enStatusReg) &&
               (0UL != uxRetriesArg) &&
               (EEPROM_enERROR_OK == enErrorReg));

        if((0UL == uxRetriesArg) &&
           (EEPROM_enERROR_OK == enErrorReg) &&
           (EEPROM_enTRUE == enStatusReg))
        {
            enErrorReg = EEPROM_enERROR_TIMEOUT;
        }
    }
    return (enErrorReg);
}




