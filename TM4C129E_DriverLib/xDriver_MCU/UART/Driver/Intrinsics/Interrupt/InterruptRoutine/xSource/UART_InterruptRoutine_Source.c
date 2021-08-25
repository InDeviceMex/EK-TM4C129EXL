/**
 *
 * @file UART_InterruptRoutine_Source.c
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
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>

void UART_vIRQSourceHandler_Dummy(void);

void (*UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_MAX]
                              [(uint32_t) UART_enINTERRUPT_MAX]) (void) =
{
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    },
    {
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy,
         &UART_vIRQSourceHandler_Dummy,&UART_vIRQSourceHandler_Dummy
    }
};

void UART_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}

void (*UART__pvfGetIRQSourceHandler(UART_nMODULE enUARTSubmodule,
                                    UART_nINTERRUPT enUARTInterruptNum))(void)
{
    void(*pvfFunctionReg)(void) = (void(*)(void)) 0UL;
    pvfFunctionReg = UART__vIRQSourceHandler[(uint32_t) enUARTSubmodule]
                                            [(uint32_t)enUARTInterruptNum];
    return (pvfFunctionReg);
}

void (**UART__pvfGetIRQSourceHandlerPointer(UART_nMODULE enUARTSubmodule,
                                            UART_nINTERRUPT enUARTInterruptNum))(void)
{
    void(**pvfFunctionReg)(void) = (void(**)(void)) 0UL;
    pvfFunctionReg = (void(**)(void)) &UART__vIRQSourceHandler[(uint32_t) enUARTSubmodule]
                                                              [(uint32_t)enUARTInterruptNum];
    return (pvfFunctionReg);
}
