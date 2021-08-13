/**
 *
 * @file UART_InterruptRoutine_Vector_Module0.c
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
#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module0.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

void UART0__vIRQVectorHandler(void)
{
    uint32_t u32ErrorFlag = 0UL;
    volatile uint32_t u32Reg = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = (uint32_t) UART0_MIS_R;

    if((uint32_t) UART_enINT_SOURCE_RING_INDICATOR & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_RING_INDICATOR;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_RING_INDICATOR);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_CLEAR_TO_SEND);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_DATA_CARRIER_DETECT);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_DATA_SET_READY & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_DATA_SET_READY;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_DATA_SET_READY);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_RECEIVE);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_TRANSMIT;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_TRANSMIT);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_RECEIVE_TIMEOUT);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_FRAME_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_FRAME_ERROR;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_FRAME_ERROR);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_PARITY_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_PARITY_ERROR;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_PARITY_ERROR);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_BREAK_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_BREAK_ERROR;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_BREAK_ERROR);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_OVERRUN_ERROR);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_END_OF_TRANSMISSION & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_END_OF_TRANSMISSION;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_END_OF_TRANSMISSION);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_BIT9_MODE & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_BIT9_MODE;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_BIT9_MODE);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_DMA_RECEIVE & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_DMA_RECEIVE;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_DMA_RECEIVE);
        pfvCallback();
    }
    if((uint32_t) UART_enINT_SOURCE_DMA_TRANSMIT & u32Reg)
    {
        UART0_ICR_R = (uint32_t) UART_enINT_SOURCE_DMA_TRANSMIT;
        pfvCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_0, UART_enINTERRUPT_DMA_TRANSMIT);
        pfvCallback();
    }

    if(1UL == u32ErrorFlag)
    {
        UART0_ECR_R = 0xFFUL;
    }
}
