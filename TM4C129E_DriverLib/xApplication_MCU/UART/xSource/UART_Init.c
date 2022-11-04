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

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Ready.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>
#include <xApplication_MCU/UART/Interrupt/UART_Interrupt.h>

UART_nERROR UART__enInit(UART_nMODULE enModuleArg)
{
    UART_nERROR enErrorReg;
    UART_pvfIRQVectorHandler_t pfIrqVectorHandlerReg;

    enErrorReg = UART__enSetReadyOnRunMode(enModuleArg);
    if(UART_enERROR_OK == enErrorReg)
    {
        pfIrqVectorHandlerReg = UART__pvfGetIRQVectorHandler(enModuleArg);
        enErrorReg = UART__enRegisterIRQVectorHandler(enModuleArg, pfIrqVectorHandlerReg);
    }

    return (enErrorReg);
}

