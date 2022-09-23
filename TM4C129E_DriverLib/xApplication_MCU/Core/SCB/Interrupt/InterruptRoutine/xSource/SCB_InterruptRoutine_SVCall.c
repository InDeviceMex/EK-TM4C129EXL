/**
 *
 * @file SCB_InterruptRoutine_SVCall.c
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
 * @verbatim 16 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_SVCall.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SVCall_u32Function = 0UL;

__attribute__((naked))
void SVCall__vIRQVectorHandler(void)
{
    __asm volatile(
        " push {r0-r1} \n"
        " ubfx    r0, LR, #2, #1 \n"
        " cmp    r0, #0 \n"
        " beq    MainStack \n"
        " b    ProcessStack \n"

        "MainStack: \n"
        " mrs    r0, MSP \n"
        " ldr    r1, [r0,#0x20] \n"
        " b    Process \n"

        "ProcessStack: \n"
        " mrs    r0, PSP \n"
        " ldr    r1, [r0,#0x18] \n"

        "Process: \n"
        " sub    r1, #2 \n"
        " ldrb    r0, [r1] \n"
        " and    r0, #0xFF \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        " movw R1, SVCall_u32Function\n"
        " movt R1, SVCall_u32Function\n"
#elif defined (__GNUC__ )
        " ldr R1, = SVCall_u32Function\n"
#endif
        " str R0, [R1, #0x0]\n"
        " pop {r0-r1} \n"
        " push {R0,R1,R2,LR} \n"
        " .global SVCall_u32Function \n"
        " .global SCB_SVCall__pvfGetIRQSourceHandler \n"
        " movw R0, #0X0\n"
        " movt R0, #0x0\n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        " movw R2, SVCall_u32Function\n"
        " movt R2, SVCall_u32Function\n"
#elif defined (__GNUC__ )
        " ldr R2, = SVCall_u32Function\n"
#endif
        " ldr R1, [R2]\n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
        " movw R2, SCB_SVCall__pvfGetIRQSourceHandler\n"
        " movt R2, SCB_SVCall__pvfGetIRQSourceHandler\n"
#elif defined (__GNUC__ )
        " ldr R2, = SCB_SVCall__pvfGetIRQSourceHandler\n"
#endif
        " blx R2 \n"
        " mov R2, R0 \n"
        " movw R0, #0xE000\n"
        " movt R0, #0xE000\n"
        " blx R2 \n"
        " pop {R0,R1,R2,LR} \n"
        " BX LR \n");
}



