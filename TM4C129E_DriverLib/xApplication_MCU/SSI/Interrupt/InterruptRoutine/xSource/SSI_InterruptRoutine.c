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

void (*SSI__pvIRQVectorHandler[(UBase_t) SSI_enMODULE_MAX]) (void)=
{
    &SSI0__vIRQVectorHandler,&SSI1__vIRQVectorHandler,
    &SSI2__vIRQVectorHandler,&SSI3__vIRQVectorHandler,
};

void (*SSI__pvfGetIRQVectorHandler(SSI_nMODULE enSSIModule))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SSI__pvIRQVectorHandler[(UBase_t) enSSIModule];
    return (pvfFunctionReg);
}

void (**SSI__pvfGetIRQVectorHandlerPointer(SSI_nMODULE enSSIModule))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SSI__pvIRQVectorHandler[(UBase_t) enSSIModule];
    return (pvfFunctionReg);
}
