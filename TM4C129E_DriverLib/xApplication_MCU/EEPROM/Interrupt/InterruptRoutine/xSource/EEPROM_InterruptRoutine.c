/**
 *
 * @file EEPROM_InterruptRoutine.c
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
#include <xApplication_MCU/EEPROM/Interrupt/InterruptRoutine/EEPROM_InterruptRoutine.h>

EEPROM_pvfIRQSourceHandler_t EEPROM__pvIRQVectorHandler[(uint32_t) EEPROM_enMODULE_MAX] =
{
    &EEPROM__vIRQVectorHandler
};

EEPROM_pvfIRQSourceHandler_t EEPROM__pvfGetIRQVectorHandler(EEPROM_nMODULE enModuleArg)
{
    EEPROM_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = EEPROM__pvIRQVectorHandler[enModuleArg];
    return (pvfFunctionReg);
}

EEPROM_pvfIRQSourceHandler_t* EEPROM__pvfGetIRQVectorHandlerPointer(EEPROM_nMODULE enModuleArg)
{
    EEPROM_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &EEPROM__pvIRQVectorHandler[enModuleArg];
    return (pvfFunctionReg);
}
