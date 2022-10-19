/**
 *
 * @file SSI_InterruptRoutine.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SSI/Interrupt/InterruptRoutine/SSI_InterruptRoutine.h>

static SSI_pvfIRQVectorHandler_t SSI_pvIRQVectorHandler[(UBase_t) SSI_enMODULE_MAX] =
{
 &SSI0__vIRQVectorHandler,&SSI1__vIRQVectorHandler,
 &SSI2__vIRQVectorHandler,&SSI3__vIRQVectorHandler,
};

SSI_pvfIRQVectorHandler_t SSI__pvfGetIRQVectorHandler(SSI_nMODULE enModuleArg)
{
    SSI_pvfIRQVectorHandler_t pvfVectorReg;
    pvfVectorReg = SSI_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}

SSI_pvfIRQVectorHandler_t* SSI__pvfGetIRQVectorHandlerPointer(SSI_nMODULE enModuleArg)
{
    SSI_pvfIRQVectorHandler_t* pvfVectorReg;
    pvfVectorReg = &SSI_pvIRQVectorHandler[(UBase_t) enModuleArg];
    return (pvfVectorReg);
}
