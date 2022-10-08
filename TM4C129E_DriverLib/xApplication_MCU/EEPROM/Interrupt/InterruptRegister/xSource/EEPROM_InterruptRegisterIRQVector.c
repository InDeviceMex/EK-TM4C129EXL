/**
 *
 * @file EEPROM_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/EEPROM/Interrupt/InterruptRegister/xHeader/EEPROM_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/EEPROM/Intrinsics/xHeader/EEPROM_Dependencies.h>

EEPROM_nERROR EEPROM__enRegisterIRQVectorHandler(EEPROM_nMODULE enModuleArg, EEPROM_pvfIRQSourceHandler_t pfIrqVectorHandlerArg)
{
    EEPROM_nERROR enErrorReg;

    enErrorReg = (EEPROM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) EEPROM_enMODULE_MAX);
    if(EEPROM_enERROR_OK == enErrorReg)
    {
        enErrorReg = (EEPROM_nERROR) FLASH__enRegisterIRQSourceHandler(FLASH_enMODULE_0, FLASH_enINT_EEPROM, pfIrqVectorHandlerArg);
    }
    return (enErrorReg);

}

