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

uint32_t SYSEXC_pu32Context[8UL];

void SYSEXC__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ )
    " movw R6, SYSEXC_pu32Context\n"
    " movt R6, SYSEXC_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SYSEXC_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SYSEXC_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SYSEXC_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SYSEXC_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SYSEXC_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SYSEXC_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SYSEXC_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SYSEXC_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SYSEXC_pu32Context[7] PSR*/
    " pop {R4-R7}\n");

    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = SYSEXC_MIS_R;

    UART__u32Printf(UART_enMODULE_0, "System Exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SYSEXC_pu32Context[0UL],
                    SYSEXC_pu32Context[1UL],
                    SYSEXC_pu32Context[2UL],
                    SYSEXC_pu32Context[3UL],
                    SYSEXC_pu32Context[4UL],
                    SYSEXC_pu32Context[7UL],
                    SYSEXC_pu32Context[5UL],
                    SYSEXC_pu32Context[6UL]);

    if(0UL == (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_ALL))
    {
        pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_SW);
        pfvCallback();
    }
    else
    {
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_DENORMAL))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_DENORMAL;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_DENORMAL);
            pfvCallback();
        }
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_DIV0))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_DIV0;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_DIV0);
            pfvCallback();
        }
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_INVALID))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_INVALID;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_INVALID);
            pfvCallback();
        }
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_UNDERFLOW))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_UNDERFLOW;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_UNDERFLOW);
            pfvCallback();
        }
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_OVERFLOW))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_OVERFLOW;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_OVERFLOW);
            pfvCallback();
        }
        if(0UL != (u32Reg & (uint32_t) SYSEXC_enINT_SOURCE_INEXACT))
        {
            SYSEXC_IC_R = (uint32_t) SYSEXC_enINT_SOURCE_INEXACT;
            pfvCallback = SYSEXC__pvfGetIRQSourceHandler(SYSEXC_enINTERRUPT_INEXACT);
            pfvCallback();
        }
    }
}
