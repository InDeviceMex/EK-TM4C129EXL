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
 * @verbatim 25 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRoutine/EEPROM_InterruptRoutine.h>

static void (*EEPROM__pvIRQVectorHandler[1UL]) (void) =
{
    &EEPROM__vIRQVectorHandler
};

void (*EEPROM__pvfGetIRQVectorHandler(void))(void)
{

    return (EEPROM__pvIRQVectorHandler[0UL]);
}

void (**EEPROM__pvfGetIRQVectorHandlerPointer(void))(void)
{
    return ((void(**)(void)) &EEPROM__pvIRQVectorHandler[0UL]);
}



