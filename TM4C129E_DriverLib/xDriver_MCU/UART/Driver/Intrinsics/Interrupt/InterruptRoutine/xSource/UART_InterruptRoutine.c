/**
 *
 * @file UART_InterruptRoutine.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/UART_InterruptRoutine.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

void (*UART__pvIRQVectorHandler[(uint32_t) UART_enMODULE_MAX]) (void)=
{
    &UART0__vIRQVectorHandler,&UART1__vIRQVectorHandler,&UART2__vIRQVectorHandler,&UART3__vIRQVectorHandler,
    &UART4__vIRQVectorHandler,&UART5__vIRQVectorHandler,&UART6__vIRQVectorHandler,&UART7__vIRQVectorHandler
};

void (*UART__pvfGetIRQVectorHandler(UART_nMODULE enUARTModule))(void)
{
    return (UART__pvIRQVectorHandler[(uint32_t) enUARTModule]);
}

void (**UART__pvfGetIRQVectorHandlerPointer(UART_nMODULE enUARTModule))(void)
{
    return ((void(**)(void)) &UART__pvIRQVectorHandler[(uint32_t) enUARTModule]);
}
