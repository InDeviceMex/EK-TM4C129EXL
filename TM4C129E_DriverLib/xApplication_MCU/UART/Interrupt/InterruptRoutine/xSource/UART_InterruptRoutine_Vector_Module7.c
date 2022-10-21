/**
 *
 * @file UART_InterruptRoutine_Vector_Module7.c
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
#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module7.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

void UART7__vIRQVectorHandler(void)
{
    UBase_t uxErrorFlag = 0UL;
    volatile UBase_t uxReg = 0U;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRUART_R;
    if(SYSCTL_PRUART_R_UART7_NOREADY == (SYSCTL_PRUART_R_UART7_MASK & uxReady))
    {
        pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                   UART_enINT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) UART7_MIS_R;

        if(0UL == ((UBase_t) UART_enINTMASK_ALL & uxReg))
        {
            pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                       UART_enINT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) UART_enINTMASK_RING_INDICATOR & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_RING_INDICATOR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_RING_INDICATOR);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_CLEAR_TO_SEND & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_CLEAR_TO_SEND;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_CLEAR_TO_SEND);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_DATA_CARRIER_DETECT & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_DATA_CARRIER_DETECT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_DATA_CARRIER_DETECT);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_DATA_SET_READY & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_DATA_SET_READY;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_DATA_SET_READY);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_RECEIVE & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_TRANSMIT & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_TRANSMIT);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_RECEIVE_TIMEOUT & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_RECEIVE_TIMEOUT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_RECEIVE_TIMEOUT);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_FRAME_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART7_ICR_R = (UBase_t) UART_enINTMASK_FRAME_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_FRAME_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_PARITY_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART7_ICR_R = (UBase_t) UART_enINTMASK_PARITY_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_PARITY_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_BREAK_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART7_ICR_R = (UBase_t) UART_enINTMASK_BREAK_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_BREAK_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_OVERRUN_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART7_ICR_R = (UBase_t) UART_enINTMASK_OVERRUN_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_OVERRUN_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_END_OF_TRANSMISSION & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_END_OF_TRANSMISSION;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_END_OF_TRANSMISSION);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_BIT9_MODE & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_BIT9_MODE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_BIT9_MODE);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_DMA_RECEIVE & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_DMA_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_DMA_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) UART_enINTMASK_DMA_TRANSMIT & uxReg)
            {
                UART7_ICR_R = (UBase_t) UART_enINTMASK_DMA_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_7,
                                                           UART_enINT_DMA_TRANSMIT);
                pvfCallback();
            }

            if(1UL == uxErrorFlag)
            {
                UART7_ECR_R = 0xFFUL;
            }
        }
    }
}
