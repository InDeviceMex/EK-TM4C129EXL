/**
 *
 * @file SYSTICK_InterruptRoutine.c
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
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Interrupt/InterruptRoutine/SYSTICK_InterruptRoutine.h>
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_Defines.h>

static SYSTICK_pvfIRQVectorHandler_t SYSTICK_pvIRQVectorHandler[(UBase_t) SYSTICK_enMODULE_MAX] =
{
  &SYSTICK__vIRQVectorHandler,
};

SYSTICK_pvfIRQVectorHandler_t SYSTICK__pvfGetIRQVectorHandler(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = SYSTICK_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

SYSTICK_pvfIRQVectorHandler_t* SYSTICK__pvfGetIRQVectorHandlerPointer(SYSTICK_nMODULE enModuleArg)
{
    SYSTICK_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &SYSTICK_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
