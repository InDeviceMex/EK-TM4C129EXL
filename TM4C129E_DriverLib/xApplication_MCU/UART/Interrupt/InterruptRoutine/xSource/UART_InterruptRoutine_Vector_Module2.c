/**
 *
 * @file UART_InterruptRoutine_Vector_Module2.c
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
#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module2.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

void UART2__vIRQVectorHandler(void)
{
    uint32_t u32ErrorFlag = 0UL;
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32Ready = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32Ready = SYSCTL_PRUART_R;
    if(SYSCTL_PRUART_R_UART2_NOREADY == (SYSCTL_PRUART_R_UART2_MASK & u32Ready))
    {
        pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                   UART_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        u32Reg = (uint32_t) UART2_MIS_R;

        if(0UL == ((uint32_t) UART_enINT_SOURCE_ALL & u32Reg))
        {
            pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                       UART_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((uint32_t) UART_enINT_SOURCE_RING_INDICATOR & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_RING_INDICATOR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_RING_INDICATOR);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_CLEAR_TO_SEND);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_DATA_CARRIER_DETECT);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_DATA_SET_READY & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_DATA_SET_READY;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_DATA_SET_READY);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_RECEIVE & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_RECEIVE);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_TRANSMIT & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_TRANSMIT);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_RECEIVE_TIMEOUT);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_FRAME_ERROR & u32Reg)
            {
                u32ErrorFlag = 1UL;
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_FRAME_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_FRAME_ERROR);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_PARITY_ERROR & u32Reg)
            {
                u32ErrorFlag = 1UL;
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_PARITY_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_PARITY_ERROR);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_BREAK_ERROR & u32Reg)
            {
                u32ErrorFlag = 1UL;
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_BREAK_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_BREAK_ERROR);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR & u32Reg)
            {
                u32ErrorFlag = 1UL;
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_OVERRUN_ERROR);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_END_OF_TRANSMISSION & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_END_OF_TRANSMISSION;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_END_OF_TRANSMISSION);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_BIT9_MODE & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_BIT9_MODE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_BIT9_MODE);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_DMA_RECEIVE & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_DMA_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_DMA_RECEIVE);
                pvfCallback();
            }
            if((uint32_t) UART_enINT_SOURCE_DMA_TRANSMIT & u32Reg)
            {
                UART2_ICR_R = (uint32_t) UART_enINT_SOURCE_DMA_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_2,
                                                           UART_enINTERRUPT_DMA_TRANSMIT);
                pvfCallback();
            }

            if(1UL == u32ErrorFlag)
            {
                UART2_ECR_R = 0xFFUL;
            }
        }
    }
}
