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

UART_CONTROL_t enUartHardControl =
{
    UART_enEOT_ALL,
    UART_enLOOPBACK_DIS,
    UART_enLINE_ENA,
    UART_enLINE_ENA,
    UART_enRTS_MODE_SOFT,
    UART_enCTS_MODE_SOFT,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
    UART_enLINE_DIS,
};

UART_LINE_CONTROL_t enUartHardLineControl =
{
 UART_enFIFO_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_DIS,
 UART_enPARITY_TYPE_EVEN,
 UART_enPARITY_STICK_DIS ,
 UART_enLENGTH_8BITS,
};

UART_LINE_t enUartHardLine =
{
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
 UART_enLINE_SELECT_PRIMARY,
};

__attribute__((naked))
void HardFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " ubfx    R4, LR, #2, #1 \n"
    " cmp    R4, #0 \n"
    " beq    MainStackHard \n"
    " b    ProcessStackHard \n"

    "MainStackHard: \n"
    " mrs    R4, MSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
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
    " b    ProcessHard \n"

    "ProcessStackHard: \n"
    " mrs    R4, PSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SCB_HardFault_pu32Context\n"
    " movt R6, SCB_HardFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_HardFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X0]\n"
    " str R5, [R6, #0x0]\n"/*SCB_HardFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x4]\n"
    " str R5, [R6, #0x4]\n"/*SCB_HardFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x8]\n"
    " str R5, [R6, #0x8]\n"/*SCB_HardFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0xC]\n"
    " str R5, [R6, #0xC]\n"/*SCB_HardFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x10]\n"
    " str R5, [R6, #0x10]\n"/*SCB_HardFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x14]\n"/*SCB_HardFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x18]\n"/*SCB_HardFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_HardFault_pu32Context[7] PSR*/

    "ProcessHard: \n"
    " pop {R4-R7}\n"
    " push {R0,LR} \n");

    uint32_t u32FaultType;
    uint32_t u32HardFault;
    uint32_t u32HardMemoryFault;
    SCB_pvfIRQSourceHandler_t pvfCallback;

    u32FaultType = SCB_HFSR_R;

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__vInit();
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUartHardControl, &enUartHardLineControl, 921600UL, &enUartHardLine );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    UART__u32Printf(UART_enMODULE_0, "HARD FAULT exception Detected\n\r"
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

    if(0UL != u32FaultType)
    {
        /*Bus, Usage or Memory fault */
        if(SCB_HFSR_R_FORCED_MASK & u32FaultType)
        {
            SCB_HFSR_R = SCB_HFSR_R_FORCED_MASK;
            u32HardFault = SCB_CFSR_R;
            if(((uint32_t)SCB_enMEMORY_ALL << 0UL) & u32HardFault)
            {
                UART__u32Printf(UART_enMODULE_0,"Memory Fault was harcoded \n\r");
                MemoryFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) SCB_HardFault_pu32Context);
            }
            else if(((uint32_t)SCB_enBUS_ALL << 8UL) & u32HardFault)
            {
                UART__u32Printf(UART_enMODULE_0,"Bus Fault was harcoded \n\r");
                BusFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) SCB_HardFault_pu32Context);
            }
            else if(((uint32_t)SCB_enUSAGE_ALL << 16UL) & u32HardFault)
            {
                UART__u32Printf(UART_enMODULE_0,"Usage Fault was harcoded \n\r");
                UsageFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) SCB_HardFault_pu32Context);
            }
            else
            {
                UART__u32Printf(UART_enMODULE_0,"Undefined Bus, Memory or Usage exception Detected\n\r");
            }

        }
        /*Hard fault*/
        if(SCB_HFSR_R_VECTTBL_MASK & u32FaultType)
        {
            SCB_HFSR_R = SCB_HFSR_R_VECTTBL_MASK;
            u32HardMemoryFault = SCB_HardFault_pu32Context[6UL];
            UART__u32Printf(UART_enMODULE_0,"Vector Table Read Fault, Fault Address: %X\n\r", u32HardMemoryFault);
            pvfCallback = SCB_HardFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enHARD_BIT_VECT);
            pvfCallback(SCB_BASE, (void*) SCB_enHARD_BIT_VECT);
        }
    }
    else
    {
        UART__u32Printf(UART_enMODULE_0, "Hard Fault Exception triggered by Software \n\r");
        pvfCallback = SCB_HardFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enHARD_BIT_SW);
        pvfCallback(SCB_BASE, (void*) SCB_enHARD_BIT_SW);
    }

    __asm volatile(
            " pop {R0,LR} \n"
            " BX LR \n");
}
