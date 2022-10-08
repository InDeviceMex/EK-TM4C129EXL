/**
 *
 * @file QEI_InterruptRoutine.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>

void (*QEI__pvIRQVectorHandler[(UBase_t) QEI_enMODULE_MAX]) (void)=
{
    &QEI0__vIRQVectorHandler
};

void (*QEI__pvfGetIRQVectorHandler(QEI_nMODULE enQEIModule))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = QEI__pvIRQVectorHandler[(UBase_t) enQEIModule];
    return (pvfFunctionReg);
}

void (**QEI__pvfGetIRQVectorHandlerPointer(QEI_nMODULE enQEIModule))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &QEI__pvIRQVectorHandler[(UBase_t) enQEIModule];
    return (pvfFunctionReg);
}
