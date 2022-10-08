/**
 *
 * @file UART_InterruptRoutine.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/UART_InterruptRoutine.h>

void (*UART__pvIRQVectorHandler[(UBase_t) UART_enMODULE_MAX]) (void)=
{
    &UART0__vIRQVectorHandler,&UART1__vIRQVectorHandler,
    &UART2__vIRQVectorHandler,&UART3__vIRQVectorHandler,
    &UART4__vIRQVectorHandler,&UART5__vIRQVectorHandler,
    &UART6__vIRQVectorHandler,&UART7__vIRQVectorHandler
};

void (*UART__pvfGetIRQVectorHandler(UART_nMODULE enUARTModule))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = UART__pvIRQVectorHandler[(UBase_t) enUARTModule];
    return (pvfFunctionReg);
}

void (**UART__pvfGetIRQVectorHandlerPointer(UART_nMODULE enUARTModule))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &UART__pvIRQVectorHandler[(UBase_t) enUARTModule];
    return (pvfFunctionReg);
}
