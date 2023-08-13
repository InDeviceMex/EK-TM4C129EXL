/**
 *
 * @file EEPROM_BlockCount.c
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
#include <xDriver_MCU/EEPROM/Driver/xHeader/EEPROM_BlockCount.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nERROR EEPROM__enGetBlockCount(EEPROM_nMODULE enModuleArg, UBase_t* puxBlockCountArg)
{
    EEPROM_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) puxBlockCountArg) ? EEPROM_enERROR_POINTER : EEPROM_enERROR_OK;

    if(EEPROM_enERROR_OK == enErrorReg)
    {
        EEPROM_Register_t stRegister;
        stRegister.uxShift = EEPROM_SIZE_R_BLKCNT_BIT;
        stRegister.uxMask = EEPROM_SIZE_BLKCNT_MASK;
        stRegister.uptrAddress = EEPROM_SIZE_OFFSET;
        enErrorReg = EEPROM__enReadRegister(enModuleArg, &stRegister);
        if(EEPROM_enERROR_OK == enErrorReg)
        {
            *puxBlockCountArg = stRegister.uxValue;
        }
    }
    return (enErrorReg);
}
