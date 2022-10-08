/**
 *
 * @file UART_InterruptRoutine_Vector_Module4.c
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
#include <xApplication_MCU/UART/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module4.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>

void UART4__vIRQVectorHandler(void)
{
    UBase_t uxErrorFlag = 0UL;
    volatile UBase_t uxReg = 0U;
    volatile UBase_t uxReady = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReady = SYSCTL_PRUART_R;
    if(SYSCTL_PRUART_R_UART4_NOREADY == (SYSCTL_PRUART_R_UART4_MASK & uxReady))
    {
        pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                   UART_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        uxReg = (UBase_t) UART4_MIS_R;

        if(0UL == ((UBase_t) UART_enINT_SOURCE_ALL & uxReg))
        {
            pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                       UART_enINTERRUPT_SW);
            pvfCallback();
        }
        else
        {
            if((UBase_t) UART_enINT_SOURCE_RING_INDICATOR & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_RING_INDICATOR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_RING_INDICATOR);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_CLEAR_TO_SEND & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_CLEAR_TO_SEND;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_CLEAR_TO_SEND);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_DATA_CARRIER_DETECT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_DATA_CARRIER_DETECT);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_DATA_SET_READY & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_DATA_SET_READY;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_DATA_SET_READY);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_RECEIVE & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_TRANSMIT & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_TRANSMIT);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_RECEIVE_TIMEOUT);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_FRAME_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_FRAME_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_FRAME_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_PARITY_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_PARITY_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_PARITY_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_BREAK_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_BREAK_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_BREAK_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_OVERRUN_ERROR & uxReg)
            {
                uxErrorFlag = 1UL;
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_OVERRUN_ERROR;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_OVERRUN_ERROR);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_END_OF_TRANSMISSION & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_END_OF_TRANSMISSION;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_END_OF_TRANSMISSION);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_BIT9_MODE & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_BIT9_MODE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_BIT9_MODE);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_DMA_RECEIVE & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_DMA_RECEIVE;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_DMA_RECEIVE);
                pvfCallback();
            }
            if((UBase_t) UART_enINT_SOURCE_DMA_TRANSMIT & uxReg)
            {
                UART4_ICR_R = (UBase_t) UART_enINT_SOURCE_DMA_TRANSMIT;
                pvfCallback = UART__pvfGetIRQSourceHandler(UART_enMODULE_4,
                                                           UART_enINTERRUPT_DMA_TRANSMIT);
                pvfCallback();
            }

            if(1UL == uxErrorFlag)
            {
                UART4_ECR_R = 0xFFUL;
            }
        }
    }
}
