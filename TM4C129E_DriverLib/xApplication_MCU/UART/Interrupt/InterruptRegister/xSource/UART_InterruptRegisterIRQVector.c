/**
 *
 * @file UART_InterruptRegisterIRQVector.c
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
#include <xApplication_MCU/UART/Interrupt/InterruptRegister/xHeader/UART_InterruptRegisterIRQVector.h>

#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/UART_InterruptRoutine.h>
#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

void UART__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),UART_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_UART0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_UART[(uint32_t) UART_enMODULE_MAX]=
    {
        SCB_enVECISR_UART0, SCB_enVECISR_UART1, SCB_enVECISR_UART2, SCB_enVECISR_UART3,
        SCB_enVECISR_UART4, SCB_enVECISR_UART5, SCB_enVECISR_UART6, SCB_enVECISR_UART7
    };


    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
        enVector = SCB_enVECISR_UART[u32Module];
        SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVector, pfIrqVectorHandler, UART__pvfGetIRQVectorHandlerPointer((UART_nMODULE) u32Module));
    }
}
