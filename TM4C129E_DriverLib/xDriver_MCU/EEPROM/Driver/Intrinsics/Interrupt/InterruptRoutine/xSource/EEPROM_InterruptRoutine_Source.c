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

static void EEPROM_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);

static EEPROM_pvfIRQSourceHandler_t EEPROM_vIRQSourceHandler[(uint32_t)EEPROM_enMODULE_MAX]
                                                            [(uint32_t) EEPROM_enINTERRUPT_MAX]=
{
 {
    &EEPROM_vIRQSourceHandler_Dummy,
    &EEPROM_vIRQSourceHandler_Dummy,
    &EEPROM_vIRQSourceHandler_Dummy,
    &EEPROM_vIRQSourceHandler_Dummy,
    &EEPROM_vIRQSourceHandler_Dummy
 },
};

static void EEPROM_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;

    while(1UL){}
}


EEPROM_pvfIRQSourceHandler_t EEPROM__pvfGetIRQSourceHandler(EEPROM_nMODULE enModuleArg,
                                                            EEPROM_nINTERRUPT enIntSourceArg)
{
    EEPROM_pvfIRQSourceHandler_t pvfFunctionReg;

    pvfFunctionReg = EEPROM_vIRQSourceHandler[(uint32_t) enModuleArg]
                                              [(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}


EEPROM_pvfIRQSourceHandler_t* EEPROM__pvfGetIRQSourceHandlerPointer(EEPROM_nMODULE enModuleArg,
                                                                    EEPROM_nINTERRUPT enIntSourceArg)
{
    EEPROM_pvfIRQSourceHandler_t* pvfFunctionReg;

    pvfFunctionReg = &EEPROM_vIRQSourceHandler[(uint32_t) enModuleArg]
                                               [(uint32_t) enIntSourceArg];

    return (pvfFunctionReg);
}
