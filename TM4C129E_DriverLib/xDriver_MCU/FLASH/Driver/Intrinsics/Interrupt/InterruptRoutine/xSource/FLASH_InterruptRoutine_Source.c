/**
 *
 * @file FLASH_InterruptRoutine_Source.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>

static void FLASH_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);

static FLASH_pvfIRQSourceHandler_t FLASH_vIRQSourceHandler[(uint32_t) FLASH_enMODULE_MAX][(uint32_t) FLASH_enINT_MAX] =
{
 {
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy,
    &FLASH_vIRQSourceHandler_Dummy
 }
};

static void FLASH_vIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    (void) uptrModuleArg;
    (void) pvArgument;

    while(1UL){}
}

FLASH_pvfIRQSourceHandler_t FLASH__pvfGetIRQSourceHandler(FLASH_nMODULE enModuleArg,
                                                          FLASH_nINT enIntSourceArg)
{
    FLASH_pvfIRQSourceHandler_t pvfFunctionReg;
    pvfFunctionReg = FLASH_vIRQSourceHandler[(uint32_t) enModuleArg]
                                              [(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}

FLASH_pvfIRQSourceHandler_t* FLASH__pvfGetIRQSourceHandlerPointer(FLASH_nMODULE enModuleArg,
                                                                  FLASH_nINT enIntSourceArg)
{
    FLASH_pvfIRQSourceHandler_t* pvfFunctionReg;
    pvfFunctionReg = &FLASH_vIRQSourceHandler[(uint32_t) enModuleArg]
                                               [(uint32_t) enIntSourceArg];
    return (pvfFunctionReg);
}
