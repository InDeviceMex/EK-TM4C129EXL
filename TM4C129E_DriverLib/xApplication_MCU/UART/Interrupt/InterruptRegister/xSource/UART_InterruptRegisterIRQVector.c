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

UART_nERROR UART__enRegisterIRQVectorHandler(UART_nMODULE enModuleArg, UART_pvfIRQVectorHandler_t pfIrqVectorHandlerArg)
{
    const SCB_nVECISR SCB_enVECISR_UART[(UBase_t) UART_enMODULE_MAX] =
    {
     SCB_enVECISR_UART0, SCB_enVECISR_UART1, SCB_enVECISR_UART2, SCB_enVECISR_UART3,
     SCB_enVECISR_UART4, SCB_enVECISR_UART5, SCB_enVECISR_UART6, SCB_enVECISR_UART7,
    };
    SCB_nVECISR enVectorReg;
    UART_nERROR enErrorReg;
    UART_pvfIRQVectorHandler_t* pvfVectorHandlerReg;

    enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) UART_enMODULE_MAX);
    if(UART_enERROR_OK == enErrorReg)
    {
        enVectorReg = SCB_enVECISR_UART[(UBase_t) enModuleArg];
        pvfVectorHandlerReg = UART__pvfGetIRQVectorHandlerPointer(enModuleArg);
        enErrorReg = (UART_nERROR) SCB__enRegisterIRQVectorHandler(SCB_enMODULE_0, enVectorReg, pfIrqVectorHandlerArg, pvfVectorHandlerReg);
    }
    return (enErrorReg);

}
