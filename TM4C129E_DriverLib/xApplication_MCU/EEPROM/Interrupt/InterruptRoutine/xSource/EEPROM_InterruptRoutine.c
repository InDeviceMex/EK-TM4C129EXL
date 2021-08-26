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

static void (*EEPROM__pvIRQVectorHandler[1UL]) (void) =
{
    &EEPROM__vIRQVectorHandler
};

void (*EEPROM__pvfGetIRQVectorHandler(void))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = EEPROM__pvIRQVectorHandler[0UL];
    return (pvfFunctionReg);
}

void (**EEPROM__pvfGetIRQVectorHandlerPointer(void))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &EEPROM__pvIRQVectorHandler[0UL];
    return (pvfFunctionReg);
}
