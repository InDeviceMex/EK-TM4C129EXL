/**
 *
 * @file SYSCTL_InterruptRoutine.c
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
 * @verbatim 12 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSCTL/Interrupt/InterruptRoutine/SYSCTL_InterruptRoutine.h>

static void (*SYSCTL__pvIRQVectorHandler[1UL]) (void) =
{
    &SYSCTL__vIRQVectorHandler
};

void (*SYSCTL__pvfGetIRQVectorHandler(void))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = SYSCTL__pvIRQVectorHandler[(uint32_t) 0UL];
    return (pvfFunctionReg);
}

void (**SYSCTL__pvfGetIRQVectorHandlerPointer(void))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &SYSCTL__pvIRQVectorHandler[(uint32_t) 0UL];
    return (pvfFunctionReg);
}
