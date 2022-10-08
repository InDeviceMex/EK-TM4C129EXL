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

static void (*SYSEXC__pvIRQVectorHandler[1UL]) (void) =
{
    &SYSEXC__vIRQVectorHandler
};

void (*SYSEXC__pvfGetIRQVectorHandler(void))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SYSEXC__pvIRQVectorHandler[(UBase_t) 0UL];
    return (pvfFunctionReg);
}

void (**SYSEXC__pvfGetIRQVectorHandlerPointer(void))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SYSEXC__pvIRQVectorHandler[(UBase_t) 0UL];
    return (pvfFunctionReg);
}
