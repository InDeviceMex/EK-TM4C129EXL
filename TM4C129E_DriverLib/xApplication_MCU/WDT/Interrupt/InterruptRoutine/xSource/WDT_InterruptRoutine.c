/**
 *
 * @file WDT_InterruptRoutine.c
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
 * @verbatim 26 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/WDT/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>

static WDT_pvfIRQVectorHandler_t WDT_pvIRQVectorHandler[(UBase_t) WDT_enMODULE_MAX] =
{
 &WDT01__vIRQVectorHandler, &WDT01__vIRQVectorHandler
};

WDT_pvfIRQVectorHandler_t WDT__pvfGetIRQVectorHandler(WDT_nMODULE enModuleArg)
{
    WDT_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = WDT_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

WDT_pvfIRQVectorHandler_t* WDT__pvfGetIRQVectorHandlerPointer(WDT_nMODULE enModuleArg)
{
    WDT_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &WDT_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
