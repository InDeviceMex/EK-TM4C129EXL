/**
 *
 * @file SCB_InterruptRoutine_MemoryFault.c
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
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_MemoryFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

UBase_t SCB_MemoryFault_puxContext[8UL];

UART_CONTROL_t enUartMemoryControl =
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

UART_LINE_CONTROL_t enUartMemoryLineControl =
{
 UART_enSTATE_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_NONE,
 UART_enLENGTH_8BITS,
 UART_enFIFO_LEVEL_13_16,
 UART_enFIFO_LEVEL_13_16,
};

UART_LINE_t enUartMemoryLine =
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

void MemoryFault__vSendValues(void)
{
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enGPIOA);
    SYSCTL__enEnableRunMode(SYSCTL_enMODULE_0, SYSCTL_enUART0);
    UART__enInit(UART_enMODULE_0);
    UART__enSetCustomPrintfHandle(UART_enMODULE_0, &UART__enSetFifoDataByte);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 115200UL, 0UL, 0UL, &enUartMemoryControl, &enUartMemoryLineControl, &enUartMemoryLine, 0UL);

    UART__uxCustomPrintf(UART_enMODULE_0, "MEMORY FAULT exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_MemoryFault_puxContext[0UL],
                    SCB_MemoryFault_puxContext[1UL],
                    SCB_MemoryFault_puxContext[2UL],
                    SCB_MemoryFault_puxContext[3UL],
                    SCB_MemoryFault_puxContext[4UL],
                    SCB_MemoryFault_puxContext[7UL],
                    SCB_MemoryFault_puxContext[5UL],
                    SCB_MemoryFault_puxContext[6UL]);
}

void MemoryFault__vIRQVectorHandlerCustom(uintptr_t uptrModuleArg, void* pvArgument)
{
    SCB_t* pstSCBReg;
    UBase_t uxMemoryFault;
    UBase_t uxMemoryAddressValid;
    UBase_t uxMemoryAddressFault;
    SCB_pvfIRQSourceHandler_t pvfCallback;

    UBase_t* puxContext;
    UBase_t* puxContextOffset;

    pstSCBReg = (SCB_t*) uptrModuleArg;
    puxContext = (UBase_t*) pvArgument;

    uxMemoryAddressValid = 0UL;
    uxMemoryFault = pstSCBReg->CFSR;
    uxMemoryFault >>= 0UL;
    uxMemoryFault &= (UBase_t) SCB_enMEMORY_ALL;
    if(0UL == ((UBase_t) SCB_enMEMORY_ALL & uxMemoryFault))
    {
        UART__uxCustomPrintf(UART_enMODULE_0, "Memory Fault Exception triggered by Software \n\r");
        pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_SW);
        pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_SW);
    }
    else
    {
        if((UBase_t) SCB_enMEMORY_MLSPERR & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_MLSPERR_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Memory Fault on FPU Lazy State Preservation \n\r");
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_MLSPERR);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_MLSPERR);
        }
        if((UBase_t) SCB_enMEMORY_MSTKERR & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_MSTKERR_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0,"Stacking Memory Fault, it occurred on an Exception/IRQ entry\n\r"
                                            "Context Values cannot be valid\n\r");
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_MSTKERR);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_MSTKERR);
        }
        if((UBase_t) SCB_enMEMORY_MUNSTKERR & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_MUNSTKERR_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0,"Un-stacking Memory Fault, it occurred on an Exception/IRQ exit\n\r"
                                            "Context Values are related to the previous context\n\r");
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_MUNSTKERR);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_MUNSTKERR);
        }
        if((UBase_t) SCB_enMEMORY_MMARVALID & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_MMARVALID_CLEAR;
            uxMemoryAddressValid = 1UL;
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_MMARVALID);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_MMARVALID);
        }
        if((UBase_t) SCB_enMEMORY_DACCVIOL & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_DACCVIOL_CLEAR;
            UART__uxCustomPrintf(UART_enMODULE_0, "Data Access Violation Memory Fault\n\r");
            if(1UL == uxMemoryAddressValid)
            {
                uxMemoryAddressFault = pstSCBReg->MMFAR;
                UART__uxCustomPrintf(UART_enMODULE_0, "Attemp Data Access Fault Address: %X\n\r", uxMemoryAddressFault);
            }
            puxContextOffset = puxContext;
            puxContextOffset += 6UL;
            uxMemoryAddressFault = *puxContextOffset;
            UART__uxCustomPrintf(UART_enMODULE_0, "Instruction Fault Address: %X\n\r", uxMemoryAddressFault);
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_DACCVIOL);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_DACCVIOL);
        }
        if((UBase_t) SCB_enMEMORY_IACCVIOL & uxMemoryFault)
        {
            pstSCBReg->CFSR = SCB_CFSR_R_IACCVIOL_CLEAR;
            puxContextOffset = puxContext;
            puxContextOffset += 6UL;
            uxMemoryAddressFault = *puxContextOffset;
            UART__uxCustomPrintf(UART_enMODULE_0, "Instruction Access Fault Address: %X\n\r", uxMemoryAddressFault);
            pvfCallback = SCB_MemoryFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enMEMORY_BIT_IACCVIOL);
            pvfCallback(SCB_BASE, (void*) SCB_enMEMORY_BIT_IACCVIOL);
        }
    }

}


