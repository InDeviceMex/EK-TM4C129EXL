/**
 *
 * @file SCB_InterruptRoutine_HardFault.c
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
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_HardFault.h>
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_BusFault.h>
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_MemoryFault.h>
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_UsageFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

uint32_t SCB_HardFault_pu32Context[8UL];

__attribute__((naked))
void HardFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " MRS R4, MSP\n"
#if defined (__TI_ARM__ )
    " movw R6, SCB_HardFault_pu32Context\n"
    " movt R6, SCB_HardFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_HardFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_HardFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_HardFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_HardFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_HardFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_HardFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_HardFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_HardFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_HardFault_pu32Context[7] PSR*/
    " pop {R4-R7}\n");

    uint32_t u32FaultType = 0UL;
    uint32_t u32HardFault = 0U;
    uint32_t u32HardMemoryFault = 0U;
    void(*pfvCallback)(void)  = (void(*)(void)) 0UL;

    u32FaultType = SCB_HFSR_R;

    UART__u32Printf(UART_enMODULE_0, "HardFault exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_HardFault_pu32Context[0UL],
                    SCB_HardFault_pu32Context[1UL],
                    SCB_HardFault_pu32Context[2UL],
                    SCB_HardFault_pu32Context[3UL],
                    SCB_HardFault_pu32Context[4UL],
                    SCB_HardFault_pu32Context[7UL],
                    SCB_HardFault_pu32Context[5UL],
                    SCB_HardFault_pu32Context[6UL]);

    /*Bus, Usage or Memory fault */
    if(SCB_HFSR_R_FORCED_MASK & u32FaultType)
    {
        SCB_HFSR_R = SCB_HFSR_R_FORCED_MASK;
        u32HardFault = SCB_CFSR_R;
        if(((uint32_t)SCB_enMEMORY_ALL << 0UL) & u32HardFault)
        {
            MemoryFault__vIRQVectorHandler();
        }
        else if(((uint32_t)SCB_enBUS_ALL << 8UL) & u32HardFault)
        {
            BusFault__vIRQVectorHandler();
        }
        else if(((uint32_t)SCB_enUSAGE_ALL << 16UL) & u32HardFault)
        {
            UsageFault__vIRQVectorHandler();
        }
        else
        {
            UART__u32Printf(UART_enMODULE_0, "Undefined Bus, Memory or Usage exception Detected\n\r");
        }

    }
    /*Hard fault*/
    else if(SCB_HFSR_R_VECTTBL_MASK & u32FaultType)
    {
        SCB_HFSR_R = SCB_HFSR_R_VECTTBL_MASK;
        u32HardMemoryFault = SCB_HardFault_pu32Context[6UL];
        UART__u32Printf(UART_enMODULE_0, "Instruction Access Fault Address: %X\n\r",
                        u32HardMemoryFault);
        pfvCallback = SCB_HardFault__pvfGetIRQSourceHandler(SCB_enHARD_BIT_VECT);
        pfvCallback();
    }
    else
    {
        UART__u32Printf(UART_enMODULE_0, "Undefined Hard exception Detected\n\r");
    }
    __asm volatile(" BX LR");
}
