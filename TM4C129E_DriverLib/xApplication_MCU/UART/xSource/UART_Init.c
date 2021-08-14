/**
 *
 * @file UART_Init.c
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
#include <xApplication_MCU/UART/xHeader/UART_Init.h>

#include <xApplication_MCU/UART/Interrupt/UART_Interrupt.h>

void UART__vInit(void)
{
    void (*pfIrqVectorHandler) (void) = (void (*) (void)) 0UL;

    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_0);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_0);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_1);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_1);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_2);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_2);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_3);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_3);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_4);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_4);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_5);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_5);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_6);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_6);
    pfIrqVectorHandler = UART__pvfGetIRQVectorHandler(UART_enMODULE_7);
    UART__vRegisterIRQVectorHandler( pfIrqVectorHandler, UART_enMODULE_7);
}


