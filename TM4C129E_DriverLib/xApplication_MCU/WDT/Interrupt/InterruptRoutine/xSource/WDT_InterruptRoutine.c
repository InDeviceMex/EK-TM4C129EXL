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

void (*WDT__pvIRQVectorHandler[1UL]) (void) =
{
    &WDT01__vIRQVectorHandler
};

void (*WDT__pvfGetIRQVectorHandler(void))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = WDT__pvIRQVectorHandler[0UL];
    return (pvfFunctionReg);
}

void (**WDT__pvfGetIRQVectorHandlerPointer(void))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &WDT__pvIRQVectorHandler[0UL];
    return (pvfFunctionReg);
}
