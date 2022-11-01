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

UBase_t SCB_UsageFault_puxContext[8UL];

UART_CONTROL_t enUartUsageControl =
{
    UART_enEOT_ALL,
    UART_enSTATE_DIS,
    UART_enSTATE_ENA,
    UART_enSTATE_ENA,
    UART_enSTATE_ENA,
    UART_enLINE_MODE_SOFT,
    UART_enLINE_MODE_SOFT,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
    UART_enSTATE_DIS,
    UART_enLEVEL_LOW,
    UART_enLEVEL_LOW,
    UART_enLEVEL_LOW,
};

UART_LINE_CONTROL_t enUartUsageLineControl =
{
 UART_enSTATE_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_NONE,
 UART_enLENGTH_8BITS,
 UART_enFIFO_LEVEL_13_16,
 UART_enFIFO_LEVEL_13_16,
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
    UART__enInit(UART_enMODULE_0);
    UART__enSetCustomPrintfHandle(UART_enMODULE_0, &UART__enSetFifoDataByte);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 921600UL, 0UL, 0UL, &enUartUsageControl, &enUartUsageLineControl, &enUartUsageLine, 0UL);

    UART__uxCustomPrintf(UART_enMODULE_0, "USAGE FAULT exception Detected\n\r"
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
        UART__uxCustomPrintf(UART_enMODULE_0, "Usage Fault Exception triggered by Software \n\r");
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
            UART__uxCustomPrintf(UART_enMODULE_0, "Undefined Instruction Usage Fault,  Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_UNDEFINSTR);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_UNDEFINSTR);
        }
        if((UBase_t) SCB_enUSAGE_INVSTATE & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_INVSTATE_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Invalid Sate Register Usage Fault,  Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_INVSTATE);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_INVSTATE);
        }
        if((UBase_t) SCB_enUSAGE_INVPC & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_INVPC_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Invalid PC Load Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_INVPC);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_INVPC);
        }
        if((UBase_t) SCB_enUSAGE_NOCP & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_NOCP_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "FPU Coprocessor has an invalid state.\n\r");
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_NOCP);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_NOCP);
        }
        if((UBase_t) SCB_enUSAGE_UNALIGNED & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_UNALIGNED_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Unaligned Access Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_UNALIGNED);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_UNALIGNED);
        }
        if((UBase_t) SCB_enUSAGE_DIVBYZERO & uxUsageFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_DIVBYZERO_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Divide by Zero Usage Fault, Fault Address: %X\n\r", uxUsageAddressFault);
            pvfCallback = SCB_UsageFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enUSAGE_BIT_DIVBYZERO);
            pvfCallback(SCB_BASE, (void*) SCB_enUSAGE_BIT_DIVBYZERO);
        }
    }
}
