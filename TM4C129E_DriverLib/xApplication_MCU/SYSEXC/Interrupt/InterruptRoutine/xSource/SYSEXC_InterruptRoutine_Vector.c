/**
 *
 * @file SYSEXC_InterruptRoutine_Vector.c
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
 * @verbatim 11 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/SYSEXC/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Vector.h>

#include <xApplication_MCU/SYSEXC/Intrinsics/xHeader/SYSEXC_Dependencies.h>

UBase_t SYSEXC_puxContext[8UL];

void SYSEXC__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SYSEXC_puxContext\n"
    " movt R6, SYSEXC_puxContext\n"
#elif defined (__GNUC__ )
    " ldr R6, = SYSEXC_puxContext\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SYSEXC_puxContext[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SYSEXC_puxContext[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SYSEXC_puxContext[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SYSEXC_puxContext[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SYSEXC_puxContext[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SYSEXC_puxContext[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SYSEXC_puxContext[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SYSEXC_puxContext[7] PSR*/
    " pop {R4-R7}\n");

    volatile UBase_t uxReg = 0UL;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    uxReg = SYSEXC_MIS_R;

    UART__uxPrintf(UART_enMODULE_0, "System Exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SYSEXC_puxContext[0UL],
                    SYSEXC_puxContext[1UL],
                    SYSEXC_puxContext[2UL],
                    SYSEXC_puxContext[3UL],
                    SYSEXC_puxContext[4UL],
                    SYSEXC_puxContext[7UL],
                    SYSEXC_puxContext[5UL],
                    SYSEXC_puxContext[6UL]);

    if(0UL == (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_ALL))
    {
        pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_SW);
        pvfCallback();
    }
    else
    {
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_DENORMAL))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_DENORMAL;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_DENORMAL);
            pvfCallback();
        }
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_DIV0))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_DIV0;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_DIV0);
            pvfCallback();
        }
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_INVALID))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_INVALID;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_INVALID);
            pvfCallback();
        }
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_UNDERFLOW))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_UNDERFLOW;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_UNDERFLOW);
            pvfCallback();
        }
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_OVERFLOW))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_OVERFLOW;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_OVERFLOW);
            pvfCallback();
        }
        if(0UL != (uxReg & (UBase_t) SYSEXC_enINT_SOURCE_INEXACT))
        {
            SYSEXC_IC_R = (UBase_t) SYSEXC_enINT_SOURCE_INEXACT;
            pvfCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_INEXACT);
            pvfCallback();
        }
    }
}
