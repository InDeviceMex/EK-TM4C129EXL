/**
 *
 * @file SCB_InterruptRoutine_UsageFault.c
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
 * @verbatim 15 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_UsageFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SCB_UsageFault_pu32Context[8UL] = {0UL};

__attribute__((naked))
void UsageFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ )
    " movw R6, SCB_UsageFault_pu32Context\n"
    " movt R6, SCB_UsageFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_UsageFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_UsageFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_UsageFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_UsageFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_UsageFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_UsageFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_UsageFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_UsageFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_UsageFault_pu32Context[7] PSR*/
    " pop {R4-R7}\n");

    uint32_t u32UsageFault = 0U;
    uint32_t u32UsageAddressFault = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32UsageFault = SCB_CFSR_R;
    u32UsageFault >>= 16UL;
    u32UsageFault &= (uint32_t) SCB_enUSAGE_ALL;

    UART__u32Printf(UART_enMODULE_0, "UsageFault exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_UsageFault_pu32Context[0UL],
                    SCB_UsageFault_pu32Context[1UL],
                    SCB_UsageFault_pu32Context[2UL],
                    SCB_UsageFault_pu32Context[3UL],
                    SCB_UsageFault_pu32Context[4UL],
                    SCB_UsageFault_pu32Context[7UL],
                    SCB_UsageFault_pu32Context[5UL],
                    SCB_UsageFault_pu32Context[6UL]);


    switch(u32UsageFault)
    {
        case (uint32_t) SCB_enUSAGE_UNDEFINSTR:
                SCB_CFSR_R = SCB_CFSR_R_UNDEFINSTR_CLEAR;
                u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Undefined Instruction Fault Address: %X\n\r",
                                u32UsageAddressFault);
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_UNDEFINSTR);
                pfvCallback();
                break;
        case (uint32_t) SCB_enUSAGE_INVSTATE:
                SCB_CFSR_R = SCB_CFSR_R_INVSTATE_CLEAR;
                u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0, "Invalid Sate Instruction Fault Address: %X\n\r",
                                u32UsageAddressFault);
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_INVSTATE);
                pfvCallback();
                break;
        case (uint32_t) SCB_enUSAGE_INVPC:
                SCB_CFSR_R = SCB_CFSR_R_INVPC_CLEAR;
                u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0,
                                "Invalid PC Load Fault Address: %X\n\r",
                                u32UsageAddressFault);
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_INVPC);
                pfvCallback();
                break;
        case (uint32_t) SCB_enUSAGE_NOCP:
                SCB_CFSR_R = SCB_CFSR_R_NOCP_CLEAR;
                UART__u32Printf(UART_enMODULE_0,
                                "FPU Coprocessor has an invalid state.\n\r");
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_NOCP);
                pfvCallback();
                break;
        case (uint32_t) SCB_enUSAGE_UNALIGNED:
                SCB_CFSR_R = SCB_CFSR_R_UNALIGNED_CLEAR;
                u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0,
                                "Unaligned Fault Address: %X\n\r",
                                u32UsageAddressFault);
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_UNALIGNED);
                pfvCallback();
                break;
        case (uint32_t) SCB_enUSAGE_DIVBYZERO:
                SCB_CFSR_R = SCB_CFSR_R_DIVBYZERO_CLEAR;
                u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
                UART__u32Printf(UART_enMODULE_0,
                                "Div0 Fault Address: %X\n\r",
                                u32UsageAddressFault);
                pfvCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_DIVBYZERO);
                pfvCallback();
                break;
        default:
            break;
    }
    __asm volatile(" BX LR");
}

