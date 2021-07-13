/**
 *
 * @file UART_Init.c
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
 * @verbatim 10 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/App/xHeader/UART_Init.h>

#include <xDriver_MCU/UART/Driver/UART_Driver.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vInit(void)
{
    UART__vRegisterIRQVectorHandler( &UART0__vIRQVectorHandler, UART_enMODULE_0);
    UART__vRegisterIRQVectorHandler( &UART1__vIRQVectorHandler, UART_enMODULE_1);
    UART__vRegisterIRQVectorHandler( &UART2__vIRQVectorHandler, UART_enMODULE_2);
    UART__vRegisterIRQVectorHandler( &UART3__vIRQVectorHandler, UART_enMODULE_3);
    UART__vRegisterIRQVectorHandler( &UART4__vIRQVectorHandler, UART_enMODULE_4);
    UART__vRegisterIRQVectorHandler( &UART5__vIRQVectorHandler, UART_enMODULE_5);
    UART__vRegisterIRQVectorHandler( &UART6__vIRQVectorHandler, UART_enMODULE_6);
    UART__vRegisterIRQVectorHandler( &UART7__vIRQVectorHandler, UART_enMODULE_7);
}
