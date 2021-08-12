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
    {
    __asm(
        " MRS R0, MSP\n"
    #if defined (__TI_ARM__ )
        " movw R2, SYSEXC_pu32Context\n"
        " movt R2, SYSEXC_pu32Context\n"
    #elif defined (__GNUC__ )
        " ldr R2, = SYSEXC_pu32Context\n"
    #endif
        " ldr R1, [R0, #0X0]\n"
        " str R1, [R2, #0x0]\n"/*SYSEXC_pu32Context[0] R0*/
        " ldr R1, [R0, #0x4]\n"
        " str R1, [R2, #0x4]\n"/*SYSEXC_pu32Context[1] R1*/
        " ldr R1, [R0, #0x8]\n"
        " str R1, [R2, #0x8]\n"/*SYSEXC_pu32Context[2] R2*/
        " ldr R1, [R0, #0xC]\n"
        " str R1, [R2, #0xC]\n"/*SYSEXC_pu32Context[3] R3*/
        " ldr R1, [R0, #0x10]\n"
        " str R1, [R2, #0x10]\n"/*SYSEXC_pu32Context[4] R12*/
        " ldr R1, [R0, #0x14]\n"
        " str R1, [R2, #0x14]\n"/*SYSEXC_pu32Context[5] LR*/
        " ldr R1, [R0, #0x18]\n"
        " str R1, [R2, #0x18]\n"/*SYSEXC_pu32Context[6] PC*/
        " ldr R1, [R0, #0x1C]\n"
        " str R1, [R2, #0x1C]\n");/*SYSEXC_pu32Context[7] PSR*/
    };
    volatile uint32_t u32Reg = 0UL;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32Reg = SYSEXC_MIS_R;

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
