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
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_HardFault.h>
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_MemoryFault.h>
#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_UsageFault.h>

#include <xApplication_MCU/Core/SCB/Interrupt/InterruptRoutine/xHeader/SCB_InterruptRoutine_Source.h>
#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

UBase_t SCB_HardFault_puxContext[8UL];

UART_CONTROL_t enUartHardControl =
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

UART_LINE_CONTROL_t enUartHardLineControl =
{
 UART_enSTATE_ENA,
 UART_enSTOP_ONE,
 UART_enPARITY_NONE,
 UART_enLENGTH_8BITS,
 UART_enFIFO_LEVEL_13_16,
 UART_enFIFO_LEVEL_13_16,
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


void HardFault__vSendValues(void)
{
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOA);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUART0);
    UART__enInit(UART_enMODULE_0);
    UART__enSetCustomPrintfHandle(UART_enMODULE_0, &UART__enSetFifoDataByte);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, 921600UL, 0UL, 0UL, &enUartHardControl, &enUartHardLineControl, &enUartHardLine, 0UL);

    UART__uxCustomPrintf(UART_enMODULE_0, "HARD FAULT exception Detected\n\r"
                    "Core Register dump:\n\r"
                    "R0: %X, R1: %X\n\r"
                    "R2: %X, R3: %X\n\r"
                    "R12: %X xPSR: %X\n\r"
                    "LR: %X, PC: %X\n\r",
                    SCB_HardFault_puxContext[0UL],
                    SCB_HardFault_puxContext[1UL],
                    SCB_HardFault_puxContext[2UL],
                    SCB_HardFault_puxContext[3UL],
                    SCB_HardFault_puxContext[4UL],
                    SCB_HardFault_puxContext[7UL],
                    SCB_HardFault_puxContext[5UL],
                    SCB_HardFault_puxContext[6UL]);
}

void HardFault__vIRQVectorHandlerCustom(uintptr_t uptrModuleArg, void* pvArgument)
{
    SCB_t* pstSCBReg;
    UBase_t* puxContext;
    UBase_t uxHardFault;
    SCB_pvfIRQSourceHandler_t pvfCallback;
    UBase_t* puxContextOffset;
    UBase_t uxFaultType;
    UBase_t uxHardMemoryFault;

    pstSCBReg = (SCB_t*) uptrModuleArg;
    puxContext = (UBase_t*) pvArgument;

    uxFaultType = SCB_HFSR_R;

    if(0UL != uxFaultType)
    {
        /*Bus, Usage or Memory fault */
        if(SCB_HFSR_R_FORCED_MASK & uxFaultType)
        {
            pstSCBReg->HFSR = SCB_HFSR_R_FORCED_MASK;
            uxHardFault = pstSCBReg->CFSR;
            if(((UBase_t)SCB_enMEMORY_ALL << 0UL) & uxHardFault)
            {
                UART__uxCustomPrintf(UART_enMODULE_0,"Memory Fault was harcoded \n\r");
                MemoryFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) pvArgument);
            }
            else if(((UBase_t)SCB_enBUS_ALL << 8UL) & uxHardFault)
            {
                UART__uxCustomPrintf(UART_enMODULE_0,"Bus Fault was harcoded \n\r");
                BusFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) pvArgument);
            }
            else if(((UBase_t)SCB_enUSAGE_ALL << 16UL) & uxHardFault)
            {
                UART__uxCustomPrintf(UART_enMODULE_0,"Usage Fault was harcoded \n\r");
                UsageFault__vIRQVectorHandlerCustom(SCB_BASE, (void*) pvArgument);
            }
            else
            {
                UART__uxCustomPrintf(UART_enMODULE_0,"Undefined Bus, Memory or Usage exception Detected\n\r");
            }

        }
        /*Hard fault*/
        if(SCB_HFSR_R_VECTTBL_MASK & uxFaultType)
        {
            pstSCBReg->HFSR = SCB_HFSR_R_VECTTBL_MASK;
            puxContextOffset = puxContext;
            puxContextOffset += 6UL;
            uxHardMemoryFault = *puxContextOffset;
            UART__uxCustomPrintf(UART_enMODULE_0,"Vector Table Read Fault, Fault Address: %X\n\r", uxHardMemoryFault);
            pvfCallback = SCB_HardFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enHARD_BIT_VECT);
            pvfCallback(SCB_BASE, (void*) SCB_enHARD_BIT_VECT);
        }
    }
    else
    {
        UART__uxCustomPrintf(UART_enMODULE_0, "Hard Fault Exception triggered by Software \n\r");
        pvfCallback = SCB_HardFault__pvfGetIRQSourceHandler(SCB_enMODULE_0, SCB_enHARD_BIT_SW);
        pvfCallback(SCB_BASE, (void*) SCB_enHARD_BIT_SW);
    }
}
