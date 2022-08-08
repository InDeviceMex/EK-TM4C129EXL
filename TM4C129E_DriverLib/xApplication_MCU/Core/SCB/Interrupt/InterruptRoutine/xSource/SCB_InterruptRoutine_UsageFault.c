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

UART_CONTROL_t enUartUsageControl =
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

UART_LINE_CONTROL_t enUartUsageLineControl =
{
 UART_enFIFO_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_DIS,
 UART_enPARITY_TYPE_EVEN,
 UART_enPARITY_STICK_DIS ,
 UART_enLENGTH_8BITS,
};

UART_LINE_t enUartUsageLine =
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
void UsageFault__vIRQVectorHandler(void)
{
    __asm volatile(
    " PUSH {R4-R7}\n"
    " ubfx    R4, LR, #2, #1 \n"
    " cmp    R4, #0 \n"
    " beq    MainStackUsage \n"
    " b    ProcessStackUsage \n"

    "MainStackUsage: \n"
    " mrs    R4, MSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
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
    " b    ProcessUsage \n"

    "ProcessStackUsage: \n"
    " mrs    R4, PSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SCB_UsageFault_pu32Context\n"
    " movt R6, SCB_UsageFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_UsageFault_pu32Context\n"
#endif
    " ldr R5, [R4, #0X0]\n"
    " str R5, [R6, #0x0]\n"/*SCB_UsageFault_pu32Context[0] R4*/
    " ldr R5, [R4, #0x4]\n"
    " str R5, [R6, #0x4]\n"/*SCB_UsageFault_pu32Context[1] R5*/
    " ldr R5, [R4, #0x8]\n"
    " str R5, [R6, #0x8]\n"/*SCB_UsageFault_pu32Context[2] R6*/
    " ldr R5, [R4, #0xC]\n"
    " str R5, [R6, #0xC]\n"/*SCB_UsageFault_pu32Context[3] R3*/
    " ldr R5, [R4, #0x10]\n"
    " str R5, [R6, #0x10]\n"/*SCB_UsageFault_pu32Context[4] R52*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x14]\n"/*SCB_UsageFault_pu32Context[5] LR*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x18]\n"/*SCB_UsageFault_pu32Context[6] PC*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_UsageFault_pu32Context[7] PSR*/

    "ProcessUsage: \n"
    " pop {R4-R7}\n"
    " push {R0,LR} \n");

    uint32_t u32UsageFault = 0U;
    uint32_t u32UsageAddressFault = 0U;
    void(*pvfCallback)(void)  = (void(*)(void)) 0UL;

    u32UsageFault = SCB_CFSR_R;
    u32UsageFault >>= 16UL;
    u32UsageFault &= (uint32_t) SCB_enUSAGE_ALL;

    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__vInit();
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUartUsageControl, &enUartUsageLineControl, 921600UL, &enUartUsageLine );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);
    GraphTerm__vClearScreen(UART_enMODULE_0);
    GraphTerm__vHideCursor(UART_enMODULE_0);
    GraphTerm__vSetFontColor(UART_enMODULE_0, 0xFFUL, 0UL,0UL );

    GraphTerm__u32Printf(UART_enMODULE_0,0UL,0UL, "UsageFault exception Detected\n\r"
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


    if(0UL == ((uint32_t) SCB_enUSAGE_ALL & u32UsageFault))
    {
        pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_SW);
        pvfCallback();
    }
    else
    {
        if((uint32_t) SCB_enUSAGE_UNDEFINSTR & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_UNDEFINSTR_CLEAR;
            u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
            GraphTerm__u32Printf(UART_enMODULE_0,7UL,0UL, "Undefined Instruction Fault Address: %X\n\r",
                            u32UsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_UNDEFINSTR);
            pvfCallback();
        }
        if((uint32_t) SCB_enUSAGE_INVSTATE & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_INVSTATE_CLEAR;
            u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
            GraphTerm__u32Printf(UART_enMODULE_0,7UL,0UL, "Invalid Sate Instruction Fault Address: %X\n\r",
                            u32UsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_INVSTATE);
            pvfCallback();
        }
        if((uint32_t) SCB_enUSAGE_INVPC & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_INVPC_CLEAR;
            u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
            UART__u32Printf(UART_enMODULE_0,
                            "Invalid PC Load Fault Address: %X\n\r",
                            u32UsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_INVPC);
            pvfCallback();
        }
        if((uint32_t) SCB_enUSAGE_NOCP & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_NOCP_CLEAR;
            UART__u32Printf(UART_enMODULE_0,
                            "FPU Coprocessor has an invalid state.\n\r");
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_NOCP);
            pvfCallback();
        }
        if((uint32_t) SCB_enUSAGE_UNALIGNED & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_UNALIGNED_CLEAR;
            u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
            UART__u32Printf(UART_enMODULE_0,
                            "Unaligned Fault Address: %X\n\r",
                            u32UsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_UNALIGNED);
            pvfCallback();
        }
        if((uint32_t) SCB_enUSAGE_DIVBYZERO & u32UsageFault)
        {
            SCB_CFSR_R = SCB_CFSR_R_DIVBYZERO_CLEAR;
            u32UsageAddressFault = SCB_UsageFault_pu32Context[6UL];
            UART__u32Printf(UART_enMODULE_0,
                            "Div0 Fault Address: %X\n\r",
                            u32UsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enUSAGE_BIT_DIVBYZERO);
            pvfCallback();
        }
    }
    __asm volatile(
            " pop {R0,LR} \n"
            " BX LR");
}

