/**
 *
 * @file UART_InterruptVector.c
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
#include <xApplication_MCU/UART/Interrupt/xHeader/UART_InterruptVector.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

static NVIC_nVECTOR UART__enGetInterruptVector(UART_nMODULE enModule);

static NVIC_nVECTOR UART__enGetInterruptVector(UART_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_UART0;
    uint32_t u32Module = 0UL;
    NVIC_nVECTOR NVIC_VECTOR_UART[(uint32_t) UART_enMODULE_MAX] =
    {
        NVIC_enVECTOR_UART0, NVIC_enVECTOR_UART1, NVIC_enVECTOR_UART2, NVIC_enVECTOR_UART3,
        NVIC_enVECTOR_UART4, NVIC_enVECTOR_UART5, NVIC_enVECTOR_UART6, NVIC_enVECTOR_UART7
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
    enVector = NVIC_VECTOR_UART[u32Module];
    return (enVector);
}

void UART__vEnInterruptVector(UART_nMODULE enModule, UART_nPRIORITY enUARTPriority)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_UART0;
    enVector = UART__enGetInterruptVector(enModule);
    NVIC__enEnableVector(NVIC_enMODULE_0, enVector, (NVIC_nPRIORITY) enUARTPriority);
}

void UART__vDisInterruptVector(UART_nMODULE enModule)
{
    NVIC_nVECTOR enVector = NVIC_enVECTOR_UART0;
    enVector = UART__enGetInterruptVector(enModule);
    NVIC__enDisableVector(NVIC_enMODULE_0, enVector);
}
