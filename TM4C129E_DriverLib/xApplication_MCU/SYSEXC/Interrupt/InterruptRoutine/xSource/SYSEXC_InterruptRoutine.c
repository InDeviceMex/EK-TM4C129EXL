/**
 *
 * @file SYSEXC_InterruptRoutine.c
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
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/SYSEXC_InterruptRoutine.h>

static SYSEXC_pvfIRQVectorHandler_t SYSEXC_pvIRQVectorHandler[(UBase_t) SYSEXC_enMODULE_MAX] =
{
 &SYSEXC__vIRQVectorHandler
};

SYSEXC_pvfIRQVectorHandler_t SYSEXC__pvfGetIRQVectorHandler(SYSEXC_nMODULE enModuleArg)
{
    SYSEXC_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = SYSEXC_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

SYSEXC_pvfIRQVectorHandler_t* SYSEXC__pvfGetIRQVectorHandlerPointer(SYSEXC_nMODULE enModuleArg)
{
    SYSEXC_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &SYSEXC_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
