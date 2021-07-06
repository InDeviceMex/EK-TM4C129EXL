/**
 *
 * @file EEPROM_InterruptRoutine_Source.c
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
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/EEPROM_InterruptRoutine_Source.h>

static void EEPROM_vIRQSourceHandler_Dummy(void);

static void (*EEPROM__vIRQSourceHandler[(uint32_t) EEPROM_enINTERRUPT_MAX]) (void)=
{&EEPROM_vIRQSourceHandler_Dummy,
 &EEPROM_vIRQSourceHandler_Dummy,
 &EEPROM_vIRQSourceHandler_Dummy,
 &EEPROM_vIRQSourceHandler_Dummy,};

static void EEPROM_vIRQSourceHandler_Dummy(void)
{

}

void (*EEPROM__pvfGetIRQSourceHandler(EEPROM_nINTERRUPT enInterruptSourceArg))(void)
{
    return (EEPROM__vIRQSourceHandler[(uint32_t) enInterruptSourceArg]);
}

void (**EEPROM__pvfGetIRQSourceHandlerPointer(EEPROM_nINTERRUPT enInterruptSourceArg))(void)
{
    return ((void(**)(void)) &EEPROM__vIRQSourceHandler[(uint32_t) enInterruptSourceArg]);
}



