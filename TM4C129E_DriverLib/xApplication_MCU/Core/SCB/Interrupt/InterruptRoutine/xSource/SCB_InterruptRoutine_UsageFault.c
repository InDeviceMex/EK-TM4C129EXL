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

UBase_t SCB_UsageFault_puxContext[8UL] = {0UL};

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

void UsageFault__vSendValues(void)
{
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__vInit();
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUartUsageControl, &enUartUsageLineControl, 921600UL, &enUartUsageLine );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    UART__uxPrintf(UART_enMODULE_0, "USAGE FAULT exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_UsageFault_puxContext[0UL],
                    SCB_UsageFault_puxContext[1UL],
                    SCB_UsageFault_puxContext[2UL],
                    SCB_UsageFault_puxContext[3UL],
                    SCB_UsageFault_puxContext[4UL],
                    SCB_UsageFault_puxContext[7UL],
                    SCB_UsageFault_puxContext[5UL],
                    SCB_UsageFault_puxContext[6UL]);
}

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
    " movw R6, SCB_UsageFault_puxContext\n"
    " movt R6, SCB_UsageFault_puxContext\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_UsageFault_puxContext\n"
#endif
    " ldr R5, [R4, #0X10]\n"
    " str R5, [R6, #0x0]\n"/*SCB_UsageFault_puxContext[0] R4*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x4]\n"/*SCB_UsageFault_puxContext[1] R5*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x8]\n"/*SCB_UsageFault_puxContext[2] R6*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0xC]\n"/*SCB_UsageFault_puxContext[3] R3*/
    " ldr R5, [R4, #0x20]\n"
    " str R5, [R6, #0x10]\n"/*SCB_UsageFault_puxContext[4] R52*/
    " ldr R5, [R4, #0x24]\n"
    " str R5, [R6, #0x14]\n"/*SCB_UsageFault_puxContext[5] LR*/
    " ldr R5, [R4, #0x28]\n"
    " str R5, [R6, #0x18]\n"/*SCB_UsageFault_puxContext[6] PC*/
    " ldr R5, [R4, #0x2C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_UsageFault_puxContext[7] PSR*/
    " b    ProcessUsage \n"

    "ProcessStackUsage: \n"
    " mrs    R4, PSP \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R6, SCB_UsageFault_puxContext\n"
    " movt R6, SCB_UsageFault_puxContext\n"
#elif defined (__GNUC__ )
    " ldr R6, = SCB_UsageFault_puxContext\n"
#endif
    " ldr R5, [R4, #0X0]\n"
    " str R5, [R6, #0x0]\n"/*SCB_UsageFault_puxContext[0] R4*/
    " ldr R5, [R4, #0x4]\n"
    " str R5, [R6, #0x4]\n"/*SCB_UsageFault_puxContext[1] R5*/
    " ldr R5, [R4, #0x8]\n"
    " str R5, [R6, #0x8]\n"/*SCB_UsageFault_puxContext[2] R6*/
    " ldr R5, [R4, #0xC]\n"
    " str R5, [R6, #0xC]\n"/*SCB_UsageFault_puxContext[3] R3*/
    " ldr R5, [R4, #0x10]\n"
    " str R5, [R6, #0x10]\n"/*SCB_UsageFault_puxContext[4] R52*/
    " ldr R5, [R4, #0x14]\n"
    " str R5, [R6, #0x14]\n"/*SCB_UsageFault_puxContext[5] LR*/
    " ldr R5, [R4, #0x18]\n"
    " str R5, [R6, #0x18]\n"/*SCB_UsageFault_puxContext[6] PC*/
    " ldr R5, [R4, #0x1C]\n"
    " str R5, [R6, #0x1C]\n"/*SCB_UsageFault_puxContext[7] PSR*/

    "ProcessUsage: \n"
    " pop {R4-R7}\n"
    " push {R0,R1,R2,LR} \n"
    " .global UsageFault__vSendValues \n"
    " .global UsageFault__vIRQVectorHandlerCustom \n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R2, UsageFault__vSendValues\n"
    " movt R2, UsageFault__vSendValues\n"
#elif defined (__GNUC__ )
    " ldr R2, = UsageFault__vSendValues\n"
#endif
    " blx R2 \n"
    " movw R0, #0xE000\n"
    " movt R0, #0xE000\n"
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R1, SCB_UsageFault_puxContext\n"
    " movt R1, SCB_UsageFault_puxContext\n"
#elif defined (__GNUC__ )
    " ldr R1, = SCB_UsageFault_puxContext\n"
#endif
#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    " movw R2, UsageFault__vIRQVectorHandlerCustom\n"
    " movt R2, UsageFault__vIRQVectorHandlerCustom\n"
#elif defined (__GNUC__ )
    " ldr R2, = UsageFault__vIRQVectorHandlerCustom\n"
#endif
    " blx R2 \n"
    " pop {R0,R1,R2,LR} \n"
    " BX LR \n");
}


void UsageFault__vIRQVectorHandlerCustom(uintptr_t uptrModuleArg, void* pvArgument)
{
    SCB_t* pstSCBReg;
    UBase_t uxUsageFault;
    UBase_t uxUsageAddressFault;
    SCB_pvfIRQSourceHandler_t pvfCallback;

    UBase_t* puxContext;
    UBase_t* puxContextOffset;

    pstSCBReg = (SCB_t*) uptrModuleArg;
    puxContext = (UBase_t*) pvArgument;

    uxUsageFault = pstSCBReg->CFSR;
    uxUsageFault >>= 16UL;
    uxUsageFault &= (UBase_t) SCB_enUSAGE_ALL;
    ;
    if(0UL == ((UBase_t) SCB_enUSAGE_ALL & uxUsageFault))
    {
        UART__uxPrintf(UART_enMODULE_0, "Usage Fault Exception triggered by Software \n\r");
        pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_SW);
        pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_SW);
    }
    else
    {
        puxContextOffset = puxContext;
        puxContextOffset += 6UL;
        uxUsageAddressFault = *puxContextOffset;
        if((UBase_t) SCB_enUSAGE_UNDEFINSTR & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_UNDEFINSTR_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "Undefined Instruction Usage Fault,  Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_UNDEFINSTR);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_UNDEFINSTR);
        }
        if((UBase_t) SCB_enUSAGE_INVSTATE & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_INVSTATE_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "Invalid Sate Register Usage Fault,  Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_INVSTATE);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_INVSTATE);
        }
        if((UBase_t) SCB_enUSAGE_INVPC & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_INVPC_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "Invalid PC Load Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_INVPC);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_INVPC);
        }
        if((UBase_t) SCB_enUSAGE_NOCP & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_NOCP_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "FPU Coprocessor has an invalid state.\n\r");
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_NOCP);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_NOCP);
        }
        if((UBase_t) SCB_enUSAGE_UNALIGNED & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_UNALIGNED_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "Unaligned Access Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_UNALIGNED);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_UNALIGNED);
        }
        if((UBase_t) SCB_enUSAGE_DIVBYZERO & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_DIVBYZERO_CLEAR;
            UART__uxPrintf(UART_enMODULE_0, "Divide by Zero Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_DIVBYZERO);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_DIVBYZERO);
        }
    }
}
